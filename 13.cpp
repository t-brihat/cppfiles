#include <iostream>

using namespace std;

class _time{
    private:
        int hr, min, sec;
    public:
        _time(){
            hr = 0;
            min = 0;
            sec = 0;
        }
        _time(int h, int m, int s){
            hr = h;
            min = m;
            sec = s;
        }
        void putdata(void){
            cout << "The time is: " << hr << ":" << min << ":" << sec;
        }
    friend void add_time(_time, _time);
};

void add_time(_time t1, _time t2){
    _time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min + (t3.sec / 60);
    t3.hr = t1.hr + t2.hr + (t3.hr / 60);

    t3.min %= 60;
    t3.sec %= 60;

    t3.putdata();
}

int main(){
    _time t1(2, 40, 50);
    _time t2(4, 50, 40);

    add_time(t1, t2);

    return 0;
}