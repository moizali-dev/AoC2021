#include <stdio.h>

// https://adventofcode.com/2021/day/1

int part1(void) {

    FILE *file;
    int i = 0;
    int curr_int;
    int prev_int;
    int count = 0;

    file = fopen("day1input.txt", "r");
    
    fscanf (file, "%d", &i);

    while (!feof (file)) {  

        prev_int = i;
        fscanf (file, "%d", &i);  
        curr_int = i;

        if (curr_int > prev_int) {
            count += 1;
        }

    }

    printf("count: %d\n", count);

    fclose(file);

    return (0);

}

int part2(void) {

    FILE *file;
    int i = 0;
    int arr[4];
    int iter = 0;
    int curr_int;
    int prev_int;
    int a = 3;
    int b = 0;
    int count = 0;

    file = fopen("day1input.txt", "r");

    while (!feof (file)) {  

        arr[iter] = i;
        fscanf (file, "%d", &i);

        if (iter == 3) {

            arr[iter] = i;
            iter = 0;

        } else {

            arr[iter] = i; 
            iter += 1; 

        }

        if (arr[3] > 0) {

            curr_int = arr[a];
            prev_int = arr[b];

            // printf("%d %d", arr[a], arr[b]);

            if (arr[a] > arr[b]) {
                count += 1;
            }

            a += 1;
            b += 1;

            if (a > 3) {
                a = 0;
            }

            if (b > 3) {
                b = 0;
            }

        }

    }

    
    fclose(file);
    printf("count: %d\n", count);

    return 0;

}

int main(void) {

    part1();
    part2();
    
}
