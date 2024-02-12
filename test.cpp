#include <iostream>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

int main()
{
    // test project to see what I can come up with on my own... good luck me
 
    std::string username;
    

    cout <<"Hello user... \n\n";
    cout <<"Who is joining us today on our adventure...? \n";
    cout << "User Name: ";
    // cin >> username;
    std::getline(cin, username);
    cout << "Welcome " << username << " lets begin... \n\n";

    // opening over

    cout << "Today " << username << " we will travel far in order to save the queen from her evil sister.\n";
    cout << "On the way it is up to you " << username << " to answer questions that will pass us closer to the queen.\n\n";
    
    // continue journey

    // char answer;
    string answer;
    
    cout << "Are you ready " << username << " ?\n";
    cout << "y for yes & n to exit like a scared baby...\n\n";
    std::getline(cin, answer);
    // cin >> answer;

     if (answer[0] == 'y' || answer[0] == 'Y')
     {
        cout << "Onward!\n\n";
     }      
     else if (answer[0] == 'n' || answer[0] == 'N')
     {   cout << "TRATOR!\n\n";
        return 0;
     }
     else
     { 
        do{
          cout << "Anwer Me!\n\n";
          getline(cin, answer);
        //   cin >> answer;
          }
       while (!(answer[0] == 'y' || answer[0] == 'Y' || answer[0] == 'n' || answer[0] == 'N'));
     }

    cout << "Lets get started then.\n\n";


    // time to pick a pet
    string sidekick; 

    do {

        cout << "Lets get you a side kick.. you have a few options\n";
        cout << "You can pick a Dog, Cat or Bird.\n\n";
        cout <<"What will you chose?";
        getline(cin, sidekick);
        // cin >> sidekick;
        
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
                cout << "You chose a bird!\n";
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
    // cin >> petname;
    // cin.getline(petname, 100, "\n");
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, petname);
    cout << "WOW.." << petname << " very good name!\n\n";
     
     // adventure will begin now

     cout << "So " << username << " and " << petname << " are on their way\n";
     cout << "Ready for all the perals that lay ahead of them\n\n";
     cout << "Okay, " << username << " it is important that you know this... \n";
     cout << "Any follys and you and " << petname << " will be sent back to the start \n";
     
    //  char understand;
    string understand;
     cout << "Do you understand?";
    //  cin >> understand;
    getline(cin, understand);

     if (understand[0] == 'y' || understand[0] == 'Y')
     {
        cout << "Very well time for the first task!\n\n";
     }      
     else if (understand[0] == 'n' || understand[0] == 'N')
     {   cout << "YOU HAVE DIED!\n\n";
        return 0;
     }
     else
     { 
        do{
          cout << "Anwer Me!\n\n";
        //   cin >> understand;
        getline(cin, understand);
          }
       while (!(understand[0] == 'y' || understand[0] == 'Y' || understand[0] == 'n' || understand[0] == 'N'));
     }


// game of chance

    cout << "Right then, let us play a little game of chance.\n\n";  
    
    cout << "Your fist task is a guessing game. You have three atempts to guess the number from 1-5. \n";
    cout << "Get it wrong and its DEATH for you and " << petname << " !\n";

    
    random_device rd;
    mt19937 generator(rd());

    uniform_int_distribution<int> distribution(1, 5);

    int target_number = distribution(generator);
    const int max_guesses = 3;

    cout << "Welcome to your task! Guess the number between 1 and 5.\nGuess correct to stay alive\n";

    for(int attempt = 1; attempt <= max_guesses; ++attempt) 
    {
        int guess;
        cout << endl;
        cout << "Guess #" << attempt << ": \n";

        while (!(cin >> guess)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Please enter a number.\n";
        } 
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  

        if (guess == target_number) {
            cout << "Congratulations! You guessed the correct number.\n"; 
            break;
        } else {
            cout << "Incorrect guess. Try again.\n"; 
            if (attempt == max_guesses) {
                cout << "Falure... you and "<< petname << " have died.\n";
                return 0;
            }
        }
    }

   
    cout << "The correct number was: " << target_number << "\n\n";

    // riddle task

    string riddle;
   do{ 
        cout << "This task will require you to use your mind...\n";
        cout << "To move on " << username << " answer this riddle, fail and lose...\n\n";
        cout << "Your riddle is: What has keys but cannot open locks????? \n";

        fflush(stdin);
        getline(cin, riddle);
        transform(riddle.begin(), riddle.end(), riddle.begin(), ::tolower);

        if (riddle == "a piano" || riddle == "piano") 
        {
          cout << "You LIVE to see another day!\n\n";
          break;  
        }      
        else
        { cout << "You Have Failed!\nWould you like to try again? (y/n)\n";
            // char tryagain;
            string tryagain;
            cin >> tryagain;

         if(tryagain[0] != 'y' && tryagain[0] != 'Y') {
            cout << "Quitter... leave my sight... \n";
            return 0;
        }
         else {
            cout << "Lets give it another go!\n\n";
        }
       } 
     } while (true);

    cout << "Truly amaizng " << username << " keep up the great work!\n";

 
    return 0;
}
