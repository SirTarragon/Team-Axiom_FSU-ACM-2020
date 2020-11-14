// McClanahan
// Solved
#include <iostream>

using namespace std;

int main()
{
	int n, m;	//N = Person 1, M = Person 2
	char whitespace;	//Whitespace placeholder for input
	char type, size;	//Variables to hold type and size
	int total1 = 0, total2 = 0;	//Will hold final total values for each person respectively

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> type >> size;

		if (type == 'C')
		{
			if (size == 'L')
				total1 += 16;
			else if (size == 'M')
				total1 += 8;
			else if (size == 'S')
				total1 += 4;
		}
		else if (type == 'G')
		{
			if (size == 'L')
				total1 += 8;
			else if (size == 'M')
				total1 += 4;
			else if (size == 'S')
				total1 += 2;
		}
		else if (type == 'P')
		{
			if (size == 'L')
				total1 += 4;
			else if (size == 'M')
				total1 += 2;
			else if (size == 'S')
				total1 += 1;
		}
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> type >> size;

		if (type == 'C')
		{
			if (size == 'L')
				total2 += 16;
			else if (size == 'M')
				total2 += 8;
			else if (size == 'S')
				total2 += 4;
		}
		else if (type == 'G')
		{
			if (size == 'L')
				total2 += 8;
			else if (size == 'M')
				total2 += 4;
			else if (size == 'S')
				total2 += 2;
		}
		else if (type == 'P')
		{
			if (size == 'L')
				total2 += 4;
			else if (size == 'M')
				total2 += 2;
			else if (size == 'S')
				total2 += 1;
		}
	}

	if (total1 > total2)
		cout << "1" << endl;
	else if (total2 > total1)
		cout << "2" << endl;
	else if (total1 == total2)
		cout << "tie" << endl;
}
