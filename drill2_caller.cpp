#include "Drill2.h"

using namespace opencourse;
#include <cassert>


int main()
{
    Drill2 myclass = Drill2(5);

    myclass.run_test(1);   
    myclass.run_test("firstNsmallest");
    myclass.run_test("MatrixSquareN");   

    std::string me = "CT";
    std::string res ;

    res = myclass.say_hello(me);

    std::cout << " we are here .. " << std::endl;
    std::cout << res << std::endl;
    std::cout << "this is me .. " << me << std::endl;

    for (int i=1; i < 20; i++){
        myclass.fizzbuzz(i);
    }

    //std::vector<int> squares =  SqInRect::sqInRect(20, 14);
    //std::vector<int> squares =  SqInRect::sqInRect(3, 5);
    // std::cout << std::endl;
    // for ( int i : squares){
    //     std::cout << i ;
    // }
    // std::cout << "===result of square in rectangle";
    
    int grains_of_rice =  myclass.rice_grains(1000000000);
    std::cout <<  " result of rice_grain " << grains_of_rice << std::endl;

    int counter = 3;
    myclass.increment(counter);
    //lecture case
    //myclass.increment(42);: non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
    
    std::cout << "called increment " <<counter << std::endl;

    std::string s1 = "hello";
    std::string s2 = "world";
    myclass.swap(s1, s2);
    std::cout << s1 << s2 <<std::endl;
    assert(s1 == "world" && s2 == "hello" );
    

    s1 = "hello";
    s2 = "world";
    
    std::string* p1 = & s1;
    std::string* p2 = & s2;
     
    myclass.swap_by_pointers(p1, p2);
    std::cout << *p1 << *p2 <<std::endl;
    assert(*p1 == "world" && *p2 == "hello" );
    
    std::cout << "testing changing case from string " <<std::endl;
    myclass.to_upper(p2);

    std::cout << "after to_uppper " << *p2 << std::endl;

    int i = 3;
    int* mypointer = &i;

    myclass.double_value(mypointer);

    std::cout << "double_value "<< *mypointer;

    const char* x = "Anything";
    const char* s = "I don't know athing or Anything";

    std::cout << "input x" << *x  << std::endl;

    const char* rev = myclass.find_first(s, x);

    std::cout << "after finding anything" << &rev  << std::endl;

    int s1000 = 10;
    std::cout << &s1000 << std::endl;

    int *p100 =&s1000;
    std::cout << *p100 << " with star " << std::endl;
    std::cout << p100 << " without star " << std::endl;
    

    
    const double pi = 3.141515926;
    std::cout << "the const value of pi" << pi << std::endl;
    std::cout << &pi << std::endl;


// The declarator operator that makes a pointer constant is *const. There is no const* declarator
// operator, so a const appearing before the * is taken to be part of the base type. For example:
// char *const cp; // const pointer to char char 
// const* pc; // pointer to const char 
// const char* pc2; // pointer to const char
// Some people find it helpful to read such declarations right-to-left. For example, 
// ‘‘cp is a const pointer to a char’’ and ‘‘pc2 is a pointer to a char const.’’
    
    
    //i.e. the following does not work
    // const std::string string_input = "Don not change me";
    // std::string* p_str_input = &string_input;


    std::cout << "running test for pointers and references" << std::endl;

    std::string string_input = "Don not change me";
    std::string* p_str_input = &string_input;

    int ten = 10;
    int&  shi  = ten;
    int*  p_ten = & ten;

    myclass.play_with_reference_pointer(string_input, p_str_input, shi, p_ten);

    return 0;
}