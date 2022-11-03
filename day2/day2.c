#include <stdio.h>
#include <string.h>

// https://adventofcode.com/2021/day/1

int part1(void) {

    FILE *file;
    const int USER_TEXT_LIMIT = 1000;    // Limit input size
    char userText[USER_TEXT_LIMIT];
    int valuesRead;
    char direction[10];
    int i;
    int forwardSum = 0;
    int depthSum = 0;

    file = fopen("day2input.txt", "r");
    
    while (!feof (file)) {
        fgets(userText, USER_TEXT_LIMIT, file);
        valuesRead = sscanf(userText, "%49s %d", direction, &i);
        // printf("%s %d\n", direction, i);

        if (strcmp(direction,"forward") == 0) {
            forwardSum += i;
        } else if (strcmp(direction, "down") == 0) {
            depthSum += i;
        } else if (strcmp(direction, "up") == 0) {
            depthSum -= i;
        }

    }

    return depthSum * forwardSum;
}

int part2(void) {

    FILE *file;
    const int USER_TEXT_LIMIT = 1000;    // Limit input size
    char userText[USER_TEXT_LIMIT];
    int valuesRead;
    char direction[10];
    int i;
    int forwardSum = 0;
    int depthSum = 0;
    int aimSum = 0;

    file = fopen("day2input.txt", "r");
    
    while (!feof (file)) {
        fgets(userText, USER_TEXT_LIMIT, file);
        valuesRead = sscanf(userText, "%49s %d", direction, &i);
        // printf("%s %d\n", direction, i);

        if (strcmp(direction,"forward") == 0) {
            forwardSum += i;
            depthSum += aimSum * i;
        } else if (strcmp(direction, "down") == 0) {
            aimSum += i;
        } else if (strcmp(direction, "up") == 0) {
            aimSum -= i;
        }

    }

    return depthSum * forwardSum;
}

int main(void) {

    printf("%d\n", part1());
    printf("%d\n", part2());

}