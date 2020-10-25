#pragma once

class Sorting
{
public:
	/// <summary>
	/// Class constructor
	/// </summary>
	/// <param name="algorithmNumber">Algorithms number in the list</param>
	Sorting(int algorithmNumber);

	void initAlgorithm();

private:
	void bubbleSort();
};