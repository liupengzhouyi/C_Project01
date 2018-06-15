//
// Created by liupe on 2018-06-15.
//

#include <iostream>
#include "lp_Climb_the_stairs.h"
using namespace std;

lp_Climb_the_stairs::lp_Climb_the_stairs() {
    int numberOfLayers = 0;
    cin >> numberOfLayers;
    this->setLayers(numberOfLayers);
    this->init();
}

int lp_Climb_the_stairs::getLayers() const {
    return layers;
}

void lp_Climb_the_stairs::setLayers(int layers) {
    lp_Climb_the_stairs::layers = layers;
}

int lp_Climb_the_stairs::getNumbers() const {
    return numbers;
}

void lp_Climb_the_stairs::setNumbers(int numbers) {
    lp_Climb_the_stairs::numbers = numbers;
}

void lp_Climb_the_stairs::init() {
    if (this->getLayers() == 0) {
        this->setNumbers(this->getLayers());
    } else if (this->getLayers() == 1) {
        this->setNumbers(this->getLayers());
    } else if (this->getLayers() == 2){
        this->setNumbers(this->getLayers());
    } else {
        this->lp_number[0] = 1;
        this->lp_number[1] = 2;
        for (int i=2;i<=this->getLayers();i++) {
            this->lp_number[i] = this->lp_number[i - 1] + this->lp_number[i - 2];
        }
        this->setNumbers(this->lp_number[this->getLayers()-1]);
    }
}

void lp_Climb_the_stairs::show() {
    cout << this->getNumbers() << endl;
}
