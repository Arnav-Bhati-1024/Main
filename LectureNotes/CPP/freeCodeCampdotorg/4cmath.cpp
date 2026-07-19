#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x = 16.0;
    double y = 3.0;
    double z = -7.5;

    std::cout << std::fixed << std::setprecision(4);

    std::cout << "1) sqrt(x) -> square root\n";
    std::cout << "sqrt(16.0) = " << std::sqrt(x) << "\n";

    std::cout << "\n2) pow(base, exponent) -> power\n";
    std::cout << "pow(2.0, 3.0) = " << std::pow(2.0, 3.0) << "\n";

    std::cout << "\n3) fabs(x) -> absolute value\n";
    std::cout << "fabs(-7.5) = " << std::fabs(z) << "\n";

    std::cout << "\n4) sin(), cos() -> trigonometry\n";
    std::cout << "cos(M_PI) = " << std::cos(M_PI/2) << "\n";
    std::cout << "sin(M_PI) = " << std::sin(M_PI/2) << "\n";

    std::cout << "\n5) round(), ceil(), floor() -> rounding\n";
    std::cout << "round(3.6) = " << std::round(3.6) << "\n";
    std::cout << "ceil(3.2) = " << std::ceil(3.2) << "\n";
    std::cout << "floor(3.8) = " << std::floor(3.8) << "\n";

    std::cout << "\n6) log(), exp() -> logarithms and exponents\n";
    std::cout << "log(2.71828) = " << std::log(2.71828) << "\n";
    std::cout << "log10(100) = " << std::log10(100) << "\n";
    std::cout << "exp(1.0) = " << std::exp(1.0) << "\n";

    std::cout << "\n7) hypot(a, b) -> hypotenuse\n";
    std::cout << "hypot(3.0, 4.0) = " << std::hypot(3.0, 4.0) << "\n";

    std::cout << "\n<cmath> gives many math functions for numbers.\n";
    std::cout << "You use them by writing std::function_name(...)\n";

    return 0;
}
