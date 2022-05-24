#include "Function.h"
#include <math.h>

int power(int a, int b)
{
	if (b < 0) // nie obslugujemy, gdy wykladnik jest ujemny
	{
		return -1;
	}
	if (b == 0)
	{
		return 1;
	}
	if (b == 1 )
	{
		return a;
	}

	int r = a;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}

	return r;
}

//funkcja do potegowania z math.h nazywa sie pow
// nasza funkcja nazywa siê power i to sa inne funkcje
//tutaj przeciazamy funkcje power, odbywa sie to w ten sposob, ze mamy te sama nazwe funkcji, ale inne argumenty

float power(float a, float b)
{
	return static_cast<float>(pow(a, b)); // rzutowanie stratne robimy jawnie
}

double power(double a, double b)
{
	return (pow(a, b));
}