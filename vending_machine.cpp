#include "vending_machine.h"

vending_machine::vending_machine()
{
    products[0] = item("Domty", 3, 10 );
    products[1] = item("Chipsy", 2, 10 );
    products[2] = item("Pepsi", 5.5, 10 );
    products[3] = item("Cracky", 3.5, 5 );
    products[4] = item("Maraai", 6.5, 5 );
    products[5] = item("Molto", 2, 10 );
    products[6] = item("Seven UP", 5.5,10);
    products[7] = item("Mirinda", 5.5, 10 );
    products[8] = item("Chicklets", 0.5,10);
    products[9] = item("Juhayna",5, 9);
    pound = 10;
    five = 10;
    ten = 10;
    half_pound = 10;
    twenty = 10;

    //ctor
}

vending_machine::choose(int x)
{
    index = x - 1;
}

bool vending_machine::isExiting()
{
    return (index == -1);
}

bool vending_machine::isAvailable()
{
    return (products[index].stock > 0);
}

bool vending_machine::isFill()
{
    for (int i=0; i<10; i++)
    {
        if (products[i].stock > 0){
            return true;
        }
    }
    return false;
}


vending_machine::display()
{
    cout << " # "
         << setw(10) << "Name"  << setw(1) << " "
         << setw(8)  << "Price" << setw(1) << " "
         << setw(8)  << "Stock" << endl;
    cout <<"-------------------------------------" << endl;
    for (int i=0; i<10; i++){
         cout << setw(3) << i+1 << ". ";
         products[i].print();
    }
}

vending_machine::~vending_machine()
{
    //dtor
}
