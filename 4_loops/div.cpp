#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double rate = .03; // 3%
    double funds = 20; // money going in
    const double target = 1000; // goal

    int months = 0;
    
    while (funds < target)
    {
        funds += 20;
        funds += funds * rate;
        months++;
    }

    std::cout << "It will take " << months << 
    " months to reach $" << target << 
    " with a 3% dividend rate and $20 added every month.\n";

    return 0;
}

