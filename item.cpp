#include "item.h"

item::item()
{
    //ctor
}

item::item(string NAME, double PRICE, int STOCK)
{
    name = NAME;
    price = PRICE;
    stock = STOCK;
}

item::setName(string NAME)
{
    name = NAME;
}

string item::getName()
{
    return name;
}

item::setPrice(double PRICE)
{
    price = PRICE;
}
item::setStock(int STOCK)
{
    stock = STOCK;
}

item::print()
{
    cout << setw(10) << name  << setw(1) << " "
         << setw(8)  << price << setw(1) << " "
         << setw(8)  << stock << endl;
}

double item::getPrice()
{
    return price;
}

item::~item()
{
    //dtor
}
