/*
##########################################################
Hello TechGig
#######################   Input    #######################

I am coming back to the race.

#######################   Output    ######################

Hello Techgig
I am coming back to the race.
##########################################################
*/
#include<stdio.h>
int main(int argc, char *a[])
{
	char* s;
	s = (char *) malloc(10000 * sizeof(char));
	gets(s);
	printf("Hello Techgig\n");
	puts(s);
	free(s);
	return 0;
}
