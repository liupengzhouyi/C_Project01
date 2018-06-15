//
// Created by liupe on 2018-06-15.
//

#include "findSqrt.h"
#include "iostream"
using namespace std;

findSqrt::findSqrt(int number) {
    this->setNumber(number);
    this->init();
    this->show();
}

int findSqrt::getNumber() const {
    return number;
}

void findSqrt::setNumber(int number) {
    findSqrt::number = number;
}

int findSqrt::getSqrtNumber() const {
    return sqrtNumber;
}

void findSqrt::setSqrtNumber(int sqrtNumber) {
    findSqrt::sqrtNumber = sqrtNumber;
}

void findSqrt::init() {
    if(this->getNumber() == 1) {
        this->setSqrtNumber(1);
    } else {
        int number_a = 0;
        int number_b = this->getNumber();
        int number_c = (number_a + number_b) /2;
        bool key = true;
        while(key) {
            if (number_c*number_c<this->getNumber()&&((number_c+1)*(number_c+1)>this->getNumber())) {
                this->setSqrtNumber(number_c);
                key = false;
            }
            if (number_c*number_c == this->getNumber()) {
                this->setSqrtNumber(number_c);
                key = false;
            }
            if (number_c*number_c > this->getNumber()) {
                number_b = number_c;
                number_c = (number_a + number_c)/2;
                //cout << number_c << endl;
            }
            else {
                number_a = number_c;
                number_c = (number_b + number_c)/2;
                //cout << number_c << endl;
            }
        }
    }
}

void findSqrt::show() {
    cout << this->getSqrtNumber() << endl;
}
