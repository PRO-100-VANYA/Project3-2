#include "inout.h"
void read(vector<int> &vec)
{
	int a, b;
	cout << "������� ������ �������: ";
	cin >> a;
	cout << "������� ������ (����� ������� ������� ������): ";
	for (int y = 0; y < a; y++)
	{
		cin >> b;
		vec.push_back(b);
	}
}