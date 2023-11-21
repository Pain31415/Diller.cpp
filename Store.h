#ifndef STORE_H
#define STORE_H

#include <iostream>
#include <string>
#include "Cart.h"
using namespace std;

struct Store
{
public:
    int number;
    string address;
    Cart* cart;

    Store()
    {
        number = 0;
        address = "";
        cart = new Cart();
    }

    Store(int number, string address, Cart* cart)
    {
        this->number = number;
        this->address = address;
        this->cart = cart;
    }

    inline int GetNumber() const
    {
        return number;
    }

    inline string GetAddress() const
    {
        return address;
    }

    inline Cart* GetCart() const
    {
        return cart;
    }
};

#endif // STORE_H