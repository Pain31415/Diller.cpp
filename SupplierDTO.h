#ifndef SUPPLIERDTO_H
#define SUPPLIERDTO_H

#include <iostream>
#include "ProductDTO.h"
#include "Cart.h"
#include "EndPoint.h"
using namespace std;

struct SupplierDTO
{
private:
    Cart* fromCart;
    Cart* toCart;
    Product<string>* product;
    EndPoint* fromEndPoint;
    EndPoint* toEndPoint;

public:
    SupplierDTO()
    {
    }

    SupplierDTO(Cart* fromCart, Cart* toCart, Product<string>* product, EndPoint* fromEndPoint, EndPoint* toEndPoint)
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

    SupplierDTO* Send()
    {
        return this;
    }

    void Receive(SupplierDTO* supplierDTO)
    {
        if (supplierDTO == nullptr)
        {
            return;
        }
        this->fromEndPoint = supplierDTO->fromEndPoint;
        this->toEndPoint = supplierDTO->toEndPoint;
        this->fromCart = supplierDTO->fromCart;
        this->toCart = supplierDTO->toCart;
        this->product = supplierDTO->product;
    }
};

#endif