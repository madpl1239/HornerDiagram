/*
 * main.cpp
 * 
 * The code computes the value of a polynomial 
 * using the Horner scheme.
 * 
 * 15-04-2024 by madpl (LANA Systems)
 */
#include <iostream>


// maksymalny stopień wielomianu
constexpr int MAXN = 11;
using Vector = float[MAXN];


float horner(Vector& a, int& n, float& x)
{
	int i = 0;
	Vector b{};
	
	b[0] = a[0];
	for(int i = 1; i <= n; ++i)
		b[i] = a[i] + b[i - 1] * x;
	
	return b[n];
}


int main(void)
{
	Vector a;
	int n = 0;
	float x = 0.0f;
	
	std::cout << "enter degree of polynomial (max 10): ";
	std::cin >> n;
	
	std::cout << "enter the next coefficients of the polynomial:\n";
	for(int i = 0; i < n; ++i)
	{
		std::cout << "x^" << n - i << " = ";
		std::cin >> a[i];
	}
	
	std::cout << "enter x = ";
	std::cin >> x;
	
	std::cout << "f(" << x << ") = " << horner(a, n, x) << "\n";
	
	return 0;
}
