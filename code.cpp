#include <iostream>
using namespace std;

int main() {
    // Оголошення масиву символів
    char arr[] = {'h', 'e', 'l', 'l', 'o', 'a', 'b', 'c'};
    int size = sizeof(arr) / sizeof(arr[0]); // Розмір масиву
    
    // Вказівник на початок масиву
    char* ptr = arr;
    
    // Змінна для перевірки наявності букви 'a'
    bool containsA = false;

    // Перевірка масиву
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) == 'a') {
            containsA = true;
            break; // Достатньо знайти одну букву 'a'
        }
    }

    // Виведення результату
    if (containsA) {
        cout << "Масив містить букву 'a'." << endl;
    } else {
        cout << "Масив не містить букви 'a'." << endl;
    }

    return 0;
}
