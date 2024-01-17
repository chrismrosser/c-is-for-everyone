#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter your first name: ";
    string first;
    cin >> first;
    cout << "Enter your love's first name: ";
    string love;
    cin >> love;
    string initials = first.substr(0,1)
        + "&" + love.substr(0,1) + " forever";
        cout << initials << endl;

        return 0; 
}