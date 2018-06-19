#include <iostream>
#include <string>
#include <vector>


//#include "./std_lib_facilities.h"

using namespace std;


void drill(void)
{
    string user_name="";
    string friend_name = "";
    string pronoun = "";
    char friend_sex  =0 ;
    int age {0};

    cout << "Please enter your name:"; 
    cin >> user_name;

    cout << "Please enter your friend's name:"; 
    cin >> friend_name;
    
    cout << "Please enter your friend's gender: M for Male and F for Female."; 
    cin >> friend_sex;
    
    

    cout << "Dear " << user_name << "," <<   endl;

    cout << "\t" << " How are you? I miss you!!! Write back when you get this.  Have you seen "<< \
    friend_name << " lately? If you see "<< friend_name << " please ask ";
    
    if (friend_sex == 'M')
    {
        pronoun= "him";

    }
    else
    {
        pronoun = "her";
    }
    cout << pronoun   << " to call me "<< endl;

    cout << "Please enter your age:"; 
    cin >> age;

    if( age<= 0 || age>=110){
         cout << "error: you're kidding" << endl;
    }    


    
}


vector<int> firstNSmallest(const vector<int> &vec, const int count)
{
    vector<int> myVector = vec;

    // for (int a : vec){
    //     const int d = distance(vec.begin(), vec.end());
    //     cout << a << endl;
    // }

    //cout << "test distance" << "distance(first, last) = " << distance(vec.begin(), vec.end() )<< endl;

    // int s = vec.size();
    // array<int, s> smalls = {};
    // vec.data(int (&)[s]);

    //auto iter = vec.begin();
    
    // stable_sort(myVector.begin(),myVector.end());
    
    // int t = 0;
    // for (int a : myVector){
    //     if (t <= count){
    //         cout << a;
    //         cout << endl;
    //         t++;
    //     }
    //     else{
    //         break;
    //     }
    // }

    // vector<int> smalls(count);
    // int t = 0;
    // for (int a : myVector){
    //     if(t < count){
    //         smalls.push_back(a);
    //         t++;
    //     }
    //     else {
    //        if (any_of(smalls.begin(), smalls.end(), [](int i){return a>i;}))
    //        {
    //            cout << 
    //        } 
    //     }
    // }


    //TRY NTH_ELEMENT
    nth_element(myVector.begin(), myVector.begin()+ count, myVector.end();
    
    for (vector<int>::iterator it =myVector.begin(); it != myVector.end(); it ++ ){
        cout << " " << *it; 
    }

    return myVector;

}

int main()
{
    cout << "this is main function " << endl;
    //drill();

    vector<int> v0 {1,2,5, 9, 2,1};
    firstNSmallest(v0, 4);
    return 0;
}