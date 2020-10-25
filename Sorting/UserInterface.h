#pragma once
#include <iostream>

/// <summary>
/// Allows the user to interact with the program
/// </summary>
class UserInterface
{
public:
	/// <summary>
	/// Class constructor
	/// </summary>
	UserInterface();

	/// <summary>
	/// Starts user interaction
	/// </summary>
	void start();

private:
	/// <summary>
	/// Show available algorithms to user
	/// </summary>
	void showAlgorithms();

	/// <summary>
	/// Start all available algorithms
	/// </summary>
	void startAllAlgortims();

	/// <summary>
	/// Allows the user to select an algorithm
	/// </summary>
	int chooseAlgorithm();

	/// <summary>
	/// Check is command number valid
	/// </summary>
	/// <param name="command">Number of command</param>
	/// <returns>Boolean answer is command valid</returns>
	bool isCommandValid(int command);

	/// <summary>
	/// Number of command
	/// </summary>
	int command_;
};

