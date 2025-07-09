#include "function.h"
#include <cstdlib> 
#include <ctime>   


void FillInt(int massive[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        massive[i] = rand() % 100; 
    }
}

void ShowInt(int massive[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << massive[i] << " ";
    }
    std::cout << std::endl;
}

int MinInt(int massive[], int size) {
    int min = massive[0];
    for (int i = 1; i < size; i++) {
        if (massive[i] < min) {
            min = massive[i];
        }
    }
    return min;
}

int MaxInt(int massive[], int size) {
    int max = massive[0];
    for (int i = 1; i < size; i++) {
        if (massive[i] > max) {
            max = massive[i];
        }
    }
    return max;
}

void SortInt(int massive[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (massive[i] > massive[j]) {
                int tmp = massive[i];
                massive[i] = massive[j];
                massive[j] = tmp;
            }
        }
    }
}

void EditInt(int massive[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        massive[index] = newValue;
    }
}

void FillDouble(double massive[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        massive[i] = (rand() % 10000) / 100.0; 
    }
}

void ShowDouble(double massive[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << massive[i] << " ";
    }
    std::cout << std::endl;
}

double MinDouble(double massive[], int size) {
    double min = massive[0];
    for (int i = 1; i < size; i++) {
        if (massive[i] < min) {
            min = massive[i];
        }
    }
    return min;
}

double MaxDouble(double massive[], int size) {
    double max = massive[0];
    for (int i = 1; i < size; i++) {
        if (massive[i] > max) {
            max = massive[i];
        }
    }
    return max;
}

void SortDouble(double massive[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (massive[i] > massive[j]) {
                double tmp = massive[i];
                massive[i] = massive[j];
                massive[j] = tmp;
            }
        }
    }
}

void EditDouble(double massive[], int size, int index, double newValue) {
    if (index >= 0 && index < size) {
        massive[index] = newValue;
    }
}

void FillChar(char massive[], int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; i++) {
        massive[i] = 'A' + rand() % 26;
    }
}

void ShowChar(char massive[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << massive[i] << " ";
    }
    std::cout << std::endl;
}

char MinChar(char massive[], int size) {
    char min = massive[0];
    for (int i = 1; i < size; i++) {
        if (massive[i] < min) {
            min = massive[i];
        }
    }
    return min;
}

char MaxChar(char massive[], int size) {
    char max = massive[0];
    for (int i = 1; i < size; i++) {
        if (massive[i] > max) {
            max = massive[i];
        }
    }
    return max;
}

void SortChar(char massive[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (massive[i] > massive[j]) {
                char tmp = massive[i];
                massive[i] = massive[j];
                massive[j] = tmp;
            }
        }
    }
}

void EditChar(char massive[], int size, int index, char newValue) {
    if (index >= 0 && index < size) {
        massive[index] = newValue;
    }
}
