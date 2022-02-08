#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t integer;
		cin >> integer;

		if (integer <= 30)
			cout << "NO";
		else
		{
			set<uint16_t> nearly_primes = {6, 10, 14};
			if (nearly_primes.contains(integer - 30))
			{
				nearly_primes.erase(14);
				nearly_primes.insert(15);
				integer--;
			}

			cout << "YES" << endl;
			for (auto number : nearly_primes)
				cout << number << ' ';
			cout << integer - 30 << endl;
		}
		cout << endl;
	}
}