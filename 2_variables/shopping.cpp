#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // welcome prompt
    cout << "Welome to the store... \n";
    cout << "We hope you were able to find everything you were looking for \n";
    cout << "Enter below the item amounts you are buying today... \n";

    //items for sale price

    double gum_price = 0.98;
    double bread_price = 1.89;
    double milk_price = 2.49;
    double cookies_price = 3.56;
    double candybar_price = 0.59;
    double bannana_price_oz = 2.56;
    double redbullpack_price = 28.981;

    // input set up

    cout << "Gum \n";
    cout << "Enter amount: ";
    double gum_amount;
    cin >> gum_amount;
    cout << "\n\n";

    cout << "Bread \n";
    cout << "Enter amount: ";
    double bread_amount;
    cin >> bread_amount;
    cout << "\n\n";
    
    cout << "Milk \n";
    cout << "Enter amount: ";
    double milk_amount;
    cin >> milk_amount;
    cout << "\n\n";
    
    cout << "Cookies \n";
    cout << "Enter amount: ";
    double cookies_amount;
    cin >> cookies_amount;
    cout << "\n\n";
    
    cout << "Candy Bar \n";
    cout << "Enter amount: ";
    double candybar_amount;
    cin >> candybar_amount;
    cout << "\n\n";
    
    cout << "Banannas \n";
    cout << "Enter amount: ";
    double bannana_amount;
    cin >> bannana_amount;
    cout << "\n\n";

    cout << "Redbull (gives you wings)\n";
    cout << "Enter amount: ";
    double redbull_amount;
    cin >> redbull_amount;
    cout << "\n\n";
    
    // total calulation

     double total_price = gum_price * gum_amount + bread_price * bread_amount + milk_price * milk_amount + cookies_price * 
     cookies_amount + candybar_price * candybar_amount + bannana_price_oz * bannana_amount + redbullpack_price * redbull_amount;

    
    
    cout << fixed << setprecision (2);
    cout << "Your total today is: " << total_price << "\n";
    cout<< "Thank you so much for shopping at CMaRt";

    cout << "\n\n";
    

return 0;
}