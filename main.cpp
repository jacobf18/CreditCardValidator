#include <iostream>
#include "CreditCard.h"

int main() {
    std::cout << "Please put in a credit card number:"  << '\n';
    std::string number;
    std::cin >> number;
    auto creditCard = CreditCard(number);
    bool validNumber = creditCard.isValid();
    if (validNumber)
        std::cout << "Valid number" << '\n';
    else
        std::cout << "Invalid number" << '\n';
    return 0;
}
