#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

template <typename T>
struct Product
{
private:
    T data;
public:
    float price;
    int quantity;

    Product(T data, float price, int quantity)
    {
        this->data = data;
        this->price = price;
        this->quantity = quantity;
    }

    // Додав конструктор за замовчуванням
    Product() : data(""), price(0), quantity(0) {}

    inline T GetData() const
    {
        return data;
    }
};

#endif // !PRODUCT_H