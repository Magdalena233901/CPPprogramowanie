// modify floatfield
#include <iostream>     // std::cout, std::fixed, std::scientific

int main() {
	double a = 3.1415926534;
	double b = 2006.0;
	double c = 101.1;

	float d = 3.1415926534;
	float e = 2006.0;
	float f = 101.1;

	int n = 0;

	std::cout << "Podaj precyzje z jaka maja wystepowac zaokraglenia: " << std::endl;
	std::cin >> n;

	std::cout.precision(n);

	std::cout << "default:\n";
	std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';

	std::cout << '\n';

	std::cout << "fixed:\n" << std::fixed;
	std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';

	std::cout << '\n';

	std::cout << "scientific:\n" << std::scientific;
	std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n';

}