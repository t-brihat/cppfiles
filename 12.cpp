#include <iostream>

using namespace std;

class number3;
class number2;

class number1{
    private:
        int num1;
    public:
        void getdata(int n){
            num1 = n;
        }
    void friend add(number1, number2, number3);
};


class number2{
    private:
        int num2;
    public:
        void getdata(int n){
            num2 = n;
        }
    void friend add(number1, number2, number3);
};

class number3{
    private:
        int num3;
    public:
        void getdata(int n){
            num3 = n;
        }
    void friend add(number1, number2, number3);
};

void add(number1 a, number2 b, number3 c){
    int sum;

    sum = a.num1 + b.num2 + c.num3;

    cout << "The sum is: " << sum << endl;
}

int main(){
    number1 n1;
    number2 n2;
    number3 n3;

    n1.getdata(10);
    n2.getdata(20);
    n3.getdata(15);

    add(n1, n2, n3);
    return 0;
}
