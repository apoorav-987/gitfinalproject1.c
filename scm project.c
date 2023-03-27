// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement the game
int game(char you, char computer)
{
	// If both the user and computer
	// has choose the same thing
	if (you == computer)
		return -1;
		// If user's choice is stone and
	// computer's choice is paper
	if (you == 's' && computer == 'p')
		return 0;

			// If user's choice is paper and
			// computer's choice is stone
			else if (you == 'p' && computer == 's') return 1;

	// If user's choice is stone and
	// computer's choice is scissor
<<<<<<< HEAD
	int main()
{
	// Stores the random number
	int n;

	char you, computer, result;

	// Chooses the random number
	// every time
	srand(time(NULL));
=======
	if (you == 's' && computer == 'z')
		return 1;

	// If user's choice is scissor and
	// computer's choice is stone
	else if (you == 'z' && computer == 's')
		return 0;

	// If user's choice is paper and
	// computer's choice is scissor
	if (you == 'p' && computer == 'z')
		return 0;

	// If user's choice is scissor and
	// computer's choice is paper
	else if (you == 'z' && computer == 'p')
		return 1;
}

// Driver Code
>>>>>>> ce2a3fe0aedc28f2fdc192f2716aacf4769e2d10
