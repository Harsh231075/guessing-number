#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand((unsigned int) time(NULL));

    int number = (rand() % 100) + 1;


    int guess = 0,count=0;

    cout << "\t...WELCOME in gussing game... \n\n" << endl;


    do
    {

        cout << "\nEnter Guess (1-100): ";
        cin >> guess;
        count++;


        if(guess>100)
            cout << "\n...Enter plz no. between 1 to 100..." << endl;
        else if (guess > number)
            cout << "Guess lower!" << endl;
        else if (guess < number)
            cout << "Guess higher!" << endl;
        else
            cout << "You won!" << endl;


    } while (guess != number);

    cout<<"\n\nyou take "<<count<<"  chance for gussing a number";
    cout <<endl;

    return 0;
}