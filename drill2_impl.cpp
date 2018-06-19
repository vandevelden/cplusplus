#include "Drill2.h"

#include <bitset>
#include <ctype.h>
using namespace std;
using namespace opencourse;

Drill2::Drill2(int s)
{
    number_of_test = s;
    int all_test[s];
}

bool Drill2::run_test(int n){
    if (n > number_of_test ){
        cerr << "range error occurred:" << n << "is greater than " << number_of_test << endl;
    
    }
    else{
        cout << "here is the function impl." << endl;
    } 
    return true;
}

bool Drill2::run_test(string desc){

    //temp impl. getting some exercises done, moving them back to proper order when ready

    if (desc == "firstNsmallest"){
        vector<int> v = firstNSmallest({1,2,1,2,3,1},4);//1,2,1,1
        //vector<int> v= firstNSmallest( {-2, -4, -9, 4, -6, 5, 1, -6, 9, -10, -6, -6, 0, 0, 7, 9, -1, 6, -8, 10, 7, 
        //6, 3, -8, -7, 8, -8, -5, -4, -1, 3, 4, -1, -4, 1, 9, 8, -10, 4}, 37);
        //vector<int> v = firstNSmallest({1,2,3,4,5},0);
    }
    else if (desc == "MatrixSquareN"){

        vector<vector<string> > result = matrixSquareN(2);

    }
    return true;
}

string Drill2::say_hello(string name){
    string res = " hello " + name;
    return res;

}

void Drill2::fizzbuzz(int i)
{
    vector<int> myvec{3, 5};
    vector<int> v {1,2,3,4,5,6};

    int mod3,mod5 ;
    mod3 = i%3;
    mod5 = i%5;

    if((mod3 == 0 ) &&(mod5 == 0)){
        cout << "fizzbuzz" << endl;
    }
    else if (mod5 == 0)
    {
        cout << "buzz"  <<endl;
    }
    else if (mod3 == 0) {
        cout << "fizz"  <<endl ; 
    }
    else{
        cout << "no fizzy or buzzy" <<endl;
    }
    
}



vector<int>  Drill2::firstNSmallest(const vector<int> &vec, const int count)
{

    vector<int> sort_vector = vec;
    vector<int> res ;
  
    if (count == 0){
      return res;
    }

    std::nth_element(sort_vector.begin(),sort_vector.begin()+count, sort_vector.end());
    vector<const int >::iterator it;
    vector<const int >::iterator found;
    int t = 0; 
    
    int steps = sort_vector.size()-count;
    while (t< steps){
        sort_vector.pop_back();
        t++;
    }
  
    for (it = vec.begin(); it!= vec.end(); it++)
    {
        found = find(sort_vector.begin(),sort_vector.end(), *it) ;
       
        if (found != sort_vector.end())
        {
            res.push_back(*it);
            sort_vector.erase(found);

        }             
    }

    for (int i: res){
        cout << i;
    }
    cout << " result" << endl; 
  
    return res;
}


vector<vector<string> > Drill2::matrixSquareN(const int  t)
{
    string symbol = "x";
    vector<vector <string> > res ;
    for (int i=1; i<=t; i++){
        cout << "i == " << i << " t == " << t << endl;
        vector<string> temp;

        int steps = t - i;
        for (int r=0; r<steps;r++ ){
            cout << "r == " << r << " step == " << steps << endl;
            temp.push_back(symbol);
        }
        for (int x=i; x>=1; x--){
            cout << "x == " << x << " i == " << i << endl;
            temp.push_back(to_string(x));
        }
        res.push_back(temp);
        
    }

    for (vector<string> row : res){
        for (string ch : row){
            cout << ch ;
        }
        cout << endl;
    }
    
    return res;
}

int Drill2::rice_grains(int input_num){
    int integer1 = 2;
    const int UPPER_LIMIT = 50;

    //bitset<32> bitset1{integer1};

    //cout << bitset1 << endl;
    int sum = 1;
    int number_of_squares =1;
    for (short i=0; i<= UPPER_LIMIT; i++){

        number_of_squares = i+2;
        int integer2 = integer1 << i;
        sum += integer2;
        
        //cout << "sum == "  << sum  <<  "integer2 after shift " << integer2 << "i == "  << i << "number of grains ==" << number_of_squares; 
        if (sum > input_num){

            break;
        }
        else{
            number_of_squares = -1;
        }
    }
    cout << "\n";
    cout << " Grains of rice returns : " << number_of_squares;
    return number_of_squares;
}
void Drill2::increment(int& var)
{
    var += 1;
}

void Drill2::swap(std::string& s1, std::string& s2)
{
    //std::string      tmp = s1;
    
    auto temp = s1;
    s1 = s2;
    s2 = temp; 
    
    //cout << "temp  == "  << tmp << "s1 == "  <<s1  << "s2 == " << s2 << endl;
}

void Drill2::swap_by_pointers(std::string* s1, std::string* s2)
{
    //std::string      tmp = s1;
    
    std::string temp = *s1;
    *s1 = *s2;
    *s2 =  temp; 
    cout << "before swap : pointer : "<< "s1 ==   "  <<*s1  << "   s2 == " << *s2 << endl;

    // auto* temp = s1;
    // s1  = s2;
    // s2 = temp;

    // cout << "after swap pointer : "<< "s1 ==   "  <<*s1  << "   s2 == " << *s2 << endl;
}


