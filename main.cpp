#include <iostream>
#include <stdio.h>
#include "dome/01/lp_Climb_the_stairs.h"
#include "dome/02/findSqrt.h"
#include "dome/03/oneByOne.h"

using namespace std;

int main() {
    oneByOne * dome = NULL;
    int number  = 0;
    cin >> number ;
    dome = new oneByOne(number);
    dome->show();
    return 0;
}