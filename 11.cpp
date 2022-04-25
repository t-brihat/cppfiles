#include <iostream>

using namespace std;

class city{
    private:
        string cityname;
        float disfromktm;
    public:
        void setdata(string);
        void putdata(void);
        void adddistance(city, city);
};

void city :: setdata(string name){
    cityname = name;

    cout << "Enter the distance: " << endl;
    cin >> disfromktm;
}

void city :: putdata(void){
    cout << "The city name: " << cityname << endl;
    cout << "The distace is: " << disfromktm << endl;
}

void city :: adddistance(city c1, city c2){
    disfromktm = c1.disfromktm + c2.disfromktm;

    cout << "The added distance is: " << disfromktm << endl;
}

int main(){
    city first, second, third;

    first.setdata("Pokhara: ");
    second.setdata("Dhangadi");
    
    third.adddistance(first, second);
    return 0;
}



