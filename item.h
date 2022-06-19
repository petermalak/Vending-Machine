#include <iostream>
#include <iomanip>

#ifndef ITEM_H
#define ITEM_H

using namespace std;

class item
{
    public:
        /** Default constructor */
        item();
        item(string, double, int);
        setName(string);
        setPrice(double);
        setStock(int);
        string getName();
        double getPrice();
        print();
        int stock;
        string name;


        /** Default destructor */
        ~item();

    protected:
        double price;

    private:
};

#endif // ITEM_H
