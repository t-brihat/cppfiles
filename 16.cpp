#include <iostream>
using namespace std;

class person{
    protected:
        string name;
        int code;
    public:
        person(string n, int c){
            name = n;
            code = c;
        }
        void display(void){
            cout << "Name: " << name << endl;
            cout << "Code: " << code << endl;
        }
};

class account : virtual public person{
    protected:
        int salary;
    public:
        account(string n, int c, int s) : person(n, c){
            salary = s;
        }
        void display(void){
            cout << "Salary: " << salary << endl;
        }
};

class admin : virtual public person{
    protected:
        int year_experience;
    public:
        admin(string n, int c, int y) : person(n, c){
            year_experience = y;
        }
        void display(void){
            cout << "Years of Experience: " << year_experience << endl;
        }
};

class record : public account, public admin{
    private:
        int record_no;
    public:
        record(string n, int c, int s, int y, int r) : account(n, c, s), admin(n, c, y), person(n, c){
            record_no = r;
        }
        void display(void){
            cout << "Record number: " << record_no << endl;
        }
};

int main(){
    record r1("Ram", 2012, 20000, 3, 1);
    r1.person::display();
    r1.account::display();
    r1.admin::display();
    r1.display();  
    return 0;
}