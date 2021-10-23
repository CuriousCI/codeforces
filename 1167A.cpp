#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length;
	string phone;

	cin >> cases;
	while (cases--)
	{
		cin >> length >> phone;

		auto position = -1;
		for (auto &digit : phone)
			if (digit == '8')
			{
				position = &digit - &phone.front();
				break;
			}

		cout << (phone.length() - position >= 11 && position != -1 ? "YES" : "NO") << endl;
	}
}