#ifndef MAINSELLERDTO_H
#define MAINSELLERDTO_H

#include <iostream>
#include "ProductDTO.h"
#include "Cart.h"
#include "EndPoint.h"
using namespace std;

struct MainSellerDTO
{
private:
    Cart* fromCart;
    Cart* toCart;
    Product<string>* product;
    EndPoint* fromEndPoint;
    EndPoint* toEndPoint;

public:
    MainSellerDTO()
    {
    }

    MainSellerDTO(Cart* fromCart, Cart* toCart, Product<string>* product, EndPoint* fromEndPoint, EndPoint* toEndPoint)
    {
        this->fromCart = fromCart;
        this->toCart = toCart;
        this->product = product;
        this->fromEndPoint = fromEndPoint;
        this->toEndPoint = toEndPoint;
    }

    Cart* GetFromCart() const
    {
        return fromCart;
    }

    Cart* GetToCart() const
    {
        return toCart;
    }

    Product<string>* GetProduct() const
    {
        return product;
    }

    EndPoint* GetFromEndPoint() const
    {
        return fromEndPoint;
    }

    EndPoint* GetToEndPoint() const
    {
        return toEndPoint;
    }

    MainSellerDTO* Send()
    {
        return this;
    }

    void Receive(MainSellerDTO* mainSellerDTO)
    {
        if (mainSellerDTO == nullptr)
        {
            return;
        }
        this->fromEndPoint = mainSellerDTO->fromEndPoint;
        this->toEndPoint = mainSellerDTO->toEndPoint;
        this->fromCart = mainSellerDTO->fromCart;
        this->toCart = mainSellerDTO->toCart;
        this->product = mainSellerDTO->product;
    }
};

#endif