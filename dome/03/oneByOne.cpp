//
// Created by liupe on 2018-06-15.
//

#include "oneByOne.h"
#include <iostream>
using namespace std;

oneByOne::oneByOne(int number) : number(number) {
    this->setNumber(number);

    int temp;
    cin >> numbers[0];
    temp = numbers[0];

    this->setKey(true);
    for (int i=1;i<this->getNumber();i++) {
        cin >> numbers[i];
        temp --;
        if (temp <= numbers[i]) {
            temp = numbers[i];
        }
        if (temp <= 0) {
            this->setKey(false);
            break;
        }
        cout << temp << endl;
    }

}

int oneByOne::getNumber() const {
    return number;
}

void oneByOne::setNumber(int number) {
    oneByOne::number = number;
}

void oneByOne::show() {
    if (this->isKey()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

bool oneByOne::isKey() const {
    return key;
}

void oneByOne::setKey(bool key) {
    oneByOne::key = key;
}
