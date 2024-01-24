#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // test project to see what I can come up with on my own... good luck me

    std::string username;
    

    cout <<"Hello user... \n\n";
    cout <<"Who is joining us today on our adventure...? \n";
    cout << "User Name: ";
    cin >> username;
    cout << "Welcome " << username << " lets begin... \n\n";

    // opening over

    cout << "Today " << username << " we will travel far in order to save the queen from her evil sister.\n";
    cout << "On the way it is up to you " << username << " to answer questions that will pass us closer to the queen.\n\n";
    
    // continue journey

    char answer;
    
    cout << "Are you ready " << username << " ?\n";
    cout << "y for yes & n to exit like a scared baby...\n\n";
    cin >> answer;

     if (answer == 'y' || answer == 'Y')
     {
        cout << "Onward!\n\n";
     }   
        
     else if (answer == 'n' || answer == 'N')
     {   cout << "TRATOR!\n\n";
        return 0;
     }
     else
     {
        cout << "Anwer Me!\n\n";
     }   
    

    cout << "Great News!\n";
    cout << "Lets get started then.\n\n";


    // time to pick a pet
    string sidekick; 

    do {

        cout << "Lets get you a side kick.. you have a few options\n";
        cout << "You can pick a Dog, Cat or Bird.\n";
        cout <<"What will you chose?";
        cin >> sidekick;

        transform(sidekick.begin(), sidekick.end(), sidekick.begin(), ::tolower);

        switch (sidekick[0])
        {
            case 'd':
                cout << "You chose a dog!\n";
                break;
            case 'c':
                cout << "You chose a cat!\n";
                break;
            case 'b':
                cout << "You choose a bird!\n";
                break;
            default:
                cout << "Not an option - Select a dog, cat or bird... \n";
                break;
        }

    } while (sidekick[0] != 'd' && sidekick [0] != 'c' && sidekick[0] != 'b');

    string pet = sidekick;
    string petname;

    cout << "Wonderful pick " << pet << " a strong and loving animal!\n\n";
    cout << "What will we name them?\n";
    cin >> petname;
    cout << "WOW.." << petname << " very good name!\n\n";
     
     // adventure will begin now

     cout << "So " << username << " and " << petname << " are on their way\n";
     cout << "Ready for all the perals that lay ahead of them\n\n";




    
    return 0;
}