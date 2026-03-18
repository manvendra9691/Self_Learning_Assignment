#include<iostream>
using namespace std;
class calculator
{
   int num1 , num2;
   public:
   void input()
   {
    cout<<"Enter value two numbers "<<endl;
    cin>>num1>>num2;
   }
  void Add()
  {
   input();
   cout<<" num1+num2 = "<<num1+num2<<endl;
  }
  
  void Subtract()
  {
   input();
   cout<<" num1-num2 = "<<num1-num2<<endl;
  }
  
  void Multiplication()
  {
   input();
   cout<<" num1*num2 = "<<num1*num2<<endl;
  }
  
  void Division()
  {
   input();
   cout<<" num1/num2 = "<<num1/num2<<endl;
  }
  
 
};
int main()
{
calculator c;
cout<<"1. Add"<<endl;
cout<<"2. subtract"<<endl;
cout<<"3. Multiply"<<endl;
cout<<"4. Divide"<<endl;
cout<<"Enter a choice"<<endl;
int n ;
cin>>n;
switch(n)
{
   case 1: 
   c.Add();
   break;
   case 2: 
   c.Subtract();
   break;
   case 3: 
   c.Multiplication();
   break;
   case 4: 
   c.Division();
   break;   
   default:
   cout<<"Invalid Choice";
}
return 0;
}