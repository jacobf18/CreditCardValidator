//
// Created by Jacob Feitelberg on 12/19/21.
//

#ifndef CREDITCARDVALIDATOR_CREDITCARD_H
#define CREDITCARDVALIDATOR_CREDITCARD_H


#include <string>

class CreditCard {
    std::string number;
public:
    explicit CreditCard(std::string number);

    bool isValid();
};


#endif //CREDITCARDVALIDATOR_CREDITCARD_H
