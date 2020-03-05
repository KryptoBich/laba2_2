#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void main ()
{
    setlocale(LC_ALL,"rus");
    srand((unsigned)time(NULL));

    int d[4][4];
    int max=1, min=1;
    int max_i, max_j, min_i, min_j;

    for(int i=0; i<4; i++)            //заполняем массив и выводим для сравнение результата
    {
        for(int j=0; j<4; j++)
        {
            d[i][j] = rand()%100-50;
            cout << setw(3) << d[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<4; i++)    //находим мак и мин элементы и сохраняем их координаты
    {
        for(int j=0; j<4; j++)
        {
            if(max < d[i][j])
            {
                max = d[i][j];
                max_i = i;
                max_j = j;
            }
            if(min > d[i][j])
            {
                min = d[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    for(int i=0; i<1; i++)           // меняем местами
    {
        d[min_i][min_j] = max;
        d[max_i][max_j] = min;

    }
    cout << endl;
    for(int i=0; i<4; i++)         // выводим готовый результат
    {
        for(int j=0; j<4; j++)
        {
            cout << setw(3) << d[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Максимальный элемент =  " << max << endl;
    cout << "Минимальный элемент =  "<< min << endl;
}
