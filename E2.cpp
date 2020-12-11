#include <iostream>

class Operation
{
private:
    int a,b;

public:
   Operation(int a,int b) //Constructor
    {
        this->a=a;
        this->b=b;
    }
    int Sum()
    {
        return a+b;
    }
};

int main()
{
    int a,b;
    std::cout<<"Please enter two numbers:";
    std::cin>>a>>b;
    Operation operacion(a,b);
    int sum = operacion.Sum();
    std::cout << "The result of the sum is:" <<sum;
    return  0;
}
