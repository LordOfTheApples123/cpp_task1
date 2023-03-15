#include <iostream>


float findMax(int height, int width, float arr[][5]) {
    float max = arr[0][1];
    for (int i = 0; i < height; i++) {
        for (int j = i + 1;j < width; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

float findMin(int height, int width, float arr[][5]) {
    float min = arr[0][1];
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}

void printMatrix(int height, int width, float arr[][5]) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}


int main() {
    float test1[][5] = {
            {-1, 2, 3, 4, 4},
            {0, 1, 3, 4, 4},
            {1, 2, 6, 4, 4},
            {1, 2, 3, 6, 5},
            {1, 2, 3, 4, 6}
    };
    printMatrix(sizeof(test1) / sizeof(*test1),
                sizeof(*test1) / sizeof(**test1),
                test1);
    std::cout << "max: " << std::endl;

    printf("%f", findMax(5, 5, test1));
    std::cout << std::endl;
    std::cout << "min: " << std::endl;
    printf("%f", findMin(5, 5, test1));
    return 0;
}

