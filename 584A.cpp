#include <iostream>
#include <string>
#include <cstdint>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t digits, divisor;
	cin >> digits >> divisor;

	string result = "1";
	for (auto _ = 1; _ < digits; _++)
		result += '0';

	if (divisor < 10)
		result.front() += divisor - 1;

	if (digits == 1 && divisor == 10)
		cout << -1;
	else
		cout << result;
}