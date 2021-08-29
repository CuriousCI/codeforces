#include <iostream>

using namespace std;

long long ceil(long long n)
{
	long long m = n % 2;
	return ((n - m) / 2) + m;
}

long long floor(long long n)
{
	long long m = n % 2;
	return (n - m) / 2;
}

int main()
{
	long long n;
	cin >> n;
	cout << ((floor(n) * (floor(n) + 1)) - ceil(n) * ceil(n));
}