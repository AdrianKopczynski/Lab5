#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int vecCap,i,x,max,tempMax;
	cout << "Podaj liczbe elementow wektora: ";
	cin >> vecCap;
	vector <int> tab(vecCap);
	for (i = 0; i < vecCap; i++) {
		cout << endl << "Podaj " << i + 1 << " element wektora:";
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
	cout << "Wartosc elementu maksymalnego wektora to " << tempMax << endl;
	cout << "Indeksem z maksymalna wartoscia jest indeks " << max << endl;
	return 0;
}
