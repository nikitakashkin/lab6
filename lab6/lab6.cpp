#include <iostream>
using namespace std;

/*
float przelicz(float temp);
void zapisz(float temp_p, float temp_k);
void wyswietl();

float TEMP1[10];
float TEMP2[10];
int INDEKS = 0;

int main(){//zadanie 3
	float temp_p, temp_k;
	int f;

	while (1) {
		cout << "Podaj poczatkowa temperature w stopniach Celsjusza: ";
		cin >> temp_p;

		temp_k = przelicz(temp_p);
		zapisz(temp_p, temp_k);

		cout << "Czy chcesz wyswietlic zapisane wartosci? (1 - tak, 0 - nie): ";
		if (cin >> f && f == 1) {
			wyswietl();
		}
		else { return 0; }
	}
	return 0;
}
float przelicz(float temp) {
	return temp + 273.15;
}
void zapisz(float temp_p, float temp_k) {
	if (INDEKS < 10) {
		TEMP1[INDEKS] = temp_p;
		TEMP2[INDEKS] = temp_k;
		INDEKS++;
	}
	else {
		cout << "Koniec miejsca w tablicy, przeliczenie nie zostanie zapisane" << endl;
	}
}
void wyswietl() {
	for (int i = 0; i < INDEKS; i++) {
		cout << i+1 << ": " << TEMP1[i] << "C" << " -> " << TEMP2[i] << "K" << endl;
	}
}
*/


/*
void usun();

int tab[10];
int rozmiar = 10;

int main() {//zadanie 2
	char odp;
	for (int i = 0; i < rozmiar; i++) {
		cout << "Wpisz wartosc dla tab[" << i << "]: ";
		cin >> tab[i];
	}
	cout<< "Czy chcesz usunac element z tablicy? (t/n): ";
	cin >> odp;

	if (odp == 't') {
		usun();
		cout << "Tablica po usunieciu elementu: "<<endl;
		for (int i = 0; i < rozmiar; i++) {
			cout << "tab[" << i << "] = " << tab[i] << endl;
		}
	}
	else {
		cout << "Koniec programu." << endl;
	}
}
void usun() {
	int num;
	cout << "Podaj numer elementu do usuniecia(0-9): ";
	cin >> num;
	if (num < 1 || num > rozmiar) {
		cout << "Nieprawidlowy numer elementu." << endl;
	}
	else {
		for (int i = num ;i < rozmiar; i ++) {
			tab[i] = tab[i + 1];
		}
		rozmiar--;
	}

}
*/

/*
int suma(int x, int y);
 
int a = 20;//zadanie 1
int b = 10;

int main()
{
	cout<<suma (a, b)<<endl;
	int a = 1;
	int b = 2;
	cout<<suma (a, b)<<endl;
}

int suma(int x, int y)
{
	return x + y;
}

*/

