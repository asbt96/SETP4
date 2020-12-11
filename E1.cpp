
#include <iostream>

class Rectangle  {

private:

    double length, width;

public:

    Rectangle(double length, double width)
    {
        this->length=length;
        this->width=width;
    }

    double calculate_area()
    {
        return length * width;
    }

};
