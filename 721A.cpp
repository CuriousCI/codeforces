#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, size = 0;
	string code;

	cin >> length >> code;

	vector<uint16_t> digits;

	for (auto character : code)
	{
		if (character == 'B')
			size++;
		else if (size)
		{
			digits.push_back(size);
			size = 0;
		}
	}

	if (size)
		digits.push_back(size);
	cout << digits.size() << endl;
	for (auto digit : digits)
		cout << digit << ' ';
}