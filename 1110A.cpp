#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t base, size;

	cin >> base >> size;
	vector<uint64_t> digits(size);
	for (auto &digit : digits)
		cin >> digit;

	if (!(base & 1))
		cout << (digits.back() & 1 ? "odd" : "even");
	else
	{
		uint64_t odds = 0;
		for (auto digit : digits)
			odds += (digit & 1);
		cout << (odds & 1 ? "odd" : "even");
	}
	cout << endl;
}