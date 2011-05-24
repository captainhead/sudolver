#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	// Declare the array to contain the sudoku array
	int sudokuBoard[81];
	
	// Fill in the board
	for(int i=0; i<81; i++)
	{
		sudokuBoard[i] = ((i%9) + i)%9;
	}
	
	cout << "Hello" << endl;

	return 0;
}
