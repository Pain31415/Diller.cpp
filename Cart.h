#ifndef CART_H
#define CART_H

#include "Product.h"

struct Cart
{
public:
    int amount;
    Product<string>* products = nullptr;

    Cart()
    {
        amount = 10;
        products = new Product <string > [amount];
    }

    Cart(int amount)
    {
        this->amount = amount;
        products = new Product<string>[this->amount];
    }

    Cart(int amount, Product<string>* products) : Cart(amount)
    {
        if (this->products != nullptr)
        {
            delete[](this->products);
        }
        this->products = products;
    }

    inline int GetAmount() const
    {
        return amount;
    }

    inline Product<string>* GetProducts() const
    {
        return products;
    }
};

#endif // CART_H