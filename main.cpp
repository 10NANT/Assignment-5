#include <iostream>
#include "sorting.h"

// Bubble Sort implementation
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Helper function to print the array
void printScores(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Student exam scores
    int scores[] = { 78, 92, 65, 88, 70 };
    int size = 5;

    std::cout << "Unsorted exam scores:" << std::endl;
    printScores(scores, size);

    // Sort the scores
    bubbleSort(scores, size);

    std::cout << "Sorted exam scores (lowest to highest):" << std::endl;
    printScores(scores, size);

    return 0;
}
