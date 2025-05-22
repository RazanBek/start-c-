#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
// Функция для вычисления количества возможных чисел
int numb(int a, int b)
{
    return pow(b, a);
}
int main() {
    setlocale(LC_ALL, "Russian");
    // Количество возможных чисел
    int three = numb(3, 5);  // Трехзначные {1, 2, 3, 4, 5}
    int two = numb(2, 4);    // Двузначные {2, 4, 6, 8}
    int four = numb(4, 4);   // Четырехзначные {3, 7, 8, 9}

    // Вывод результатов
    cout<<"Трехзначных чисел: "<<three<< endl;
    cout<<"Двузначных чисел: "<<two<<endl;
    cout<<"Четырехзначных чисел: "<<four<<endl;

    int maxNum = max(max(three,two),four);
    if (maxNum == three)
        cout<<"Больше всего трехзначных чисел"<<endl;
    else if (maxNum==two)
        cout<<"Больше всего двузначных чисел"<<endl;
    else if (maxNum==four)
        cout<<"Больше всего четырехзначных чисел"<<endl;
    return 0;
}
