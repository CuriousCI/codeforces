#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t line_length;
	cin >> line_length;

	vector<uint64_t> people(line_length);
	for (auto &person : people)
		cin >> person;

	auto twofives = 0, fifty = 0, hundred = 0;
	bool is_good = true;

	for (auto person : people)
	{
		if (!is_good)
			break;

		if (person == 25)
			twofives++;

		if (person == 50)
		{
			if (twofives > 0)
			{

				fifty++;
				twofives--;
			}
			else
				is_good = false;
		}

		if (person == 100)
		{
			if (twofives > 0 && fifty > 0)
			{

				hundred++;
				twofives--;
				fifty--;
			}
			else if (twofives > 2)
			{
				hundred++;
				twofives -= 3;
			}
			else
				is_good = false;
		}
	}

	cout << (is_good ? "YES" : "NO");
}
