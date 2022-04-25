#include <iostream>
using namespace std;

class person{
    protected:
        string name, address;
        int age;
    public:
        person(string n, string ad, int a){
            name = n;
            address = ad;
            age = a;
        }
        void showdata(void){
            cout << "Name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Age: " << age << endl;
        }
};

class teacher : public person{
    private:
        string qualification, department;
    public:
        teacher(string n, string ad, int a, string q, string d) : person(n, ad, a){
            qualification = q;
            department = d;
        }
        void showdata(void){
            person::showdata();
            cout << "Qualification: " << qualification << endl;
            cout << "Department: " << department << endl;
        }

};

class student : public person{
    private:
        string program, semester;
    public:
        student(string n, string ad, int a, string p, string s) : person(n, ad, a){
            program = p;
            semester = s;
        }
        void showdata(void){
            person::showdata();
            cout << "Program: " << program << endl;
            cout << "Semester: " << semester << endl;
        }
};

int main(){
    student s1("Hari", "Kathmandu", 19, "Civil", "3rd");
    teacher t1("Ram", "Lalitpur", 45, "Masters", "Civil");

    cout << endl <<  "Student: " << endl;
    s1.showdata();
    cout << endl << "Teacher: " << endl;
    t1.showdata();

    return 0;
}