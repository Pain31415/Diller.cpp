#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include "ProductDTO.h"
using namespace std;

struct Client
{
    static inline void Show()
    {
        User* clientUser = new User("Client", "Johnson", "Mrs.", "USA, Chicago, Main St", "+987654321");
        EndPoint* fromEndPoint = new EndPoint("USA, Los Angeles, Hollywood", "25.11.2019", "15:00");
        EndPoint* toEndPoint = new EndPoint("USA, Chicago, Main St", "28.11.2019", "18:30");

        Product<string>* product = new Product<string>("Laptop", 1200.0, 1);
        ProductDTO<string>* productDTO = new ProductDTO<string>(product, fromEndPoint, toEndPoint);

        cout << "Client Information: " << clientUser->GetFirstName() << " " << clientUser->GetSurname() << endl;
        cout << "Product purchased: " << productDTO->GetProduct()->productName << ", Price: " << productDTO->GetProduct()->price << ", Quantity: " << productDTO->GetProduct()->quantity << endl;
        cout << "From: " << productDTO->GetFromEndPoint()->GetAddress() << ", Date: " << productDTO->GetFromEndPoint()->GetDate() << ", Time: " << productDTO->GetFromEndPoint()->GetTime() << endl;
        cout << "To: " << productDTO->GetToEndPoint()->GetAddress() << ", Date: " << productDTO->GetToEndPoint()->GetDate() << ", Time: " << productDTO->GetToEndPoint()->GetTime() << endl;
    }
};

#endif // !CLIENT_H