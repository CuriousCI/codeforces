#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint32_t> digits(size);
		for (auto &digit : digits)
			cin >> digit;
		sort(digits.begin(), digits.end());
		cout << (digits.front() == digits.back() ? digits.size() : 1) << endl;
	}
}