#include <vector>
#include <iostream>

using namespace std;

int sum(const vector<int> a){
    int res = 0;
    for (int n: a){
        res+=n;
    }
    return res;
}

int find_even_index(const vector<int> v){
    int sum_left = 0;
    int sum_right = sum(v);
    int pos = -1;
    bool found = false;
    for (int c: v){
        if (sum_right - c == sum_left){
             cout << "left_sum"  << sum_left << "  right_sum " << sum_right -c<< endl;
       
            pos +=1;
            found = true;
            break;
        }
        else{
            sum_left += c;
            sum_right -= c;
            pos +=1;
        }
    }

    return found == true ? pos: -1;
}


// int find_position(const vector<int> v){
//     //split to two arrays
//     //a[0..i]
//     //b[i...size-1]

//     //sum_left = sum(a)
//     //sum_right = sum(b)
    
//     //when left == right ; index =i and move i further down
//     //when left != right ; move i further down until i == mid point 
    
//     vector<int> left = {}; // I don't understand if this is mutable
//     vector<int> right = v; // Am I passing by reference or pointer? Is v copied or simply a reference pointer made?
//     int index_pos = -1; // return value
//     int length = v.size(); //does this cost heavily?

//     int left_sum =sum(left);
//     int right_sum = sum(v);
//     bool zeros = true;

//     for (int n: v){
//         if (n !=0){
//             zeros = false;
//             break;
//         }   
//     }
//     if (zeros == true){
//         return 0;
//     }


//     int c=0; 
//     do{

//         cout << "left_sum"  << left_sum << "  right_sum " << right_sum << endl;

//         if (left_sum == right_sum){
//             index_pos = c;
//             cout << "index_post " << index_pos <<endl;
//         }
        
//         int current = v[c];
        
//         cout << "current position " << c <<  "current integer value " << current <<endl;
//  //       if (c< length) right.erase(right.begin());

//         cout << "writing out right elements ";
//         for (int t: right){
//             cout  << t ;
//         }
//         cout << "  "<< endl;

//         cout << "writing out left elements ";
//         for (int n: left){
//             cout  << n ;
//         }
//         cout << "  "<< endl;

//         left_sum =sum(left);
//         right_sum = sum(right);

//         left.push_back(current); //what is push BACK? to the end of the stack? --- > python append
//         c+=1;
        
//     }while(c <= length);

//     return index_pos == -1 ? index_pos: index_pos -1;
// }



// int find_even_index(const vector<int> v){
    
//     vector<int> left = {}; 
//     vector<int> right = v; 
//     int index_pos = -1; 
//     int length = v.size();

//     int left_sum =sum(left);
//     int right_sum = sum(v);
//     bool zeros = true;

//     for (int n: v){
//         if (n !=0){
//             zeros = false;
//             break;
//         }   
//     }
//     if (zeros == true){
//         return 0;
//     }

//     int c=0; 
//     do{
//         if (left_sum == right_sum){
//             index_pos = c;            
//         }        
//         int current = v[c];
        
//         if (c< length) right.erase(right.begin());

//         left_sum =sum(left);
//         right_sum = sum(right);

//         left.push_back(current); 
//         c+=1;
        
//     }while(c <= length);

//     return index_pos == -1 ? index_pos: index_pos -1;
// }



// int find_index(const vector<int> v){
//     int full_index = v.size();
//     bool zeros = true;
//     int left_sum = 0;
//     int right_sum = 0;
//     int even_index = -1;

//     for (int n: v){
//         if (n !=0){
//             zeros = false;
//             break;
//         }   
//     }
//     if (zeros == true){
//         return 0;
//     }

    

//     for (int i=0 ; i<full_index; i++){
//         left_sum +=v[i];
//         for (int k=full_index-1; k>i; k--){
//             right_sum +=v[k];
            
//             cout << i << "sum_left " << left_sum << "sum_right" << right_sum << "--" <<k <<endl;
//             if (left_sum == right_sum){
//                 //right_sum = 0;
                
//                 even_index = i;
//                 cout << "even_index : " << even_index << endl;
//                 //break;
//             }
//             if (right_sum > left_sum){
//                 //loop left only
//                 right_sum = 0;
//                 break;
//             }

