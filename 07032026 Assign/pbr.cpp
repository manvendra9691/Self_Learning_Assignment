#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    cout << "Value of a and b before swap =" << a << " , " << b << endl;
    int temp = a;
    cout << "Value of temp =" << temp << endl;
    cout << "Value of &temp =" << &temp << endl;
    a = b;
    cout << "Value of a  =" << a << endl;
    cout << "Value of &a = " << &a << endl;
    b = temp;
    cout << "Value of b after swap =" << b << endl;
    cout << "Value of a and b after swap =" << a << ", " << b << endl;
    cout << "Value of &a and &b after swap =" << &a << ", " << &b << endl;
}

int main()
{
    int x = 5;
    int y = 10;
    cout << "value of x and y = " << x << "," << y << endl;
    cout << "value of &x and &y = " << &x << "," << &y << endl;

    swap(x, y);
    cout << "value after swapping of x and y = " << x << "," << y << endl;
    cout << "value after swapping of &x and &y = " << &x << "," << &y << endl;

    return 0;
}