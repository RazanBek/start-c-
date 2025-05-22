#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    //setlocale(LC_ALL,"Russian");
    SetConsoleOutputCP(65001);
    double sum=0, multiplication=1, i=1;
    do {
        sum=sum+i;
        multiplication=multiplication*i;
        i++;
    } while(i<=10);

    cout<<"Результат (do...while):"<<endl;
    cout<<"Сумма: "<<sum<<endl;
    cout<<"Произведение: "<<multiplication<<endl;

    sum=0;
    multiplication=1;

    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        multiplication=multiplication*i;
    }

    cout<<"\nРезультат (for):"<<endl;
    cout<<"Сумма: "<<sum<<endl;
    cout<<"Произведение: "<<multiplication<<endl;

    sum=0;
    multiplication=1;
    i=1;
    while(i<=10)
    {
        multiplication=multiplication*i;
        sum=sum+i;
        i++;
    }
    cout<<"\nРезультат (while):"<<endl;
    cout<<"Сумма: "<<sum<<endl;
    cout<<"Произведение: "<<multiplication<<endl;
    //Задание 2
    sum=0.0;
    for(i=1;i<=100;i++)
        {
            sum=sum+1.0/pow(i,2);
        }
    cout<<"\nРезультат (for):"<<endl;
    cout<<"Сумма: "<<sum<<endl;
    i=1;
    sum=0;
    while(i<=100)
    {
        sum=sum+1.0/pow(i,2);
        i++;
    }
    cout<<"Сумма (while): "<<sum<<endl;
    i=1;
    sum=0;
    do {
        sum=sum+1.0/pow(i,2);
        i++;
    } while(i<=100);
    cout<<"Сумма (do...while): "<<sum<<endl;
    return 0;
}
