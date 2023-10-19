#include "product.h"

product::product(int id,string title,string description,int Uniprice,int qty,double price)
{   this->id=id;
    this->title=title;
    this->description=description;
    this->UniPrice=UniPrice;
    this->qty=qty;
    this->price=price;
}
product::DisplayProduct(){
	cout<<id<<title<<description<<UniPrice<<qty<<price;
}


product::~product()
{
}
