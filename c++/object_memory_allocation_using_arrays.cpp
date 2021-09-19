#include <iostream>
using namespace std;

class shop
{
    int itemID[100];
    int price[100];
    int counter = 0;

public:
    void initCounter(void) { int counter = 1; }
    void getID(void);
    void getprice(void);
};

void shop ::getID(void)
{
    cout << "Enter item ID." << endl;
    cin >> itemID[counter];
    cout << "Enter the price of the product with itemID : " << itemID[counter] << endl;
    cin >> price[counter];
    counter++;
}
void shop ::getprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the itemID " << itemID[i] << " is " << price[i] << endl;
    }
}
int main()
{
    shop hell;
    hell.getID();
    hell.getID();
    hell.getID();
    hell.getprice();
    return 0;
}