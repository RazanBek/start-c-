#include <iostream>
#include <Windows.h>
using namespace std;

// Функция для возведения в квадрат частного двух вещественных чисел.
double func(double a, double b)
{
    setlocale(LC_ALL, "Russian");
    if (b == 0)
        cout<<"деленить на ноль нельзя!"<<endl;
    double chastnoe = a / b;
    return chastnoe * chastnoe;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;

    cout<<"Введите два вещественных числа: ";
    cin>>num1>>num2;

    double result=func(num1, num2);
    cout<<"Квадрат частного: "<<result<<endl;
    return 0;
}