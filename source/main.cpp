/*
 * main.cpp
 * 
 * The code computes the value of a polynomial 
 * using the Horner's scheme.
 * 
 * 15-04-2024 by madpl (LANA Systems)
 */
#include <iostream>


// maximum degree of a polynomial
constexpr int MAXN = 11;
using Vector = float[MAXN];


// iterative version
float hornerIter(Vector& a, int& n, float& x)
{
	int i = 0;
	float f = 0.0f;
	
	f = a[0];
	for(int i = 1; i <= n; ++i)
		f = f * x + a[i];
	
	return f;
}


// recursive version
float hornerRec()
{
	// not implemented yet
	return 0;
}


int main(void)
{
	Vector a;
	int n = 0;
	float x = 0.0f;
	
	std::cout << "enter degree of polynomial (max 10): ";
	std::cin >> n;
	
	std::cout << "enter coefficients of the polynomial:\n";
	for(int i = 0; i < n; ++i)
	{
		std::cout << "x^" << n - i << " = ";
		std::cin >> a[i];
	}
	
	std::cout << "enter x = ";
	std::cin >> x;
	
	// solve to terminal
	std::cout << "f(" << x << ") = " << hornerIter(a, n, x) << "\n";
	
	return 0;
}
