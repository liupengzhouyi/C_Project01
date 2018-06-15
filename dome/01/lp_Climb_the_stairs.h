//
// Created by liupe on 2018-06-15.
//

#ifndef C_PROJECT01_LP_CLIMB_THE_STAIRS_H
#define C_PROJECT01_LP_CLIMB_THE_STAIRS_H
#include <iostream>
using namespace std;

class lp_Climb_the_stairs {
private:
    int layers;
    int numbers;
    int lp_number[1002];
public:
    lp_Climb_the_stairs();

    void init();

    void show();

    int getLayers() const;

    void setLayers(int layers);

    int getNumbers() const;

    void setNumbers(int numbers);
};


#endif //C_PROJECT01_LP_CLIMB_THE_STAIRS_H
