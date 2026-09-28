#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printTwice(T val)
{
    cout << val << endl;
    cout << val << endl;
}

int main()
{
    int num = 10;
    double price = 5.5;
    string name = "Hello";

    cout << "Integer:" << endl;
    printTwice(num);

    cout << "\nDouble:" << endl;
    printTwice(price);

    cout << "\nString:" << endl;
    printTwice(name);

    return 0;
}
