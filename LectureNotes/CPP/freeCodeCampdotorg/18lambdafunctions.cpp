#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

// Lambda functions in C++ are unnamed function objects created with the syntax:
// [capture](parameters) -> return_type { body };
// - capture: specifies which local variables are accessible inside the lambda. It can be by value or by reference.
// - parameters: function parameters, just like a normal function.
// - return_type: optional; the compiler usually deduces it.
// - body: the code executed when the lambda is called.
// Lambdas can be assigned to variables, passed as arguments, or returned from functions.
// syntax for defining a lambda function and calling at the same time is
// [](parameters) -> return_type { body }(arguments);
// or
// []() { body }();




// Example helper function returning a lambda.
auto make_adder(int base) {
    return [base](int x) {
        return base + x;
    };
}

int main() {
    std::cout << "===============================================================================" << "\n" ;
    // Example 1: simple lambda with automatic return type deduction.
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "add(2, 3) = " << add(2, 3) << '\n';

    std::cout << "===============================================================================" << "\n" ;
    // Example 2: capture by value. The lambda stores a copy of x.
    int x = 10;
    auto add_x = [x](int y) {
        return x + y;
    };
    std::cout << "add_x(5) = " << add_x(5) << " (x = " << x << ")\n";

    std::cout << "===============================================================================" << "\n" ;
    // Example 3: capture by reference. The lambda can modify the captured variable.
    int count = 0;
    auto increment = [&count]() {
        ++count;
    };
    increment();
    increment();
    std::cout << "count after two increments = " << count << '\n';

    std::cout << "===============================================================================" << "\n" ;
    // Example 4: mutable lambda. Allows modification of captured-by-value variables inside the lambda.
    int value = 7;
    auto mutable_lambda = [value]() mutable {
        value += 5;
        return value;
    };
    std::cout << "mutable_lambda() = " << mutable_lambda() << " (original value = " << value << ")\n";

    std::cout << "===============================================================================" << "\n" ;
    // Example 5: generic lambda. Uses auto parameters and works for many types.
    auto multiply = [](auto a, auto b) {
        return a * b;
    };
    std::cout << "multiply(4, 5) = " << multiply(4, 5) << '\n';
    std::cout << "multiply(2.5, 3.0) = " << multiply(2.5, 3.0) << '\n';

    std::cout << "===============================================================================" << "\n" ;
    // Example 6: lambda with explicit return type.
    auto divide = [](double a, double b) -> double {
        if (b == 0.0) {
            return 0.0;
        }
        return a / b;
    };
    std::cout << "divide(10.0, 2.0) = " << divide(10.0, 2.0) << '\n';

    std::cout << "===============================================================================" << "\n" ;
    // Example 7: using lambda with standard algorithms.
    std::vector<int> values = {5, 1, 4, 2, 3};
    std::sort(values.begin(), values.end(), [](int a, int b) {
        return a < b;
    });
    std::cout << "sorted values: ";
    std::for_each(values.begin(), values.end(), [](int v) {
        std::cout << v << ' ';
    });
    std::cout << '\n';

    std::cout << "===============================================================================" << "\n" ;
    // Example 8: lambda returned from a function.
    auto add_five = make_adder(5);
    std::cout << "add_five(10) = " << add_five(10) << '\n';

    std::cout << "===============================================================================" << "\n" ;
    // Example 9: capture all local variables by reference or value.
    int a = 1;
    int b = 2;
    auto capture_all_by_value = [=]() {
        return a + b;
    };
    auto capture_all_by_reference = [&]() {
        a = 10;
        b = 20;
        return a + b;
    };
    std::cout << "a = " << a << ", b = " << b << '\n';
    std::cout << "capture_all_by_value() = " << capture_all_by_value() << '\n';
    std::cout << "a = " << a << ", b = " << b << '\n';
    std::cout << "capture_all_by_reference() = " << capture_all_by_reference() << '\n';
    std::cout << "a = " << a << ", b = " << b << '\n';

    return 0;
}
