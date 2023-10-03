    #include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    int get_month()
    {
        return this->month;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_year(int year)
    {
        this->year = year;
    }

    bool is_leap_year()
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return true;
        else
            return false;
    }

    void accept_date()
    {
        cout << "Enter the date" << endl;
        cin >> this->day;
        cout << "Enter the month" << endl;
        cin >> this->month;
        cout << "Enter the year" << endl;
        cin >> this->year;
    }
    void display_date()
    {
        cout << "day=" << this->day <<endl;
        cout<< "Month=" << this->month <<endl;
        cout << "Year=" << this->year << endl;
        if(is_leap_year())
            cout<<"it is a leap year"<<endl;
        else
            cout<<" it is not a leap year"<<endl;
    }
};

class Employee
{
private:
    int id;
    float sal;
    string dept;
    Date doj;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = " ";
        this->doj;
    }
    Employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    int getid()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id;
    }
    float getsal()
    {
        return this->sal;
    }
    void setsal(float sal)
    {
        this->sal;
    }
    string getdept()
    {
        return this->dept;
    }
    void setdept(string dept)
    {
        this->dept;
    }

    void accept_employee()
    {
        cout << " Enter the id=" << endl;
        cin >> this->id;
        cout << "Enter the sal=" << endl;
        cin >> this->sal;
        cout << "Enter the dept" << endl;
        cin >> this->dept;
        this->doj.accept_date();
    }

    void display_employee()
    {
        cout << "Id=" << this->id << endl;
        cout << "sal=" << this->sal << endl;
        cout << "Dept=" << this->dept;
        this->doj.display_date();
        
    }
};

class Person
{
private:
    string name;
    string addr;
    Date dob;

public:
    Person()
    {
        this->name = " ";
        this->addr = " ";
        this->dob;
    }
    Person(string name, string addr, int day, int month, int year) : dob(day, month, year)
    {
        this->name = name;
        this->addr = addr;
        this->dob = dob;
    }

    string getname()
    {
        return this->name;
    }
    void setname(string name)
    {
        this->name;
    }

    string getaddr()
    {
        return this->addr;
    }

    void setaddr(string addr)
    {
        this->addr;
    }

    Date getdob()
    {
        return this->dob;
    }
    void setdob(Date dob)
    {
        this->dob;
    }

    void accept_person()
    {
        cout << "Enter the name of a person" << endl;
        cin >> this->name;
        cout << "Enter the addres of a person" << endl;
        cin >> this->addr;
        cout << "the birth date of a person" << endl;
        this->dob.accept_date();
    }

    void display_person()
    {
        cout << "name=" << this->name << endl;
        
        cout << "Addr=" << this->addr << endl;
        cout << " Birth date of a person is" << endl;
        this->dob.display_date();
    }
};

int main(void)
{
        Employee e;
        e.accept_employee();
        e.display_employee();
//Employee e1(10,2000,'ACCT',10,10,2000);
        Employee e1(1,1000,"Acct",10,2,1999);
        e1.display_employee();
    
        return 0;
}