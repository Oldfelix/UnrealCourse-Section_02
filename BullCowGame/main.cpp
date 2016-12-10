#include <iostream>
#include <string>


using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintGuess();

string Guess = "";

// Entry point to application
int main()
{

	PrintIntro();
	PlayGame();
	

	return 0;//exit the application
}

//introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows,a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

//loop for the number of turns asking for guesses
void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuess();
		cout << endl;
		PrintGuess();
	}
}

// get a guess from the player
string GetGuess()
{
	cout << "Please enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

// repeat the guess back to them
void PrintGuess()
{
	cout << "Your guess was: " << Guess << endl;
	return;
}