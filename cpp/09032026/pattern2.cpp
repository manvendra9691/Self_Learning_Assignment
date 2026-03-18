#include<iostream>
using namespace std;
int main()
{
 int i,j,n=1;
 for(i=1;i<=5;i++)
 {
    if(i%2==0)
     {
      n=0;
     }
     else
     {
      n=1;
     }
     for(j=1;j<=i;j++){
     cout<<n<<" ";
     if(n==1)
     {
        n--;
     }
     else{
        n++;
     }
     }
    
     cout<<endl;
 }
}