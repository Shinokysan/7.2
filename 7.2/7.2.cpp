#include <iostream>
#include <clocale>
/*Дан массив A размера N (N — нечетное число).
Вывести его элементы с нечетными номерами в порядке убывания номеров:
AN , AN −2, AN −4, . . ., A1.*/
int foo(int* array, int n)
{
    // заполняем массив
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    // индекс начинается с нуля
    for (int i = n - 1; i >= 0; i -= 2)
        std::cout << array[i] << " ";
    return 0;
}

int main()
{
    size_t n;
    std::cin >> n;
    /// Указатель на динамический массив
    int* array;
    // динамическое выделение памяти динамического массива
    array = new int[n];
    foo(array, n);
}