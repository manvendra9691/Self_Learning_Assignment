#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout<<"value of  a and b before swaping address ="<<a<<","<<b<<endl;
    cout << "value of  &a and &b before swaping address =" << &a<< "," << &b << endl;
    int p = *a;
    int *p;
    cout << "value of  p =" << p << endl;
    cout << "value of  &p=" << &p << endl;
    *a = *b;
    cout<<"value of *a = "<<*a<<endl;
    *b = p;
    cout << "value of  *a and *b after swaping address in swap  =" << *a << "," << *b << endl<<endl;
     cout << "value of  &a and &b after swaping address =" << &a<< "," << &b << endl;

}
int main()
{
    int x = 5;
    int y = 10;
    cout << "value of  x and y before swaping address =" << x << "," << y << endl;
     cout << "value of  &x and &y before swaping address =" << &x << "," << &y << endl<<endl;
    swap(&x,&y);
     cout << "value of  x and y after swaping address =" << x << "," << y << endl;
     cout << "value of  &x and &y after swaping address =" << &x<< "," << &y << endl;
    return 0;
}
