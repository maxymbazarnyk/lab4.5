// Lab_04_5.cpp 
// < Базарник Максим > 
// Лабораторна робота № 4.5 
// Попадання у плоску фігуру.
// Варіант 1 
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if (y >= 0 && x >= 0 && y >= x && R * R >= x * x + y * y || y <= 0 && x <= 0 && y <= x && R * R >= x * x + y * y)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			cout << "R = "; cin >> R;
			x = 2 * R * rand() / RAND_MAX - R;
			y = 2 * R * rand() / RAND_MAX - R;
			if (y >= 0 && x >= 0 && y >= x && R * R >= x * x + y * y || y <= 0 && x <= 0 && y <= x && R * R >= x * x + y * y)
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}