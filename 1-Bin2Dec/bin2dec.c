#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// https://github.com/florinpop17/app-ideas/blob/master/Projects/1-Beginner/Bin2Dec-App.md
int main() {
    char userInput[8];
    
    printf("Please, input up to 8 values only using 0s and 1s I will convert binary to decimal: \n");

    scanf("%8s", userInput);

    int length = strlen(userInput);

    for (char i = 0; i < length; i++) {
        if (userInput[i] != '0' && userInput[i] != '1') {
            printf("Sorry! You have to provide only 0s or 1s!\n");
            exit(1);
        }
    }

    uint result = 0;
    int base = 2;


    for (char i = 0; i < length; i++) {
        if (userInput[i] == '1') {
            result += pow(base, length - i - 1);     
        }
    }

    printf("Your binary input - %s is in decimal equivalent - %i\n", userInput, result);
    
    return 0;
}