//         }
//     }
//     return full_index %2 == 0? even_index: even_index+1 ; 
   
    
// }


// int even_index(const vector<int> v){
//     int index = -1;
//     int left_sum = 0;
//     int right_sum = 0;
//     bool zeros = true;

//     for (int n : v){
//         if (n != 0){
//             zeros = false;
//             break;
//         }
//     }
//     if (zeros == true){
//         return 0;
//     }

//     //left_sum = v[0];
    
//     int k = v.size() -1 ;
//     for (int i=0; i<v.size(); i++ )
//     {
        
//         left_sum += v[i];
        
//         right_sum += v[k];
     
//         cout << i << "sum_left " << left_sum << "sum_right" << right_sum <<endl;
        
//         if (right_sum > left_sum){
//             continue;
//         }
//         if (left_sum == right_sum ){
//             index = i;
//             std::cout << "index_value" << index << endl;
//             //break;
//         }
//         else{
//             for (int k=v.size()-2; k>0; k--){   
//                 right_sum += v[k];
//                 cout << v[k] << "loop right--" << k << "sum_right" << right_sum << endl;
                
//                 break;
//             }

//         }
//     }

//     std::cout << "returning " << index << std::endl;
//     return index;
    
// }


// int find_even_index(const vector<int> v){
//     int index = -1;
//     int left_sum = 0;
//     int right_sum = 0;

//     for (int i=0; i<v.size(); i++ )
//     {
//         cout << v[i] << "loop left --" << i<< "sum_left " << left_sum << "sum_right" << right_sum << endl;
//         left_sum += v[i];

    
//         if (right_sum > left_sum){
//             continue;
//         }
        
//         if (left_sum == right_sum ){
//             index = i;
//             break;
//         }
//         else{
//             for (int k=v.size()-1; k>0; i--){
                
//                 right_sum += v[k];
//                 //cout << v[k] << "loop right--" << k << "sum_right" << right_sum << endl;
//                 break;

//             }

//         }
//     }

//     std::cout << "returning " << index << std::endl;
//     return index;

    // for (int it = v.cbegin(); it != v.cend(); it++){
    //     left_sum += it;
    //     if (left_sum == left_sum)
    //     {
    //         index = &it;
    //         break;
    //     }
    //     while (right_sum != 0 && left_sum > right_sum){ 
    //         for (int rt = v.cend() ;rt != v.cbegin(); rt++){
    //             right_sum += rt;
            
    //         }
    //     }

    // }
    
    // for(int n : v) {
    //     std::cout << n << '\n';
    // }

    
//}

int main(){
    
    // vector<int> v= {1,2,3,4,5,6};
    // //vector<int> v = {1,2,3,4,3,2,1};
    
    // //vector<int> v = { 1,100,50,-51,1,1 };
    // //vector<int> v ={20,10,30,10,10,15,35};
    // //vector<int> v = {10,-80,10,10,15,35,20};
    
    // //vector<int> v ={20,10,-80,10,10,15,35};
    // //vector<int> v ={-1,-2,-3,-4,-3,-2,-1  };
    // //vector<int> v ={-82,-25,36,-74,-39,37,76,10,59,-14,83,21,-31,54,-83,71,-31,-87,-84,-97,42,58,34,-88,-30,-56,-81,66,-31,35,-80,-97,-72,-59,2,-87,35,82,-31,30,-72,-60,-27,-38,-44,-73,-59,30,41,-5,-86,-56,23,95,7,-67,-84,11,-22,-51,19,88,78,1,7,91,-87,-81,-53,-32,-68,11,-8,-22,-19,17,18,57,2,10,-12,73,-66,77,-59,27,-22,-2,-76,-65,83,81,18,-6,61,-23,47,93,94,13,-58,34,67,8,-67,-53,37,-46,-10};
    //  // Add two more integers to vector
    // // v.push_back(25);
    // // v.push_back(13);
 
    // // int res = find_index(v);
    // // Iterate and print values of vector
    
    // cout << "return value " << res << endl;

    // return res;
}