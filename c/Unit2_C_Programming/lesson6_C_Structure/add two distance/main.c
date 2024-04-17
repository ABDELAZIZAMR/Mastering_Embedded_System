/*
 * main.c
 *
 *  Created on: Apr 17, 2024
 *      Author: Abdelaziz Amr
 */
#include <stdio.h>

struct SDistance {
    int feet;
    float inch;
};

struct SDistance addDistances(struct SDistance d1, struct SDistance d2) {
    struct SDistance result;
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    if (result.inch >= 12.0) {
        result.inch -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    struct SDistance distance1, distance2, sum;
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    printf("Enter information for 1st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &distance1.feet);
    printf("Enter inch: ");
    scanf("%f", &distance1.inch);
    printf("\nEnter information for 2st distance:\n");
    printf("Enter feet: ");
    scanf("%d", &distance2.feet);
    printf("Enter inch: ");
    scanf("%f", &distance2.inch);
    sum = addDistances(distance1, distance2);
    printf("\nSum of distances: %d feet %.1f inches\n", sum.feet, sum.inch);

    return 0;
}


