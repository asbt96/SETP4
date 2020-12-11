#include <iostream>

class Complex
{
private:

    int real;
    int imag;

public:

    void sum(Complex z1, Complex z2)
    {
        this->real = z1.real + z2.real;
        this->imag = z1.imag + z2.imag;
    }

    void show()
    {
        std::cout << real << "+" << imag << "i";
    }

    void get_complex_number()
    {
        std::cin>>real;
        std::cin>>imag;
    }

};

int main ()
{

    Complex z1, z2, z_sum;

    std::cout << "The real and imaginary part of the 1st term of the addition are: " << '/n';
    z1.get_complex_number();

    std::cout << "The real and imaginary part of the 2nd term of the addition are, respectively: " <<'/n';
    z2.get_complex_number();

    z_sum.sum(z1, z2);
    std::cout << "The sum of the 2 complex numbers is: ";
    z_sum.show();
    std::cout << "." <<'/n';

    return 0;
}
