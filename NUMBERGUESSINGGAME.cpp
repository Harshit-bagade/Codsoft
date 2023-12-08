    
/*NUMBER GUESSING GAME*/
#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    //Generate a random number between 1 to 100
    int randomnumber = rand()% 100+1;
    int user_guess;
    int attempts=0;
    while (true)
    {
        cout<<"guess the number between 1 to 100:";
        cin>>user_guess;
        // incremnt the number of attempts
         attempts++;

        if (user_guess == randomnumber) {
            cout << "WINNER:) WINNER;) WIINER:) :) :) :) " << randomnumber << " in " << attempts << " attempts." << endl;
            break;
        } else if (user_guess < randomnumber) {
            cout << "Too low! Try a higher number." << endl;
        } else {
            cout << "Too high! Try a lower number." << endl;
        }
    }
    
    
     return 0;
}