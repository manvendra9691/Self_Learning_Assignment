#include<iostream>
using namespace std;
#include<String>
class book
{
  string title , author;
  int bookId =0 , price=0;
  public:
  void input()
  {
   cin>>bookId;
   cin>>title;
   cin>>author;
   cin>>price;
   
  }
  void display(book obj1)
  {
    cout<<"Book Id = "<<obj1.bookId<<endl;
     cout<<"title = "<<obj1.title<<endl;
     cout<<"author"<<obj1.author<<endl;
     cout<<"price"<<obj1.price<<endl;
 
     cout<<"---------------------------"<<endl;

  }
};
int main()
{
book b1;
book b2;
book b3;
book b4;
 cout<<"Enter bookId ,title,author and price"<<endl;
 b1.input();
 b2.input();
 b3.input();
 b4.input();
 b1.display(b1);
 b2.display(b2);
 b3.display(b3);
 b4.display(b4);
 
 return 0;
}