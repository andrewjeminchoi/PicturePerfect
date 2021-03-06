// Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	int num;          // number that user has to guess
	int guess = 0;    // input from user
	int count = 1;    // counts how many tries it takes the user to guess the correct number
	int min, max = 0; // sets the range that the number can exist within
	

	cout << "Enter the range to guess from: " << endl;
	cin >> min >> max;
	
	srand (time(0));
	
	num = rand() % (max - min) + min;
	
	cout << "Enter Guess: ";
	cin >> guess;
	
	while (guess != num)
	{
		if (guess > num && guess <= max)
		{
			cout << "Your guess is greater than the number." << endl;
			count++;
		}
		
		else if (guess < num && guess >= min)
		{
			cout << "Your guess is lower than the number." << endl;
			count++;
		}
		
		else
		{
			cout << "Invalid guess!" << endl;  // doesn't count as a guess
						           // user can continue guessing
		}

		cout << "Enter Guess: ";
		cin >> guess;
	}

	cout << "You guessed the number! It took you " << count << " tries!" << endl;

	return 0;
}


