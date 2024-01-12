#include <iostream>

using namespace std;

int main()
{ 
 cout << "Variables Practice.\n"; 
 int cans_per_pack = 6; // cans per pack of soda
 const double can_volume = .355; // liters in a 12oz can
 const double ur_mom = 69; // cause why not
 double total_volume = cans_per_pack * can_volume;


 cout << "A six pack of 12 oz cans has " << total_volume << " liters.\n";

 const double bottle_volume = 2;
 total_volume = total_volume + bottle_volume;

 cout << "A six pack and a two liter bottle contains " << total_volume <<
 " liters.\n";

 cout << "And your mom always is the same as " << ur_mom << " whenever I am around.\n";

 return 0;
}
