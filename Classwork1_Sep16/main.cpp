//
//  main.cpp
//  Classwork1_Sep16
//
//  Created by Sonia Lopchan on 9/16/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    
    int secretNumber = rand()%100+1;
    int randomNumber;
    
    cout << "Can you guess random numbers between 1 and 100?"<< endl;
    
    while (randomNumber != secretNumber){
        cout << "Enter your random number: ";
        cin>>randomNumber;
        
        if (randomNumber<secretNumber){
            cout << "Your guess is too low." << endl;
        }
        else if (randomNumber>secretNumber){
            cout << "Your guess is too high." << endl;
        }
    }
    cout << "You finally guessed the right number." << endl;
    
    return 0;
}
