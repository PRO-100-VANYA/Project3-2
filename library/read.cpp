#include "inout.h"
void read(vector<int> &vec)
{
	int a, b;
	cout << "¬ведите размер вектора: ";
	cin >> a;
	cout << "¬ведите вектор (между числами ставить пробел): ";
	for (int y = 0; y < a; y++)
	{
		cin >> b;
		vec.push_back(b);
	}
}