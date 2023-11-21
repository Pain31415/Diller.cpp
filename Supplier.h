#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <iostream>
#include "ProductDTO.h"
using namespace std;

struct Supplier
{
    static inline void Show()
    {
        User* supplierUser = new User("Supplier", "Smith", "Mr.", "USA, San Francisco, Main St", "+111223344");
        EndPoint* fromEndPoint = new EndPoint("USA, San Francisco, Main St", "28.11.2019", "18:30");
        EndPoint* toEndPoint = new EndPoint("USA, New York, Broadway", "21.11.2019", "12:00");

        Product<string>* product = new Product<string>("Laptop", 1000.0, 10);
        ProductDTO<string>* productDTO = new ProductDTO<string>(product, fromEndPoint, toEndPoint);

        cout << "Supplier Information: " << supplierUser->GetFirstName() << " " << supplierUser->GetSurname() << endl;
        cout << "Product supplied: " << productDTO->GetProduct()->productName << ", Price: " << productDTO->GetProduct()->price << ", Quantity: " << productDTO->GetProduct()->quantity << endl;
        cout << "From: " << productDTO->GetFromEndPoint()->GetAddress() << ", Date: " << productDTO->GetFromEndPoint()->GetDate() << ", Time: " << productDTO->GetFromEndPoint()->GetTime() << endl;
        cout << "To: " << productDTO->GetToEndPoint()->GetAddress() << ", Date: " << productDTO->GetToEndPoint()->GetDate() << ", Time: " << productDTO->GetToEndPoint()->GetTime() << endl;
    }
};

#endif // !SUPPLIER_H