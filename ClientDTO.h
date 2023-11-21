#ifndef CLIENTDTO_H
#define CLIENTDTO_H

#include <iostream>
#include "ProductDTO.h"
#include "Cart.h"
#include "EndPoint.h"
using namespace std;

struct ClientDTO
{
private:
    Cart* fromCart;
    Cart* toCart;
    Product<string>* product;
    EndPoint* fromEndPoint;
    EndPoint* toEndPoint;

public:
    ClientDTO()
    {
    }

    ClientDTO(Cart* fromCart, Cart* toCart, Product<string>* product, EndPoint* fromEndPoint, EndPoint* toEndPoint)
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

    ClientDTO* Send()
    {
        return this;
    }

    void Receive(ClientDTO* clientDTO)
    {
        if (clientDTO == nullptr)
        {
            return;
        }
        this->fromEndPoint = clientDTO->fromEndPoint;
        this->toEndPoint = clientDTO->toEndPoint;
        this->fromCart = clientDTO->fromCart;
        this->toCart = clientDTO->toCart;
        this->product = clientDTO->product;
    }
};

#endif