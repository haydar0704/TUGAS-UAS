#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int kotak[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
	vector <int> vect(kotak, kotak + sizeof(kotak) / sizeof(int));

	cout << "vector Awal :\n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}


	sort(vect.begin(), vect.end(), greater<int>());
	cout << "\n\nderet setelah di sorting dari besar ke kecil :\n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}
}