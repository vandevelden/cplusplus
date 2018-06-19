#include "Drill2.h"
#include <vector>
#include <math.h>

using namespace std;


std::vector<int> opencourse::SqInRect::sqInRect(int lng, int wdth)
{
    vector<int> vec;
    int real_length =0;
    int real_width =0;

    cout << "hello vector" << endl;
    
    real_length = (lng > wdth)? lng:wdth;
    real_width = (lng > wdth)? wdth:lng;

    real_length -= real_width;

    if (real_length==0){
        return vec;
    }

    vec.push_back(real_width);

    int left_area = real_length * real_width;
    cout <<  "left_area" << left_area << " real_width "<< real_width << endl;

    // while (left_area > 0)
    if (left_area > 0)
    {   
        
        //int smaller = (real_length < real_width)? real_length: real_width;
        cout <<  "left_area" << left_area << " real_width "<< real_width << endl;
        for (int c=real_width; c> 0; c--)
        {
                  
            int temp = left_area;
            real_length -= c;
            left_area = real_length * real_width;
         
            if (left_area < 0){ 
                 cout << "debugging :" << " temp == " << temp << " left_area==" << left_area <<  " c " << c <<endl;      
            
                left_area = temp;
                //smaller-=1;
                real_width -=1;
                continue;
            }
            else {
                cout << "debugging :" << " temp == " << temp << " left_area==" << left_area <<  " c " << c <<endl;      
            
                vec.push_back(c);
                break;
            }
            
        }
    }

    cout << "final vector information:  ";

    for (int i : vec)
    {
        cout << "  " << i;
    }

    cout << "that is all in vector " << endl;
    return vec;
    
}

// std::vector<int> opencourse::SqInRect::sqInRect(int lng, int wdth)
// {
//     vector<int> vec;
//     int real_length =0;
//     int real_width =0;
    
//     real_length = (lng > wdth)? lng:wdth;
//     real_width = (lng > wdth)? wdth:lng;

//     int real_diff = real_length - real_width;

//     if (real_diff==0){
//         return vec;
//     }

//     vec.push_back(real_width); 
    
//     if(real_width > real_diff){
    
//         vec.push_back( real_diff );
//     }
    
//     int smaller = (real_width > real_diff)? real_diff: real_width;
//     for (int c=smaller; c> 0; c--)
//     {
//         vec.push_back(c);
//     }

//     cout << "debugging vector information:  ";

//     for (int i : vec)
//     {
//         cout << "  " << i;
//     }

//     cout << "that is all in vector " << endl;

    
//     vector<int> to_remove ;
//     vector<int> result;

//     int area = real_length * real_width;
//     int area_diff = area;

//     while(area_diff >0){
       
//         for (int i : vec) // iterator
//         {
//             int tmp = area_diff;
//             area_diff = area_diff - pow(i,2.0);
            

//             if (area_diff < 0){
//                 to_remove.push_back(i);
//                 area_diff =tmp;
//             }
//             else if (area_diff == 0){
//                 result.push_back(i);
//                 cout << "found " << i;
//                 break;
//             }
//             else if (area_diff > 0){
//                 result.push_back(i);
//                 break;
//             }
//         }

//         if (to_remove.size() > 0){
//             vector<int>::iterator it = vec.end();        
//             for (int i : to_remove){
//                 it =remove(vec.begin(), it, i);
//             }        
//         }
//         cout << "temp area_diff " << area_diff << endl;
//     }
    

//     cout << "final vector information:  ";

//     for (int i : result)
//     {
//         cout << "  " << i;
//     }

//     cout << "that is all in vector " << endl;
//     // resize this vector
//     return result;
// }