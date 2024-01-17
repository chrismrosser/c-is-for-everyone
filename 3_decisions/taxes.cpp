#include <iostream>
#include <string>

using namespace std;

int main ()
{
    const double rate_1 = 0.10;
    const double rate_2 = 0.12;
    const double single = 32000;
    const double married = 64000;

    double tax1 = 0;
    double tax2 = 0;

    double income;
    cout << "Please enter your income: ";
    cin >> income;

    cout << "Please enter s for single, m for married: ";
    string marital_status;
    cin >> marital_status;

    if (marital_status == "s")
    {
        if (income <= single)
        {
            tax1 = rate_1 * income;
        }
        else
        {
            tax1 = rate_1 * single;
            tax2 = rate_2 * (income - single);
        
        }
    }
    else
    {
        if (income <= married)
        {
            tax1 = rate_1 * income;
        }
        else
        {
            tax1 = rate_1 * married;
            tax2 = rate_2 * (income - married);
        }
    }
    double total_tax = tax1 + tax2;

    cout << "The tax is $" << total_tax << endl;
    return 0;

}  