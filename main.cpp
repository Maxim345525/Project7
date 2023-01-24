#include<iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    const int size = 10;
    int arr2D[size][size];
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j <= size; j++)
        {
            arr2D[i][j] = 10 + rand() % 10;
            cout << arr2D[i][j] << ' ';
        }
        cout << endl;
    }

    sum = arr2D[0][0];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
                sum += arr2D[i][j];
          
        }
    }
    cout << "Summ-->" << sum;
    return 0;
}