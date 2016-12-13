#pragma once
#include <iostream>
#include <string>



class FBullCowGame {

public:
	void Reset(int WordLength); // TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); // TODO make a more rich return value.



// ^^Please focus on the interface above ^^
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;

};
