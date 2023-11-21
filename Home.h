#include "ProductDTO.h"
#include "Cart.h"
#include "Store.h"
#include "EndPoint.h"

struct Home
{
    static inline void Show()
    {
        Product<string>* productFrom = new Product<string>("Amphetamine", 1200.0, 3);
        Product<string>* productTo = new Product<string>("cocaine", 800.0, 5);
        Product<string>* product3 = new Product<string>("HLSD", 150.0, 10);
        Product<string>* product4 = new Product<string>("Phenophthaligine", 600.0, 8);
        Product<string>* product5 = new Product<string>("other pills", 900.0, 5);

        Product<string>* products = new Product<string>[5] {
            *productFrom,
                * productTo,
                * product3,
                * product4,
                * product5};

        Cart* cart = new Cart(5, products);

        Store* store1 = new Store(1, "USA, New York, Broadway", cart);
        Store* store2 = new Store(2, "USA, Los Angeles, Hollywood", cart);

        EndPoint* endPointFrom = new EndPoint("USA, New York, Broadway", "21.11.2019", "12:00");
        EndPoint* endPointTo = new EndPoint("USA, Los Angeles, Hollywood", "25.11.2019", "15:00");

        Product<string>* product = new Product<string>("MESSAGE DATA", 2, 2);

        ProductDTO<string>* productDTO = new ProductDTO<string>(cart, cart, product, endPointFrom, endPointTo);

        ProductDTO<string>* productDTOReceive = new ProductDTO<string>();
        productDTOReceive->Receive(nullptr);
        cout << "Product Data: " << productDTOReceive->GetProduct()->GetData() << endl;
    }
};