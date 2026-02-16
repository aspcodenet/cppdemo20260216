#include "somefunc.h" // header file for function declarations

int add(int a, int b) { // function definition
    return a + b; // return the sum of a and b
}

std::string add(std::string a, std::string b) { // function definition
    return a + b; // return the sum of a and b
}




// int i = add(5,10);
// std::string s = add("Hello ", "World!"); // function overloads - same function name but different parameters - the compiler will determine which function to call based on the arguments passed to the function


