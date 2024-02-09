#include <iostream>

using namespace std;

/** first exsample of a funtion that exsits outside of int main an the top so that it will be applied to 
the main body as a rule or rather instructions*/

double cube_volume(double side_lenth)
{
    double volume = side_lenth * side_lenth * side_lenth;
    return volume;
}

// now that the rule (function) has been set it will apply to int main below 

int main()
{
     double result1 = cube_volume(2);
     double result2 = cube_volume(10);
     cout << "A cube with side length 2 has volume " << result1 << ".\n";
     cout << "A cube with side length 10 has volume " << result2 << ".\n"; 
    
    return 0;
}