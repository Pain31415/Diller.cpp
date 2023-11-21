#ifndef PRODUCTDTO_H
#define PRODUCTDTO_H

#include <iostream>
#include "Cart.h"
#include "Product.h"
#include "EndPoint.h"

using namespace std;

template <typename T>
struct ProductDTO
{
private:
    Cart* fromCart;
    Cart* toCart;
    Product<T>* product;
    EndPoint* fromEndPoint;
    EndPoint* toEndPoint;
    bool status = false;

public:
    ProductDTO() {}

    ProductDTO(Cart* fromCart, Cart* toCart, Product<T>* product, EndPoint* fromEndPoint, EndPoint* toEndPoint)
    {
        this->fromCart = fromCart;
        this->toCart = toCart;
        this->product = product;
        this->fromEndPoint = fromEndPoint;
        this->toEndPoint = toEndPoint;
    }

    inline Cart* GetFromCart() const
    {
        return fromCart;
    }

    inline Cart* GetToCart() const
    {
        return toCart;
    }

    inline Product<T>* GetProduct() const
    {
        if (status == true)
        {
            return product;
        }
        else
        {
            cout << "Status receive false!" << endl;
            return new Product<T>("empty", 0, 0);
        }
    }

    inline EndPoint* GetFromEndPoint() const
    {
        return fromEndPoint;
    }

    inline EndPoint* GetToEndPoint() const
    {
        return toEndPoint;
    }

    ProductDTO* Send()
    {
        return this;
    }

    void Receive(ProductDTO* product)
    {
        if (product == nullptr)
        {
            this->status = false;
            return;
        }
        this->fromEndPoint = product->fromEndPoint;
        this->toEndPoint = product->toEndPoint;
        this->fromCart = product->fromCart;
        this->toCart = product->toCart;
        this->product = product->product;
        this->status = true;
    }

    inline bool GetStatus() const
    {
        return status;
    }
};

#endif