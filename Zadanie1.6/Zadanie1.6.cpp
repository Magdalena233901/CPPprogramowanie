// Zadanie1.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

void checkMoney(float money) 
{
	// dopisanie f oznacza, ze podajemy liczbe typu float
	float nominal[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01f };
	int amount[15]; //zapisuje ile poszzcegolnych nominalow jest uzyte
	int n = 0;


	for (int i = 0; i < 15; i++) //inicjalizacja tablicy - wypelnienie zerami
	{
		amount[i] = 0; // zerujemy dla formalnosci
	}

	while (money > 0.00) // petla dziala dopoki nie wszystkie pieniadze zostaly wydane
	{
		if ((money - nominal[n]) >= 0) //sprawdzamy czy wartosc do wyplaty jest wieksza niz aktualny nominal
		{
			amount[n] = static_cast<int> (std::floor(money / nominal[n])); //floor - zaokraglanie w dol
			money -= amount[n] * nominal[n]; // zdejmujemy wartosc uzyskana jaka (liczba nominalow * nominal)
			money = round(money * 100) / 100; //sposob na pozbycie sie niedokladnosci w liczbie (bo chcielismy do dwoch miejsc po przecinku)

			//std::cout << money << " " << money / nominal[n] << std::endl;
		}
		n++;
	}

	for (int i = 0; i < 15; i++)
	{
		std::cout << nominal[i] << " : " << amount[i] << std::endl;
	}
}

//komentarz testowy - go GIT

int main()
{
	//float kwota = 0.0;
	//std::cout << "Podaj kwotê jak¹ chcesz wyplacic: ";
	//std::cin >> kwota;

	checkMoney(123.45f);

}

//rozwiazanie Magdy

//{
//	float amount = 1410;
//	float tablica[15] = { 500.00, 200.00, 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01 };
//	float tablicaWynikow[15] = { 0 };
//	for (int i = 0; i < 15; ++i)
//	{
//		int counter = 0;
//
//		while (amount - tablica[i] >= 0)
//		{
//			amount = amount - tablica[i];
//			counter++;
//		}
//
//
//		tablicaWynikow[i] = counter;
//	}
//	for (int i = 0; i < 15; ++i)
//		std::cout << tablicaWynikow[i] << std::endl;
//}
