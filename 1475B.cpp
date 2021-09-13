#include <iostream>
#include <cstdint>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t number, modulo, floord;
	cin >> cases;

	while (cases--)
	{
		cin >> number;
		modulo = number % 2020;
		floord = (number - modulo) / 2020;
		cout << (abs(floord - modulo) * 2020 + modulo * 2021 == number ? "YES" : "NO") << endl;
	}
}