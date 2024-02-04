
//  dynamic memory allocation of class objects array and using
//  arrow operator..

#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }
    void displaydata()
    {
        cout << "ID Number of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size;
    cout << "Enter size of items to create" << endl;
    cin >> size;
    shop *ptr = new shop[size];
    shop *temp_ptr = ptr;
    int id, i;
    float price;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id number of " << i + 1 << " item :";
        cin >> id;
        cout << "Enter the price of " << i + 1 << " item :";
        cin >> price;
        ptr->setdata(id, price);
        ptr++;
    }
    ptr = temp_ptr;
    for (i = 0; i < size; i++)
    {
        ptr->displaydata();
        ptr++;
    }
    return 0;
}