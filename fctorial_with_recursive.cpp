//Рекурсивыный факториал. Методом рекурсии высчитывается факториал.
//Все просто.
//
//Скорость:	O(n * log(n))
//
//Плюсы:	их нет. Считать факториал рекурсией не лучшее решение
//
//Минису:	очень медленный. Даже всемогущий С++ не исправит ситуацию
//

#include <iostream>

int64_t factorial(int16_t n)
{
    std::cout << "factorial(" << n << ") is called. \n";
    int64_t result;
    if (n == 0) {  // base case:
        result = 1;
    } else {       // recurrent case: 
        result = factorial(n - 1)*n;
    }
    std::cout << "factorial(" << n << ") is exitting.\n";
    return result;
}


int main()
{
    int16_t x;
    std::cin >> x;
    std::cout << factorial(x) << '\n';

    return 0;
}
