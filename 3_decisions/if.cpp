#include <iostream>

using namespace std;

int main()
{
    int floor;
    cout << "Floor: ";
    cin >> floor;
    int actual_floor;
    
    if (cin.fail())
    {
        cout << "ERROR Not an option.\n";
        return 1; 
    }
    if (floor == 13)
    {
        cout << "ERROR There is no 13th floor.\n";
        return 1;
    }
    if (floor <= 0 || floor > 20)
    {
        cout << "ERROR The Floors only exsit 1-20.\n";
        return 1;
    }
    
    if (floor > 13)
    {
        actual_floor = floor - 1;
    }
    else
    {
        actual_floor = floor;
    }

    cout << "The Elevator will travel to the actual floor "
        << actual_floor << endl;

    return 0;

}