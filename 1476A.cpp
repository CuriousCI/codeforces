#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t size, divisor;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> divisor;
		if (divisor < size)
			divisor *= (size + divisor - 1) / divisor;
		auto modulo = divisor % size;
		cout << (divisor - modulo) / size + (bool)(modulo) << endl;
	}
}