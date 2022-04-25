#include <iostream>
using namespace std;

class _time{
    protected:
        int h1, m1, s1;
    public:
};

class add : public _time{
    private:
        int h, m, s;
    public: 
        add(int hour, int minute, int second){
            h = hour;
            m = minute;
            s = second;
        }
        void time_add(void);
        void gettime(void){
            cout << "Enter the time: " << endl;
            cin >> h1 >> m1 >> s1;
        }
        void puttime(void){
            cout << "Time is: " << h << ":" << m << ":" << s << endl;
        }
    friend class diff;
};


class diff{
    private:
        int h2, m2, s2;
    public:
        diff(int hour, int minute, int second){
            h2 = hour;
            m2 = minute;
            s2 = second;
        }
        void time_diff(add);
        void puttime(void){
            cout << "Time is: " << h2 << ":" << m2 << ":" << s2 << endl;
        }
};

void add :: time_add(void){
    add t(0,0,0);
    t.s = s + s1;
    t.m = m + m1 + (s / 60);
    t.h = h + h1 + (m / 60);
    t.puttime();
}

void diff :: time_diff(add a1){
    diff d1(0,0,0);
    d1.h2 = a1.h1 - h2;
    d1.m2 = a1.m1 - m2;
    d1.s2 = a1.s1 - s2;

    if(d1.h2 < 0){d1.h2*=(-1);};
    if(d1.m2 < 0){d1.m2*=(-1);};
    if(d1.s2 < 0){d1.s2*=(-1);};

    d1.puttime();  
}

int main(){
    add t2(2, 2, 2);
    t2.gettime();
    add t = t2;
    diff t3(5, 5, 5);
    t2.time_add();
    t3.time_diff(t);

    return 0;
}
