#include "manipulating.h"
#include "common.h"

void manipulating1(void)
{
	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");

	// Store the input from the user
	char input[STRING_MAX + 1] = {0};
	char fmt[12];

	// Prompt the user for string
	printf("Please enter a string no longer than %d chars: ", STRING_MAX - 3);
	sprintf(fmt, "%%%d[^\n]", STRING_MAX - 4);
	scanf(fmt, input);

	// If the user didn't enter anything, display a message, otherwise concatenate the string
	if (strlen(input) == 0)
	{
		printf("You didn't enter anything.\n");
	}
	else
	{
		// Concatenate 123 to the end of the string
		strcat(input, "123");
		printf("The result is %s.\n", input);
	}

	printf("*** End of Concatenating Strings Demo ***\n\n");
}

void manipulating2(void)
{
	printf("*** Start of String Comparing Demo ***\n");

	char buf1[STRING_MAX + 1] = {0};
	char buf2[STRING_MAX + 1] = {0};

	printf("Please enter a string no longer than %d chars: ", STRING_MAX);
	scanf("%50[^\n]", buf1);
	clearBuffer();

	printf("Please enter another string no longer than %d chars: ", STRING_MAX);
	scanf("%50[^\n]", buf2);
	clearBuffer();

	int result = strcmp(buf1, buf2);

	if(result == 0)
	{
		printf("The strings are equal.\n");
	}
	else if(result < 0)
	{
		printf("The first string is less than the second string.\n");
	}
	else
	{
		printf("The first string is greater than the second string.\n");
	}

	printf("*** End of String Comparing Demo ***\n\n");
}

void manipulating3(void)
{
	char buffer[STRING_MAX + 1] = {0};
	char substringBuffer[STRING_MAX + 1] = {0};
	char* subStr = NULL;

	printf("Enter a string no longer than %d chars: ", STRING_MAX);
	scanf("%50[^\n]", buffer);
	clearBuffer();

	printf("Enter a substring to search for: ");
	scanf("%50[^\n]", substringBuffer);
	clearBuffer();

	if(buffer[0] == '\0' || substringBuffer[0] == '\0')
	{
		printf("One of the strings is empty.\n");
	}
	else
	{
		subStr = strstr(buffer, substringBuffer);

		if(!subStr)
		{
			printf("No substring was found.\n");
		}
		else
		{
			printf("The substring was found at index %ld.\n", subStr - buffer);
			printf("The substring is: %s\n", subStr);
		}
	}
}