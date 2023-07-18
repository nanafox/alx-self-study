#include <stdio.h>
/*using the # operator*/
#define SAY_SOMETHING(STR) printf("You said -> "#STR" <- with the # operator\n")

/**
 * main - using preprocessor identifiers
 *
 * Return: 0
 */
int main(void)
{
	printf("This is line #%d in the '%s' source file.\n", __LINE__, __FILE__);
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	/*ANSI C Standard compliance checks*/
	(__STDC__ == 1) ? puts("Operating in compliance with ANSI C Standard") :
		puts("Not using ANSI C Standard");
	
	SAY_SOMETHING(I am saying something!);
	
	#ifdef DEBUG /*not defined... -D option is used to define from command line*/
		puts("In debugging phase...");
	#else
		puts("In release mode...");
	#endif

	return (0);
}
