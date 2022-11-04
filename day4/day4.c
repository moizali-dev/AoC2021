#include <stdio.h>

// https://adventofcode.com/2021/day/4


int part1(void) {

    FILE *file;
    const int USER_TEXT_LIMIT = 1000;    // Limit input size
    char userText[USER_TEXT_LIMIT];
    int valuesRead;
    char binary[74];
    int callednumsArr[27];
    int i = 0;

    file = fopen("day4inputsample.txt", "r");

    while (!feof (file)) {
        fgets(userText, USER_TEXT_LIMIT, file);
        valuesRead = sscanf(userText, "%74s", binary);

        if (valuesRead == 1 && i == 0) {
            
            // save the values in an array
            
        } elif (valuesRead == 1) {


        }
        printf("%d\n", valuesRead);
    }

    return 0;

}


int main(void) {

    part1();

}