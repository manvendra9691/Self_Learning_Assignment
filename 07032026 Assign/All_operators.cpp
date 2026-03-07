#include<iostream>
using namespace std;
class Operation
{
  int a , b ;

  public :
  void get()
  {
    
  cout<<"Enter value of a and b  "<< endl;
   cin >> this ->a ;
   cin >>this ->b ;
  }
  void logical()
  {
     cout<<"logical operator";
  int a , b , result;
  a= this ->a;
  b= this ->b;
  // And Operator 
result = (a>b)&&(b>0);
    cout<<"A is greater than B and B is greater than 0 ="<<result<<endl;

    // OR Operator 

    result = (a<b)||(b>0);
    cout<<"A is smaller than B or B is greater than 0 = "<<result<<endl;

   // Not Operator 
   result = (a != b);
   cout <<"A is not equal than B = "<<result<<endl<<endl;
  }
   void unary()
   { 
     cout<<"--------------------"<<endl;
     cout<<"Unary Operator"<<endl;
    int x;
    cout<<"Enter Value for x";
    cin>>x;
    cout<<"Initial value of x = "<< x << endl;
    cout<<"Pre Increment ++x = "<< ++x << endl;
    cout<<"post Increment x++ = "<< x++ << endl;
    cout<<"value of x after  post increment  = "<< x << endl;
    cout<<"Pre Decrement  --x = "<< --x << endl;
    cout<<"Post Decrement x-- = "<< x-- << endl;
    cout<<" value of x after Post Decrement  = "<< x << endl<<endl;

   }
   void ternary ()
   {
     cout<<"------------------"<<endl;
 cout << "Ternary Operator" << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;

     (num % 2 == 0) ? cout << "Number is Even" : cout << "Number is Odd";
 

   }

};
int main ()
{
 Operation o;
 o.get();
o.logical();
o.unary();
o.ternary();




}