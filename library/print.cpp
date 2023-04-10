#include "inout.h"
void print(const vector<int> &vec)
{
	cout << "Отсортированный вектор: ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << " ";
	}
}