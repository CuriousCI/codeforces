#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, total;
	cin >> length >> total;

	if (total > length * 9 || (length > 1 && total == 0))
		cout << -1 << ' ' << -1;
	else if (!total)
	{
		for (auto _ = 0; _ < length; _++)
			cout << '0';
		cout << ' ';
		for (auto _ = 0; _ < length; _++)
			cout << '0';
	}
	else
	{
		string biggest, smallest = "1";

		for (auto _ = 0; _ < length; _++)
			biggest += '0';

		for (auto _ = 1; _ < length; _++)
			smallest += '0';

		auto reminder = total - 1;

		auto index = 0;
		while (total && index < length)
		{
			auto difference = min(total, (uint32_t)9);
			biggest[index] += difference;
			index++;
			total -= difference;
		}

		index = length - 1;
		while (reminder && index >= 0)
		{
			auto difference = min(reminder, (uint32_t)9);
			smallest[index] += difference;
			index--;
			reminder -= difference;
		}

		cout << smallest << ' ' << biggest;
	}
}