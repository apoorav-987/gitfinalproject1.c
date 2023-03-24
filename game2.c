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
