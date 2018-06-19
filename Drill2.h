#pragma once 

#include <string>
#include <array>
#include <iostream>
#include <vector>


namespace opencourse{

    class Drill2{
        // rename this .. make it iterable for test and collect error/results
        // allow user "me" to enter some notes on each testcases .. memos
        int number_of_test= 0;
        int all_test[0] ; 
        
        
        public: 
        Drill2(int number);
        bool run_test(int n);
        std::string say_hello(std::string);
        std::vector<int> firstNSmallest(const std::vector<int> &input, const int);   
        std::vector<std::vector<std::string> > matrixSquareN(const int t);
        void fizzbuzz(int i);
        int rice_grains(int input_num);
        void increment(int& i);
        void swap(std::string& s1, std::string& s2);
        void swap_by_pointers(std::string* s1, std::string* s2);

        bool run_test(std::string test_name);
        void set_test_name(std::string name);
        std::string get_test_name(void);
        void double_value(int* value);
        char* find_first(const char* x, const char* s);
        char* find_first_2(const char* s, const char* x);      
        void to_upper(std::string* s);

        void play_with_reference_pointer(std::string str_input, std::string* p_str_input, int int_input, int* p_int_input);

        private:
        std::string test_name;

    };

    class SqInRect
    {
        public:
        static std::vector<int> sqInRect(int lng, int wdth);
    };


   

}