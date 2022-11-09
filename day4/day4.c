#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://adventofcode.com/2021/day/4


int part1(void) {

    FILE *file;
    const int USER_TEXT_LIMIT = 1000;    // Limit input size
    char userText[USER_TEXT_LIMIT];
    int valuesRead;
    char binary[74];
    int callednumsArr[27];
    int i = 0;
    int arr_i = 0;

    file = fopen("day4inputsample.txt", "r");

    while (!feof (file)) {
        fgets(userText, USER_TEXT_LIMIT, file);
        valuesRead = sscanf(userText, "%74s", binary);
        

        if (valuesRead == 1 && i == 0) {

            // delimit from ","
            char * token = strtok(binary, ",");
            // loop through the string to extract all other tokens
            while( token != NULL ) {
                printf( "%s\n", token ); //printing each token
                callednumsArr[arr_i] = atoi(token);
                arr_i++;
                token = strtok(NULL, ",");
            }
            //print the values of an array
            for (int a = 0; a <= 27; a++){
                printf("%d ",callednumsArr[a]);
            }
            
        } else if (valuesRead == 1 && i != 0) {
            
        }

        i++;

        // printf("%d\n", valuesRead);
    }

    return 0;

}


int main(void) {

    part1();

}