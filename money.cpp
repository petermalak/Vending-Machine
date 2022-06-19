#include "money.h"

money::money()
{
    //ctor
}

money::setInputed(double userMoney)
{
    int in = userMoney;
    if (in != userMoney){
        half_pound += 1;
    }
    inputed = userMoney;
    twenty += (in/20);
    in = in%20;
    ten += in/10;
    in = in%10;
    five += in/5;
    in = in%5;
    pound += in;

}

bool money::isEnough()
{
    return (inputed >= products[index].getPrice());
}

double money::calChange()
{   if (isEnough()){
        int change = (inputed - products[index].getPrice());
        int changer = (inputed - products[index].getPrice()); //to check if change is available
        if (changer != (inputed - products[index].getPrice()))//checks if there are half pounds
            {
                if (half_pound < 1){ //checks if there are no half pounds
                cout << "Not Enough Change" << endl;
                return inputed; //returns money back because no change is available
                }
            }


        if (twenty < changer/20) //checks if there are enough twenties
        {
                cout << "Not Enough Change" << endl;
                return inputed; //returns the money taken
        }
        changer = changer%20;
        if (ten < changer/10)
        {
                cout << "Not Enough Change" << endl;
                return inputed;
        }
        changer = changer%10;

        if (five < changer/5)
        {
                cout << "Not Enough Change" << endl;
                return inputed;
        }
        changer = changer%5;

        if (pound < changer)
        {
                cout << "Not Enough Change" << endl;
                return inputed;
        }


        products[index].stock -= 1;
        cout << products[index].name << endl;
        if (change != (inputed - products[index].getPrice()))
            {
                half_pound -= 1;
            }
        twenty -= (change/20);
        change = (change%20);
        ten -= (change/10);
        change = (change%10);
        five -= (change/5);
        change = (change%5);
        pound -= change;
        return (inputed - products[index].getPrice());
        }
    else{
       return inputed;
    }
}

money::~money()
{
    //dtor
}
