#include <iostream>
#include <cmath>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t number;
		cin >> number;

		set<uint64_t> numbers;
		for (uint64_t id = 1; id <= sqrt(number); id++)
		{
			if (id * id <= number)
				numbers.insert(id * id);
			if (id * id * id <= number)
				numbers.insert(id * id * id);
		}

		cout << numbers.size() << endl;
	}
}