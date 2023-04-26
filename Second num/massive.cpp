#include <iostream>

template<typename T> void sortarr(T* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int size = 5;
    int* arr = new int[size] {4, 1, 3, 2, 5};

    std::cout << "Unsorted array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortarr(arr, size);

    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}