#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

bool hasTwoSum(int a[], int n, int v);

int main(void) {
    int a[SIZE] = {21, 19, 47, -18, -42, -4, 40, 35, 31, -30};

    // The sorted array should be
    //            {-42, -30, -18, -4, 19, 21, 31, 35, 40, 47}

    int target = 1;
    if (hasTwoSum(a, SIZE, target)) {
        printf("Array has a two sum that equals %d\n", target);
    } else {
        printf("Array does not have a two sum that equals %d\n", target);
    }
}

bool hasTwoSum (int a[], int n, int v) {

    // BRUTE FORCE SOLUTION
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == v) {
                return true;
            }
        }
    }

    // Time complexity: O(n^2)
    // The easy way to tell is by noticing that we
    // have two nested for loops which go until n

    // If we have an array with n items,
    // the number of pairs we will look at is:
    // 1 + 2 + ... + (n - 1)
    // = 1/2 * n * (n - 1)
    // = 1/2 * n^2 - 1/2 * n
    // -> O(n^2)

    // OPTIMISED SOLUTION:
    // O(n log n)
    // first we sort the array using merge sort

    // O(n)
    // then have two 'pointers' starting at the start and the end
    // move them towards the middle of the array until
    // you find the two sum

    /*
    mergeSort(a, 0, SIZE - 1);
    int l = 0;
    int r = SIZE - 1;
    while (l < r) {
        if (a[l] + a[r] < v) {
            l++;
        } else if (a[l] + a[r] > v) {
            r--;
        } else {
            return true;
        }
    }
    return false;
    */

    // CHALLENGE:
    // There is a way to find the two sum in O(n) time.
    // Try it for a challenge!
    return false;
}