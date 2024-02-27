#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

bool hasTwoSum(int a[], int n, int v);

int main(void) {
    int a[SIZE] = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30};

    int target = 50;
    if (hasTwoSum(a, SIZE, target)) {
        printf("Array has a two sum that equals %d\n", target);
    } else {
        printf("Array does not have a two sum that equals %d\n", target);
    }
}

bool hasTwoSum (int a[], int n, int v) {

    return false;
}