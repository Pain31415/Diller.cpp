#ifndef MAIN_SELLER_H
#define MAIN_SELLER_H

#include <iostream>
#include "ProductDTO.h"
using namespace std;

struct MainSeller
{
    static inline void Show()
    {
        User* mainSellerUser = new User("Main", "Seller", "Mr.", "USA, New York, Broadway", "+123456789");
        EndPoint* fromEndPoint = new EndPoint("USA, New York, Broadway", "21.11.2019", "12:00");
        EndPoint* toEndPoint = new EndPoint("USA, Los Angeles, Hollywood", "25.11.2019", "15:00");

        Product<string>* product = new Product<string>("Laptop", 1200.0, 3);
        ProductDTO<string>* productDTO = new ProductDTO<string>(product, fromEndPoint, toEndPoint);

        cout << "Main Seller Information: " << mainSellerUser->GetFirstName() << " " << mainSellerUser->GetSurname() << endl;
        cout << "Product to sell: " << productDTO->GetProduct()->productName << ", Price: " << productDTO->GetProduct()->price << ", Quantity: " << productDTO->GetProduct()->quantity << endl;
        cout << "From: " << productDTO->GetFromEndPoint()->GetAddress() << ", Date: " << productDTO->GetFromEndPoint()->GetDate() << ", Time: " << productDTO->GetFromEndPoint()->GetTime() << endl;
        cout << "To: " << productDTO->GetToEndPoint()->GetAddress() << ", Date: " << productDTO->GetToEndPoint()->GetDate() << ", Time: " << productDTO->GetToEndPoint()->GetTime() << endl;
    }
};

#endif // !MAIN_SELLER_H