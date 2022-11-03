#include <stdio.h>
#include <string.h>
#include <math.h>

// https://adventofcode.com/2021/day/3

int convertBinToDec(long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int converArrToInt(char * arr) {
    int i, k = 0;

    for (i = 0; i < 5; i++)
        printf("%s\n", arr);
        k = 10 * k + arr[i];

    return k;
}

int part1(void) {

    FILE *file;
    const int USER_TEXT_LIMIT = 1000;    // Limit input size
    char userText[USER_TEXT_LIMIT];
    int valuesRead;
    char binary[5];
    int i;
    char charidx;
    char arrcnt[5];
    int file_len = 0;

    file = fopen("day3inputsample.txt", "r");

    while (!feof (file)) {
        fgets(userText, USER_TEXT_LIMIT, file);
        valuesRead = sscanf(userText, "%49s", binary);
        
        for (int i = 0; i < sizeof(arrcnt); i++) {

            charidx = binary[i];
            if (strcmp(&charidx,"0") == 0) {
                arrcnt[i] += 1;
            }

        }

        file_len += 1;

    }

    for (int i = 0; i < sizeof(arrcnt); i++) {     
        if (arrcnt[i] > file_len / 2) {
            arrcnt[i] = 0;
        } else {
            arrcnt[i] = 1;
        }
    }    

    printf("%d\n", converArrToInt(arrcnt));

    return 0;

}


int main(void) {

    part1();

}
