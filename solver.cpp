#include <iostream>

using namespace std;


///////////////////////////////////////////////////////////////////////////////////////////////////
// Print out sudoku board in ascii characters.
///////////////////////////////////////////////////////////////////////////////////////////////////
void printBoard(int sudokuBoard[])
{
	cout << endl;
	
	for(int row=0; row<9; row++)
	{
		// Draw a separator line every 3 rows
		if(row%3 == 0)
		{
			for(int div=0; div<25; div++)
				cout << "=";
			cout << endl;
		}
		
		// Write out the row
		for(int col=0; col<9; col++)
		{
			if(col%3 == 0)
				cout << "| ";
				
			if(sudokuBoard[row*9 + col] > 0)
				cout << sudokuBoard[row*9 + col] << " ";
			else
				cout << "  ";
		}
		cout << "|" << endl;
	}
	
	// Draw a separator line beneath
	for(int div=0; div<25; div++)
		cout << "=";
		
	cout << endl << endl;
}



int main(int argc, char** argv)
{
	// Declare the array to contain the sudoku array
	int sudokuBoard[81];
	// Initialize the board positions to 0
	for(int i=0; i<81; i++)
	{
		sudokuBoard[i] = 0;
	}
	
	// Fill in the board
	int index = 0;
	// row 1
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 6;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 8;
	sudokuBoard[index++] = 2;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 9;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	// row 2
	sudokuBoard[index++] = 4;
	sudokuBoard[index++] = 1;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 6;
	sudokuBoard[index++] = 2;
	sudokuBoard[index++] = 0;
	// row 3
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 9;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 6;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 4;
	sudokuBoard[index++] = 7;
	sudokuBoard[index++] = 0;
	// row 4
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 5;
	sudokuBoard[index++] = 3;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 8;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 2;
	// row 5
	sudokuBoard[index++] = 1;
	sudokuBoard[index++] = 2;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 6;
	sudokuBoard[index++] = 7;
	// row 6
	sudokuBoard[index++] = 8;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 6;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 3;
	sudokuBoard[index++] = 1;
	sudokuBoard[index++] = 0;
	// row 7
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 3;
	sudokuBoard[index++] = 4;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 5;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 8;
	sudokuBoard[index++] = 0;
	// row 8
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 7;
	sudokuBoard[index++] = 2;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 3;
	sudokuBoard[index++] = 4;
	// row 9
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 1;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 3;
	sudokuBoard[index++] = 7;
	sudokuBoard[index++] = 0;
	sudokuBoard[index++] = 9;
	sudokuBoard[index++] = 0;
	
	
	
	
	
	
	
	printBoard(sudokuBoard);

	return 0;
}
