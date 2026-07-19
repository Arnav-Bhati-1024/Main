#include<iostream>

// Insted of making functions for each datatype you make a general fuction that can work with any datatype. This is called a template function.
// Template function is a blueprint for creating functions. It allows you to define a function that can


template <typename T>
T add(T a, T b) {return a + b;}

template <typename TT>
TT max(TT a, TT b) {return (a > b) ? a : b;}


// compiler make a function for each datatype you use. 
// For example
// if you call add(2, 3) it will make a function add(int a, int b) 
// if you call add(2.5, 3.5) it will make a function add(double a, double b).
// This is called function overloading.
// Note:
// 1. If a type is nto called , its function will not be created.
// 2. If a type is called multiple times, only one function will be created for that type.

int main() {
    std::cout << "===============================================================================" << "\n" ;
    std::cout << "add(2, 3) = " << add(2, 3) << '\n';
    std::cout << "add(2.5, 3.5) = " << add(2.5, 3.5) << '\n';
    std::cout << "add('A', 'B') = " << add('A', 'B') << '\n';

    std::cout << "===============================================================================" << "\n" ;
    std::cout << "max(2, 3) = " << max(2, 3) << '\n';
    std::cout << "max(2.5, 3.5) = " << max(2.5, 3.5) << '\n';
    std::cout << "max('A', 'B') = " << max('A', 'B') << '\n';

    return 0;
}