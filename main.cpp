#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int min, max;
    const int size = 5;
    int arr2D[size][size];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            arr2D[i][j] = 5 + rand() % 5;
            cout << arr2D[i][j] << ' ';
        }
        cout << endl;
    }
    min = max = arr2D[0][0];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr2D[i][j] > max)
            {
                max = arr2D[i][j];
            }
            if (arr2D[i][j] < min)
            {
                min = arr2D[i][j];
            }
        }
    }
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    return 0;
}