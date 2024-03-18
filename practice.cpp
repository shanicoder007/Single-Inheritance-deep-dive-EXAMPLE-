#include <iostream>
using namespace std;

class Base
{
protected:
    int Data1;

public:
    Base() : Data1(10) {}
    int getData1()
    {
        return Data1;
    }
};

class derived : public Base
{
public:
    void display()
    {
        // Call the getData1 member function to retrieve the value
        cout << "The value of Data 1 is : " << getData1() << endl;
    }
};

int main()
{
    derived obj;
    obj.display();
    return 0;
}
