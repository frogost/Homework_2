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

    float getX() {
        return x;
    }
    float getY() {
        return y;
    }
};

class polar{
private:
    float r;
    float phi;

public:
    void setCord(point a1) {
        r = sqrt(pow(a1.getX(), 2) + pow(a1.getY(), 2));
        phi = atan(a1.getX()/a1.getY())* 180.0 / 3.1415;
    }
    void print() {
        std::cout << "Радиус - " << r << '\n';
        std::cout << "Угол в градусах - " << int (phi) << '\n';
    }
};

int main() {
    point a;
    a.setX(1);
    a.setY(1);
    polar b;
    b.setCord(a);
    b.print();
    return 0;
}