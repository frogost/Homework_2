#include <iostream>
#include <math.h>

class point{
private:
    float x;
    float y;

public:
    void setX(float value){
        x=value;
    }

    void setY(float value){
        y=value;
    }

    float foo(point a){
        std::cout<<"Дистанция от начала координат до точки - "<<sqrt(pow(x,2)+pow(y,2))<<'\n';
        return 0;
    }
};

int main() {
    point a;
    a.setX(2);
    a.setY(2);
    a.foo(a);
    return 0;
}