//
// Created by liupe on 2018-06-15.
//

#ifndef C_PROJECT01_FINDSQRT_H
#define C_PROJECT01_FINDSQRT_H


class findSqrt {
private:
    int number;
    int sqrtNumber;
public:
    findSqrt(int number);

    int getNumber() const;

    void setNumber(int number);

    int getSqrtNumber() const;

    void setSqrtNumber(int sqrtNumber);

    void init();

    void show();
};


#endif //C_PROJECT01_FINDSQRT_H
