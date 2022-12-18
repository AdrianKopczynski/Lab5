#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int vecCap,i,x,max,tempMax;
	cout << "Podaj liczbe elementow vectora: ";
	cin >> vecCap;
	vector <int> tab(vecCap);
	for (i = 0; i < vecCap; i++) {
		cout << endl << "Podaj " << i + 1 << " element tablicy:";
		cin >> tab[i];
	}
	max = 0;
	tempMax = 0;
	for (x = 0; x < vecCap; x++) {
		if (tab[x] > tempMax) {
			max = x;
			tempMax = tab[x];
		}
		else {
			continue;
		}
	}
	cout << "Indeksem z maksymalna wartoscia jest indeks " << max+1 << endl;
	return 0;
}