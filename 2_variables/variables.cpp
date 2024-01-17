#include <iostream>
#include <iomanip>

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

 cout << "And your mom always is the same as " << ur_mom << " whenever I am around.\n\n";

 // cont, practice

 int pennies = 2500;
 int dollars = pennies / 100; 
 int cents = pennies % 100; // this is set to show how you can use / or % to divide
 
 cout << "How many dollars do I have " << dollars << 
 " If i have this many pennies "<< pennies << "\n\n";

 
 // amount of packs
 cout << "Enter the amount of packs:  ";
 double amount_packs;
 cin >> amount_packs;

 // price
  cout << "Enter Current Price: ";
  double price;
  cin >> price;


 const double total_price = amount_packs * price;

 // output? 

 cout << fixed << setprecision(2);
 cout << "Total Price: " << total_price << "\n";
cout << "\n\n";

 return 0;
}
