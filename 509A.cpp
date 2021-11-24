#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t side;
	cin >> side;

	vector<uint16_t> sequence(side, 1);
	for (auto _ = 1; _ < side; _++)
		for (auto index = 1; index < side; index++)
			sequence[index] += sequence[index - 1];

	cout << sequence.back();
}