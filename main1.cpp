#include <iostream>

class date{
private:
    int day;
    int month;
    int year;
    int prov=0;

public:
    void print(){
        std::cout << day  << '|' << month << '|' << year << std::endl;
    }

    float setDay(int value){
        if (prov==2) {
            if (value >= 1 && value <= 31) {
                day = value;
            }
            else
                std::cout<<"Неправильно задан день\n";
        }
        else
            std::cout<<"День введен до месяца и года\n";
    }

    float setMonth(int value){
        month=value;
        prov++;
    }

    float setYear(int value){
        year=value;
        prov++;
    }

};

int main() {
    date a;
    a.setDay(19);   //до месяца и года
    a.setMonth(10);
    a.setDay(20);   //до года
    a.setYear(2018);
    a.setDay(35);   //неправильно задан день
    a.setDay(21);   //верно
    a.print();
    return 0;
}