void Drill2::double_value(int* t)
{
    *t = *t *2 ;
}

char* Drill2::find_first(const char* s, const char* x)
{
   //why both 8??? cout << "here is my input" <<  "s " << s << sizeof s   << " x" << x << sizeof x <<endl;
    char t = 0;
    char* y = &t;
   
    //char* y = nullptr;
   
    while (*s != 0)
    {
        cout << "pointer equals" <<     s   <<endl;

        //cout << "here is current input" << *s  <<endl;
        if(*s == *x)
        {
            *y = *s;
            cout << "found first element " << *y << endl;
            int keep_counter = 0;
            bool found = true;

            while(*x != 0){
                
                x++;
                s++;
                keep_counter ++;
                cout << "short phrase " << *x  << endl;
                cout << "long phrase " << *s  << endl;
                if (*x == *s){
                    cout << "pointer continues to equal" << *s  << *x <<endl;
                    continue;
                }
                else{
                    while(keep_counter >0){
                        keep_counter --;
                        x --;
                        s --;
                    }
                    found =false;
                    break;
                    
                }   

            }


            // while(*x != 0){
            //     x++;
            //     s++;
            //     if (*x != *s)
            //     {
            //         found = false;
            //         break;
            //     }
            // }

            if(found==true)
            {
                cout << " found " << *y <<endl;
                return y;
            }
           
        }
        s++;
    }

    cout << "did not find it " << "should return null here" <<endl;
    return y;
}



char* Drill2::find_first_2(const char* s, const char* x)
{
   //why both 8??? cout << "here is my input" <<  "s " << s << sizeof s   << " x" << x << sizeof x <<endl;
    
   
    int s_counter = 0;
    int x_counter = 0;
    bool found = false;
    
    while (s[s_counter] != 0)
    {
        cout << "pointer equals" << s   <<endl;

        //cout << "here is current input" << *s  <<endl;
        while(s[s_counter] == x[x_counter])
        {
            if(x[x_counter] == 0)
            {
                found = true;
                break;
            }            
            s_counter ++;
            x_counter ++;
        }

        s_counter ++;
        x_counter =0;
    }

    cout << "did not find it " << "should return null here" <<endl;
    char* p = 0;
    return p;
}


void Drill2::play_with_reference_pointer(std::string str_input, std::string* p_str_input, int int_input, int* p_int_input)
{

    
    char ch = str_input[0];
    int count  =0;
    while (ch != 0)
    {
        cout << "current ch == "  <<ch << " and count == " << count <<endl;
        ch = str_input[count];
        count +=1;
        
    }

    cout << "str_input has size of " << count << endl;
    char char_arry[count] ;

    for (int i =0; i< count; i++){
        
        char_arry[i] =  str_input[i];

    }
    cout << "copied string to char arry : " << char_arry <<  "strlen " << strlen(char_arry) <<endl;

    //1. allocate some char array and access members using index, and modify string input

    for (int i=0; i< count; i++)
    {
        str_input[i] = 'a';
    }

    cout << " changed str_input" << str_input << "but remember this will not be passed back to caller because all parameters are copies of the original" << endl;

   
    //2. using pointer to access members and modify string input
    
    cout << " After changing the content of str_input, here is de-ref the pointer " << *p_str_input  <<endl;
    
    cout << " note the reference remained to the original string... quite different from what I expected" << endl;

   
    cout <<" calling string pointer to increment 1, maybe a memory errr..." <<endl;
    cout << p_str_input[1] << endl;
   //The following does not work because a pointer to std::string is not the same
   //as the pointer to char
   
    // while(count >0)
    // {
    //     //*p_str_input = 'n';
    //     cout << "de-ref and increment the pointer " << *p_str_input << endl;
    //     p_str_input ++;
    //     count --;
    // }    
    //cout << " After changing the content of p_str_input, here is de-ref the pointer " << *p_str_input  <<endl;
  
    //We have string at hand, should do something advanced stuff

    for (int i=0; i<p_str_input->length(); ++i)
    {
        std::cout << p_str_input->at(i);
    }    

    p_str_input->push_back ('n');
    p_str_input->push_back ('o');
    p_str_input->push_back ('t');

    p_str_input->replace(p_str_input->begin()+5, p_str_input->end()-4, "cool");

    cout << " After changing the content of p_str_input, here is de-ref the pointer " << *p_str_input  <<endl;
  

    // for (*p_str_input; *p_str_input != 0; p_str_input++){

    //     cout << "pointer value :" << *p_int_input ;

    // }
    cout << endl;

    //3. Change int using reference
    

    cout << "here is the integer " << int_input << " and here is the pointer to it " << *p_int_input << endl;

    //4. change int using pointer

}


void Drill2::to_upper(string* s)
{
    std::string::iterator iter ;
    for (iter= s->begin(); iter!=s->end(); iter++ )
    {    
        *iter = std::toupper(*iter);
        cout << *iter ;
    }
    cout << endl;
}

// void Drill2::castreference(long& input)
// {
//     input = (double) 3.8 * input;
    
// }

//     
