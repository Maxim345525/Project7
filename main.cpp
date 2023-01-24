#include<iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    const int size = 5;
    int arr2D[size][size];
    int avg = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j <= size; j++)
        {
            arr2D[i][j] = 5 + rand() % 5;
            cout << arr2D[i][j] << ' ';
        }
        cout << endl;
    }

    avg = arr2D[0][0];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            avg += arr2D[i][j];

            avg = avg / arr2D[i][j];
        }
        
    }

    cout << "Avg-->" << avg;
    return 0;
}