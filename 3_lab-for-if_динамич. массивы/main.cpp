#include <iostream>

using namespace std;

void calculate_7()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов: ";

    if (!(cin >> n || n >= 0))
    {
        cout << "Ошибка: повторите ввод!" << endl;
        return;
    }

    double* arrey = new double[n];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        if (!(cin >> arrey[i]))
        {
            cout << "Ошибка: введено не число!" << endl;
            delete[] arrey;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arrey[i] < 0)
        {
            arrey[i] += 0.5;
        }
        else
        {
            arrey[i] = 0.1;
        }
    }

    cout << "Результат:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arrey[i] << " ; ";
    }
    cout << endl;

    delete[] arrey;
}

void calculate_9()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int negative = 0, numbers = 0;
    cout << "Введите количество элементов: ";
    cin >> n;

    if (!(cin >> n || n >= 0))
    {
        cout << "Ошибка: повторите ввод!" << endl;
        return;
    }

    double* arrey = new double[n];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Элемент " << i + 1 << ": ";
        if (!(cin >> arrey[i]))
        {
            cout << "Ошибка: введено не число!" << endl;
            delete[] arrey;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arrey[i] >= 1 && arrey[i] <= 2)
        {
            arrey[i] = 1;
            numbers++;
        }
        if (arrey[i] < 0)
        {
            negative++;
        }
    }

    cout << "Результат:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arrey[i] << " ; ";
    }
    cout << "\nОтрицательных: " << negative << endl;
    cout << "Количество в диапазоне [1,2]: " << numbers << endl;

    delete[] arrey;
}

int main()
{
    calculate_7();
    cout << "\n---------------------------\n";
    calculate_9();
    return 0;
}