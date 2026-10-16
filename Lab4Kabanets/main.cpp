#include <iostream>
#include "FuzzyNumber.h"

int main() {
    FuzzyNumber A, B;
    std::cout << "Enter Fuzzy Number A \n";
    std::cin >> A; 
    std::cout << "Number A: " << A << "\n\n"; 
    std::cout << "Enter Fuzzy Number B\n";
    std::cin >> B;
    std::cout << "Number B: " << B << "\n\n";
    std::cout << " Arithmetic Operations \n";

    FuzzyNumber sum = A + B;
    std::cout << "A + B = " << sum << std::endl;
    FuzzyNumber diff = A - B;
    std::cout << "A - B = " << diff << std::endl;
    FuzzyNumber prod = A * B;
    std::cout << "A * B = " << prod << std::endl;
    if (B.getX() > 0) {
        FuzzyNumber div = A / B;
        std::cout << "A / B = " << div << std::endl;
    }
    return 0;
}