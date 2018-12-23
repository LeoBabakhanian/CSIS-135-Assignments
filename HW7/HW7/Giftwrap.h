//Leo Babakhanian
//CS/IS- 135 Fall Class
//Homework 7

#ifndef GIFTWRAP_H
#define GIFTWRAP_H

class Giftwrap
{
private:
    double length;
    double width;
    double height;
    double taxRate;
    double pricePerInch;
    double subTotal;
    double tax;

public:
    Giftwrap();
    Giftwrap(double,double);
    bool setLength(double);
    bool setWidth(double);
    bool setHeight(double);
    bool setTaxRate(double);
    bool setPricePerInch(double);
    double getLength()const;
    double getWidth() const;
    double getHeight() const;
    double getTaxRate() const;
    double getPricePerInch() const;
    double calcSubtotal() const;
    double calcTax()const;
    double calcTotal()const;
};

#endif
