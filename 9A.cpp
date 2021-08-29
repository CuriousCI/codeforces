#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t yakko, wakko;
	cin >> yakko >> wakko;

	yakko = max(yakko, wakko);
	uint16_t probability = 7 - yakko, outof = 6, divisor = 2;
	while (divisor <= 6)
	{
		if (probability % divisor == 0 && outof % divisor == 0)
		{
			probability /= divisor;
			outof /= divisor;
		}
		else
			divisor++;
	}

	cout << probability << '/' << outof;
}