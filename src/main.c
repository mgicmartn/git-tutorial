/*
 ============================================================================
 Name        : main.c
 Author      : Martin Zimmermann
 Version     :
 Copyright   : Your copyright notice
 Description : Coding Challenge 2 ESPL git-tutorial
 ============================================================================
 */

#include <stdio.h>
#include "espl_lib.h"

int main()
{
		char *words = NULL;
		unsigned int num = 0;
		int quit = 0;
		char response[1] = "y";

		do {
				printf("Please enter a number.\n");
				fflush(stdout);
				scanf(" %d", &num);
				while ((getchar()) != '\n');

				words = num_to_words(num);

				if (words == NULL) {								//in case the input is not a number
						printf("Please enter only a number.");
				} else {
						printf("%s",words);
						fflush(stdout);
						words = NULL;
						num = 0;
				}

				printf("\nDo you want to enter another number? y/n\n");
				fflush(stdout);
				scanf(" %c", response);
				while ((getchar()) != '\n');

				if (*response == 'n') {
						printf("Quit.");
						quit = 1;
				} else if (*response == 'y') {
						printf("Have fun!\n");
				} else {
						printf("Wrong input. Quit.");
						quit = 1;
				}

		} while (quit == 0);

		return 0;
}
