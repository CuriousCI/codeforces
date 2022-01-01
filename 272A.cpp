#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t friends_count;
	cin >> friends_count;

	uint64_t total = 0, count, fingers = 0;
	for (auto _ = 0; _ < friends_count; _++)
	{
		cin >> count;
		total += count;
	}

	for (auto finger = 1; finger <= 5; finger++)
		if ((total + finger) % (friends_count + 1) != 1)
			fingers++;
	cout << fingers << endl;
}