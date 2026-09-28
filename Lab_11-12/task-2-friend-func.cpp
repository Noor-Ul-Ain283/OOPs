#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // Friend function
    friend void addDistance(Distance d1, Distance d2);
};

void addDistance(Distance d1, Distance d2)
{
    int totalFeet;
    int totalInches;

    totalFeet = d1.feet + d2.feet;
    totalInches = d1.inches + d2.inches;

    // Convert 12 inches into 1 foot
    if (totalInches >= 12)
    {
        totalFeet = totalFeet + totalInches / 12;
        totalInches = totalInches % 12;
    }

    cout << "Total Distance = "
         << totalFeet << " feet "
         << totalInches << " inches" << endl;
}

int main()
{
    Distance d1(5, 8);
    Distance d2(3, 7);

    addDistance(d1, d2);

    return 0;
}
