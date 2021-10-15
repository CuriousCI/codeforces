#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t alpha, beta, number;

	cin >> cases;
	while (cases--)
	{
		cin >> alpha >> beta >> number;
		switch (number % 3)
		{
		case 0:
			cout << alpha;
			break;

		case 1:
			cout << beta;
			break;

		default:
			cout << (alpha ^ beta);
			break;
		}
		cout << endl;
	}
}