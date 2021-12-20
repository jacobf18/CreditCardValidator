//
// Created by Jacob Feitelberg on 12/19/21.
//

#include "CreditCard.h"

#include <utility>
#include <iostream>

CreditCard::CreditCard(std::string number) : number(std::move(number)) {}

bool CreditCard::isValid() {
    int nDigits = number.length();
    int nSum = 0, isSecond = false;
    for (int i = nDigits - 1; i >= 0; i--) {
        int d = number[i] - '0';

        if (isSecond == true)
            d = d * 2;

        // We add two digits to handle
        // cases that make two digits after
        // doubling
        nSum += d / 10;
        nSum += d % 10;

        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
