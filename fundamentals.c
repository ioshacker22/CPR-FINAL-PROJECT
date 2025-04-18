#include "fundamentals.h"
#include "common.h"

void fundamentals1()
{
	// Hold the format for the input
	char fmt[12];

	// Stores the string from the user and the length of the string
	char str[STRING_MAX + 1] = {0};
	int length;

	// Prompt the user for a string
	printf("Enter a string no longer than %d chars long: ", STRING_MAX);
	sprintf(fmt, "%%%d[^\n]", STRING_MAX);
	scanf(fmt, str);

	// Calculate string length
	length = strlen(str);

	// Print new line
	printf("\n");

	// If the length is 0, print a message, otherwise perform indexing operations
	if (length == 0)
	{
		printf("The string is too short. Try again!");
	}
	else
	{
		printf("The string is %s\n", str);
		printf("The first character is %c\n", str[0]);
		printf("The last character is %c\n", str[length - 1]);
	}
}

void fundamentals2()
{
	// Two buffers for user input
	char buffer1[STRING_MAX + 1] = { 0};
	char buffer2[STRING_MAX + 1] = { 0 };

	// Prompt the user for the first buffer
	printf("Enter a string no longer than %d chars long: ", STRING_MAX);
	scanf("%50[^\n]", buffer1);
	clearBuffer();

	// Prompt the usre for the second buffer
	printf("Enter a string no longer than %d chars long: ", STRING_MAX);
	scanf("%50[^\n]", buffer2);
	clearBuffer();

	// Check if the string is empty
	if(buffer1[0] == '\0' || buffer2[0] == '\0')
	{
		// Print a message if the string is empty
		printf("One of the strings is empty. Try again!\n");
	}
	else
	{
		// Copy the second buffer to the first buffer
		strcpy(buffer1, buffer2);

		// Print the first buffer
		printf("The result is %s\nLength: %d\n", buffer1, strlen(buffer1));
	}
}

void fundamentals3(void)
{
	// Hold the two buffers, one for user input
	char buffer1[STRING_MAX + 1] = {0};
	char buffer2[STRING_MAX + 1] = {0};

	// Prompt and get user input
	printf("Enter a string no longer than %d chars long: ", STRING_MAX);
	scanf("%50[^\n]", buffer1);
	clearBuffer();

	if(buffer1[0] == '\0')
	{
		// Print a message if the string is empty
		printf("The string is empty. Try again!\n");
	}
	else
	{
		// Copy the first buffer to the second buffer
		strcpy(buffer2, buffer1);

		// Display the buffer
		printf("You entered: %s\n", buffer1);
		printf("Buffer 2 is a copycat: %s\n", buffer2);
	}
}