#include<iostream>
using namespace std;
class Employee
{
  private:
  int id;
  float sal;

  public:
  Employee()
  {
    cout<<"inside Employee constructor"<<endl;
    this->id=0;
    this->sal=000;
  }
  Employee(int id,float sal)
  {
    this->id=id;
    this->sal=sal;
  }
  void setid(int id)
  {
   this->id=id;
  }
  void setsal(int sal)
  {
   this->sal=sal;
  }
  int getid()
  {
    return this->id;
  }
  float getsal()
  {
    return this->sal;
  }
  void accept()
  {
    cout<<"Enter id:"<<endl;
    cin>>this->id;
    cout<<"Enter salary:"<<endl;
    cin>>this->sal;
  }
  void display()
  {
    cout<<"id:"<<id<<endl;
    cout<<"Salary:"<<sal<<endl;
  }

};

//Class Manager started.
class Manager:virtual public Employee
{
    private:
    float bonus;

    public:
    Manager()
    {
        cout<<"inside Manager constructor"<<endl;;
        this->bonus=0;
    }
    Manager(float bonus)
    {
      this->bonus=bonus;
    }
    void setbonus(float bonus)
    {
      this->bonus=bonus;
    }
    float getbonus(float bonus)
    {
      return bonus;
    }
    
    void accept()
    { 
      Employee::accept();
      acceptManager();
    }
    
    void display()
    {
      Employee::display();
      displayManager();

    }
    protected:
    void acceptManager()
    {
      cout<<"Enter the bonus:"<<endl;
      cin>>this->bonus;
    }
    void displayManager()
    {
      cout<<"bonus:"<<this->bonus<<endl;
    }

    

};

//Class salesman started.
class Salesman:virtual public Employee
{
 private:
 float comm;
 public:
 Salesman()
 {
    cout<<"inside Salesman constructor"<<endl;
    this->comm=0;
 }
 Salesman(float comm)
 {
    this->comm=comm;
 }
 void setcomm(float comm)
 {
  this->comm;
 }
 float getcomm()
 {
  return this->comm;
 }
 void accept()
 {
  Employee::accept();
  acceptSalesman();
 }
 void display()
 {
  Employee::display();
  displaySalesman();
 }
 protected:
 void acceptSalesman()
 {
  cout<<"Enter commission:"<<endl;
  cin>>this->comm;
 }
 void displaySalesman()
 {
  cout<<"commission:"<<this->comm<<endl;
 }
};

//Class salesmanager started.
class SalesManager:public Manager,public Salesman
{
    public:
    SalesManager()
    {
        cout<<"inside Salesmanager constructor"<<endl;;
    }
    SalesManager(int id,float sal,float bonus,float comm)
    {
      setid(id);
      setsal(sal);
      setbonus(bonus);
      setcomm(comm);
    }
    void accept()
    {
      Employee::accept();
      acceptManager();
      acceptSalesman();
    }
    void display()
    {
     Employee::display();
     displayManager();
     displaySalesman();
    }
    

};
int main()
{
    SalesManager s1;
    s1.accept();
    s1.display();  
    
    return 0;
}