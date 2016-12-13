#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
void PlayGame();
std::string GetGuess();
void PrintGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // first instantiate of a new game

std::string Guess = "";

// Entry point to application
int main()
{
	bool bPlayAgain = false;

	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();

	} while (bPlayAgain);
	
	return 0;
}

//introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows,a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

//loop for the number of turns asking for guesses
void PlayGame()
{
	
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;
	
	for (int count = 1; count <= MaxTries; count++)
	{
		GetGuess();
		std::cout << std::endl;
		PrintGuess();
	}
}

// get a guess from the player
std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTry();
	
	std::cout << "Try " << CurrentTry << ". " << "Enter your guess: " << std::endl;
	std::getline(std::cin, Guess);
	
	return Guess;
}

// repeat the guess back to them
void PrintGuess()
{
	std::cout << "Your guess was: " << Guess << std::endl;
	return;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string response = "";
	std::getline(std::cin, response);

	return(response[0] == 'y' || response[0] == 'Y');

}


