//Бинарный поиск. Cуть в том, чтобы разделить массив на два.
//Из двух выбрать тот в котором есть наше число, разделить
//этот массив еще на 2 и т.д.
//
//Скоротсь:	наихудший случай O(log n), наилучший O(n)
//
//Память:	O(log n)
//
//Плюсы: 	1) Простая разработка и реализация алгоритма
//
//Минусы:	1) Массив должен быть отсортирован
//		2) Вытикает из 1-го, не со всеми данными можно работать


#include <iostream>

using namespace std;

int left_bound(int A[], int N, int x)
{
    int left = -1;  // A[left] < x
    int right = N;  // A[right] >= x
    while (right - left > 1) {
        int middle = (left + right) / 2;
        if (A[middle] < x)
            left = middle;
        else
            right = middle;
    }    
    return left;
}

int find(int A[], int N, int x)
{
    int left = left_bound(A, N, x);
    int potential_first_index_of_x_in_A = left + 1;
    if (potential_first_index_of_x_in_A < N and 
        A[potential_first_index_of_x_in_A] == x)
        return potential_first_index_of_x_in_A;
    else
        return -1; // x not found

}

int main()
{
    int N = 10;
    int A[] = {1, 3, 3, 7, 7, 7, 7, 9, 10, 10};
    int x;

    for(int i = 0; i < N; i++)
        cout << A[i] << '\t';
    cout << '\n';
    cin >> x;
    cout << "left boundary of x is: " << left_bound(A, N, x) << '\n';

    return 0;
}

