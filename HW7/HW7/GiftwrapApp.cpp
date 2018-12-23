//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#include "Giftwrap.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string store="Sally's Gifts";
    char choice='\0';
    double Leng=0;
    double wid=0;
    double hei=0;
    
    Giftwrap Sallys(.0925, .0025);
    Giftwrap box;

do
{
    cout << "GIFT WRAP INVOICE GENERATOR"<<endl;
    cout << "-------------------------------"<<endl;
    cout << "a) Generate Gift Wrap Invoice"<< endl;
    cout << "q) Quit"<< endl;
    
    cin >>choice;
    
    if(choice=='a' || choice =='A')
    {
    
    cout<< "Enter length: "<<endl;
    cin>> Leng;
    Sallys.setLength(Leng);
        
    cout << "Enter Width: "<< endl;
    cin>> wid;
    Sallys.setWidth(wid);
        
    cout << "Enter Height: "<< endl;
    cin>> hei;
    Sallys.setHeight(hei);
        
        cout << "GIFT WRAP INVOICE - Sally's Gifts" << endl;
        cout << "----------------------------------"<< endl;
        cout << fixed << setprecision(1)<<"Box Length: "<< Sallys.getLength()<< endl;
        cout << "Box Width:  " << Sallys.getWidth()<< endl;
        cout << "Box Height: " << Sallys.getHeight()<< endl;
        cout << "Price Per Inch: " << fixed<<setprecision(4)<< Sallys.getPricePerInch()<<endl<<endl;
        cout << "SUBTOTAL:  "<< fixed << setprecision(2)<< Sallys.calcSubtotal()<< endl;
        cout << "TAX:       "<< fixed << setprecision(2)<< Sallys.calcTax()<< endl;
        cout << "      ----------"<< endl;
        cout << "TOTAL:     "<<Sallys.calcTotal()<< endl;
        
    }
    else if(choice =='q' || choice =='Q')
    {
        cout << "You have chosen to quit the program."<< endl;
    }
    else
    {
        cout << "invalid Selection" << endl;
    }
}
while (choice!='q' && choice != 'Q');
    
    return 0;
}
