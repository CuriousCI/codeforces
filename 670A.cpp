#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t days, modulo;
	cin >> days;

	modulo = days % 7;
	auto minimum = ((days - modulo) / 7) * 2;
	cout << minimum + (modulo == 6) << ' ' << minimum + (modulo ? modulo == 1 ? 1 : 2 : 0);
}