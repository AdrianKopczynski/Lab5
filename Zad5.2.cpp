#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int vecCap,tableHalf;
	cout << "Podaj liczbe elementow tablicy: ";
	cin >> vecCap;
	vector <int> tab(vecCap);
	vector <int> helpTab(vecCap);
	for (int i = 0; i < vecCap; i++) {
		cout << endl << "Podaj " << i + 1 << " element tablicy:";
		cin >> tab[i];
		helpTab[i] = tab[i];
	}
	if (vecCap%2 == 1){
		tableHalf = vecCap-1;
		tableHalf /= 2;
		tableHalf++; // Przyjmujemy, �e je�li u�ytkownik wpisze nieparzyst� liczb� element�w tablicy, to pierwsza kolumna b�dzie mia�a 1 element wi�cej
	}
	else{
		tableHalf = vecCap/2;
	}
	cout << "Tablica wejsciowa: " << endl;
	for (int i = 0;i<tableHalf;i++){
		cout << tab[i] << "          ";
		if(tableHalf+i<vecCap){
			cout<<tab[tableHalf+i]<<endl;
		}
		else{
			cout<<endl;
		}
	}
	for (int i = 0;i<vecCap;i++){
		tab[i] = helpTab[vecCap-i-1];
	}
	cout << "Tablica wyjsciowa: " << endl;
	for (int i = 0;i<tableHalf;i++){
		cout << tab[i] << "          ";
		if(tableHalf+i<vecCap){
			cout<<tab[tableHalf+i]<<endl;
		}
		else{
			cout<<endl;
		}
	}
	return 0;
}
