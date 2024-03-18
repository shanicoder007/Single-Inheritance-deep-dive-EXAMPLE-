#include <iostream>
using namespace std;

class Base
{

    int data0; // private members of the base class are notinheritable....
public:
    int data1;
    int data2;
    void setData();
    // int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 30;
    data2 = 49;
}
/*int Base ::getData1()
{
    return data1;
}*/
int Base ::getData2()
{
    return data2;
}

class derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * data1;
}
void derived ::display()
{

    cout << "The value of Data 1 is : " << data1 << endl;
    cout << "The value of Data 2 is : " << data2 << endl;
    cout << "The value of Data 3 is : " << data3 << endl;
}

int main()
{
    derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}