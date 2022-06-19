#include "run.h"

run::run()
{
    int choice;
    double m;
    money in;
    while (true){
        system ("CLS");
        in.display();
        if (in.isFill()){
            cout <<"Enter Money: ";
            cin >> m;
            cout <<"Enter Choice #: ";
            cin >> choice;

            in.choose(choice);

            if (in.isExiting())
            {
                    cout << "Your Money: " << m << endl;
                break;
            }

            in.setInputed(m);


            if( in.isAvailable() )
            {
                if (in.isEnough())
                {
                    cout << "Change: " << in.calChange() << endl;
                }
                else{
                    cout <<"Money not Enough!" << endl;
                    in.setInputed(-m); //returns money from machine
                    cout << "Your Money: " << m << endl;


                }
            }
            else
            {
                cout << "Sorry! Item is out of stock :( " << endl ;
                in.setInputed(-m);
                cout << "Your Money: " << m << endl;

            }
        }
        else{
            cout << "Nothing in Stock!" << endl;
            break;
        }
        system("pause");
    }



    //ctor
}

run::~run()
{
    //dtor
}
