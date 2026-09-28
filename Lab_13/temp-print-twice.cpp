#include <iostream>
using namespace std;
// Function Template
template <typename T>
void printTwice(T b)
{
    cout << b << endl;
    cout << b << endl;
}
int main()
{
    printTwice(10);
    printTwice(5.5);
    printTwice("Hello");

    return 0;
}
