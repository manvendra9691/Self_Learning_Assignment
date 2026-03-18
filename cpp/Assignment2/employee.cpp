#include<iostream>
using namespace std;
string compname = "Apple";

class Employee{
int empId, salary;
string name;
static int totalEmployee;
public:
Employee()
{
 empId=01;
 salary=1000;
 name="BOT";
 totalEmployee++;
}
Employee(int id,string n,int sal)
{
 empId=id;
 name=n;
 salary=sal;
 totalEmployee++;
 display();
}
static void showtotalemployee()
{
    cout<<"Total Number Of Employees in out Company = "<<totalEmployee;
    
}
void display(){
cout<<"Company name = "<< compname<<endl
    <<"employee ID = "<< empId<<endl
<<"employee name = "<< name <<endl
<<"Salary = "<< salary<<endl<<endl;

}
};
int Employee :: totalEmployee;
int main()
{
 Employee e1(1,"Manu",1000000);
 Employee e2(2,"himan",90000);
 Employee e3(3,"maddy",40000);
 Employee e4(4,"hemant",3000);
 Employee e5(5,"raj",200000);
 Employee::showtotalemployee();
return 0; 
}