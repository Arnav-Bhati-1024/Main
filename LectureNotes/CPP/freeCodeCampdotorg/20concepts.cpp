#include <concepts>
#include <iostream>

// Concepts primarily deals with constraining the types of template parameters.
// It allows you to specify requirements for the types that can be used with a template
// making your code more robust and easier to understand.
// https://en.cppreference.com/cpp/concepts

// T1
// template <typename T>
// requires std::integral<T> // This concept requires T to be an integral type (like int, char, etc.)
// T add(T a, T b) {
//     return a + b;
// }

// T2
// template <typename T>
// T add(T a, T b) requires std::integral<T>{
//     return a + b;
// }

// T3
// template <std::integral T>
// T add(T a, T b) {
//     return a + b;
// }

// T4
// auto add(auto a, auto b) {
//     return a + b;
// }
// after constraint
// auto add(std::integral auto a, std::integral auto b) {
//     return a + b;
// }



int main() {
    std::cout << add(3, 5) << '\n';  // OK: int satisfies std::integral
    // std::cout << add(3.5, 4.2) << '\n';  // Error: double does not satisfy std::integral
    return 0;
}