//calculator using oops
#include<iostream>
using namespace std;
class Calculator{
    public:
    int a;
    int b;
    void add(){
        cout<<a+b;
        cout<<endl;
    }
    void subtract()
    {
        cout<<a-b;
        cout<<endl;
    }
    void multiply()
    {
        cout<<a*b;
        cout<<endl;
    }
    void divide()
    {
        cout<<a/b;
        cout<<endl;
    }
};
int main()
{
    Calculator calci;
    calci.a=25;
    calci.b=50;
    calci.add();
    calci.subtract();
    calci.multiply();
    calci.divide();
}