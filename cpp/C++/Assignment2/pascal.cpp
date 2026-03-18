
#include<iostream>
using namespace std;
int main()
{
 int i,j,sp ,value;
 for(i=1 ; i<=5 ; i++)
 {
    value = 1;
  for(sp=1;sp<=5-i;sp++)
  {
    cout<<" ";
  }
 for(j=1;j<=i;j++)
 { 
   cout<<value<<" ";
   value = value*(i-j)/j;
 }
 cout<<endl;

 }
}