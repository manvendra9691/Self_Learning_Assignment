#include<iostream>
using namespace std;
int main()
{
 int i,j;
 for(i=5 ; i>0 ; i--)
 {
    char ch='A';
 for(j=0;j<i;j++)
 {
   cout<<ch<<" ";
   ch++;
 }
 cout<<endl;

 }
}