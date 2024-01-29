#include <stdio.h>

#define MAX_NUM 1000  // Adjust this value based on your needs

// [1,2,3,3,4,5,6,6]
void findRepeatingNumbers(int arr[], int n) {
    int frequency[MAX_NUM] = {0};
    for(int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for(int i = 0; i < MAX_NUM; i++) {
        if(frequency[i] > 1) {
            printf("Number %d has frequency %d\n", i, frequency[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findRepeatingNumbers(arr, n);
    return 0;
}