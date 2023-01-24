#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	srand(time(0));
	const int x = 4;
	const int y = 4;
	int arr2d[x][y];
	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < y; j++)
		{
			arr2d[i][j] = rand() % 10;
			cout << arr2d[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "----------------" << endl;
	int row_sum = 0, sum = 0;
	for (size_t i = 0; i < x; ++i)
	{

		for (size_t j = 0; j < y; ++j)
		{
			row_sum += arr2d[i][j];
			sum += arr2d[i][j];
			cout << arr2d[i][j] << "  ";

		}
		cout << "| ";
		cout << row_sum << endl;
		row_sum = 0;
	}

	cout << "----------------" << endl;

	int i, j, col_sum = 0;
	for (size_t i = 0; i < x; ++i)
	{
		for (size_t j = 0; j < y; ++j)
		{
			col_sum += arr2d[j][i];
		}

		cout << col_sum << " ";
		col_sum = 0;
	}
	cout << " |" << sum;
	return 0;
}