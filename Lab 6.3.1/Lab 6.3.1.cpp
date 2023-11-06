#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int findMinOdd(const std::vector<int>& arr) {
    int minOdd = INT_MAX;
    for (int num : arr) {
        if (num % 2 != 0 && num < minOdd) {
            minOdd = num;
        }
    }
    return minOdd;
}

template <typename T>
T findMinOddGeneric(const std::vector<T>& arr) {
    T minOdd = std::numeric_limits<T>::max();
    for (T num : arr) {
        if (num % 2 != 0 && num < minOdd) {
            minOdd = num;
        }
    }
    return minOdd;
}

int main() {
    std::srand(static_cast<unsigned>(std::time(0))); 

    const int size = 10; 
    std::vector<int> numbers = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < size; ++i) {
        numbers[i] = (std::rand() % 101);
    } 
    std::cout << "Generated array: [ ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "]" << std::endl;

    int minOdd = findMinOdd(numbers);
    std::cout << "Using the regular function: Smallest odd element = " << minOdd << std::endl;

    int minOddGeneric = findMinOddGeneric(numbers);
    std::cout << "Using the function template: Smallest odd element = " << minOddGeneric << std::endl;

    return 0;
}
