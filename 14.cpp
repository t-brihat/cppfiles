#include <iostream>
using namespace std;

class marks{
    private:
        int *math, *comp, *phy;
    public:
        marks(){
            math = new int;
            comp = new int;
            phy = new int;
        }

        ~marks(){
            delete math;
            delete phy;
            delete comp;
        }

        void getdata(int m, int c, int p){
            *math = m;
            *comp = c;
            *phy = p;
        }

        void putdata(int);
        void check(void);
};

void marks :: check(void){
    if (*math > 45 && *comp > 45 && *phy > 45){
        putdata(1);
    }else{
        putdata(0);
    }
}

void marks :: putdata(int n){
            cout << "Marks in Maths: " << *math << endl;
            cout << "Marks in Computer: " << *comp << endl;
            cout << "Marks in Physics: " << *phy << endl;

            if(n){
                cout << "Pass" << endl;
            }else{
                cout << "Fail" << endl;
            }
}

int main(){
    marks s1, s2;
    s1.getdata(55, 60, 80);
    s2.getdata(15, 39, 60);

    s1.check();
    s2.check();

}