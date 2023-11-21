#include "MainSeller.h"
#include "Client.h"
#include "Supplier.h"

int main()
{
    MainSeller::Show();
    cout << "\n---------------------------------------------\n";
    Client::Show();
    cout << "\n---------------------------------------------\n";
    Supplier::Show();

    return 0;
}