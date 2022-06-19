#include <iostream>
#include "vending_machine.h"

#ifndef MONEY_H
#define MONEY_H

using namespace std;

class money : public vending_machine
{
    public:
        /** Default constructor */
        money();
        setInputed(double);
        bool isEnough(); //checks if input is enough to buy the item
        double calChange();
        /** Default destructor */
        ~money();

    protected:
        double inputed;
    private:
};

#endif // MONEY_H
