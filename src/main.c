/*
 ============================================================================
 Name        : ESPL_CodeChallenge2
 Author      : Martin Zimmermann
 Version     :
 Copyright   : Your copyright notice
 Description : User Interface for num_to_words convertion.
 ============================================================================
 */

#include <stdio.h>

int main(){

	char *words;

	int num;
	int quit = 0;
	char response[1] = "y";


	do{
		printf("Please enter a number.\n");
		fflush(stdout);
		scanf("%d", &num);
//		printf("%i\n",num);

		words = num_to_words(num);

		printf("%s",words);

		printf("\nDo you want to enter another number? y/n\n");
		fflush(stdout);
		scanf(" %s", response);
//		printf("%s\n", response);

		if(*response == 'n'){
			printf("Quit.");
			quit=1;
		}
		else if(*response == 'y') printf("Have fun!\n");
		else {
			printf("\nWrong input. Quit.");
			quit=1;
		}

	}while(quit==0);

	return 0;
}
