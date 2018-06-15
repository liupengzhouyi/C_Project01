//
// Created by liupe on 2018-06-15.
//

#ifndef C_PROJECT01_ONEBYONE_H
#define C_PROJECT01_ONEBYONE_H


class oneByOne {
private:
    int number  = 0;
    int numbers[500];
    bool key = false;
public:
    bool isKey() const;

    void setKey(bool key);

public:
    oneByOne(int number);

    int getNumber() const;

    void setNumber(int number);

    void show();
};


#endif //C_PROJECT01_ONEBYONE_H
