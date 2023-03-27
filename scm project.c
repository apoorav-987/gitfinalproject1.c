int main()
{
	// Stores the random number
	int n;

	char you, computer, result;

	// Chooses the random number
	// every time
	srand(time(NULL));

	// Make the random number less
	// than 100, divided it by 100
	n = rand() % 100;

	// Using simple probability 100 is
	// roughly divided among stone,
	// paper, and scissor
	if (n < 33)
