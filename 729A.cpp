#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, last = -2;
	string text;

	cin >> length >> text;
	vector<uint32_t> positions;

	while ((last = text.find("ogo", min(last + 2, length - 1))) != string::npos)
		positions.push_back(last);

	for (auto position : positions)
		for (auto offset = 0; offset < 3; offset++)
			text[position + offset] = '*';

	string result;
	uint16_t temp = 0;
	for (auto letter : text)
		if (letter != '*')
		{
			result += letter;
			temp = 0;
		}
		else if (temp < 3)
		{
			result += '*';
			temp++;
		}

	cout << result;
}