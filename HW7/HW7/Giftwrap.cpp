//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#include "Giftwrap.h"
#include <iostream>
using namespace std;

Giftwrap::Giftwrap()
{
    length=1.0;
    width=1.0;
    height=1.0;
    pricePerInch=0.0036;
    taxRate=0.08;
}

Giftwrap::Giftwrap(double tax, double price)
{
    length=1.0;
    width=1.0;
    height=1.0;
    taxRate=tax;
    pricePerInch=price;
}

bool Giftwrap:: setLength(double len)
{
    bool validData;
    
    if(len>=0)
    {
        length =len;
        validData=true;
    }
    else
    {
        validData = false;
    }
    return validData;
}

bool Giftwrap:: setWidth(double w)
{
    bool validData;
    if(w>=0)
    {
        width=w;
        validData= true;
        
    }
    else
    {
        validData=false;
    }
    return validData;
}

bool Giftwrap:: setHeight(double h)
{
    bool validData;
    
        if (h>=0)
        {
            height=h;
            validData=true;
        }
        else
        {
            validData=false;
        }
        
    return validData;
}

bool Giftwrap:: setTaxRate(double tax)
{
    bool taxRate;
    if (tax <0 && tax >1)
    {
        
        taxRate=false;
    }
    else
    {
        taxRate=true;
    }
    return taxRate;
}
bool Giftwrap:: setPricePerInch(double price)
{
    bool validData;
    if (price>=0)
    {
        pricePerInch=price;
        validData=true;
    }
    else
    {
        validData=false;
    }
    return validData;
}

double Giftwrap::getLength()const
{
    return length;
}
double Giftwrap:: getWidth()const
{
    return width;
}
double Giftwrap:: getHeight()const
{
    return height;
}
double Giftwrap:: getTaxRate()const
{
    return taxRate;
}
double Giftwrap:: getPricePerInch()const
{
    return pricePerInch;
}

double Giftwrap::calcSubtotal()const
{
    double surfaceArea;
    double subTotal;
    surfaceArea=(2 * length * width) + (2 * length * height) + (2 * width * height);
    subTotal= surfaceArea*pricePerInch;
    return subTotal;
}

double Giftwrap:: calcTax() const
{
    double tax=0;
     tax= calcSubtotal() *  taxRate;
    return tax;
}
double Giftwrap::calcTotal()const
{
    double total;
    total= calcSubtotal()+ calcTax();
    return total;
}
