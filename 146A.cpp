#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t lenght;
	string number;

	cin >> lenght >> number;

	bool is_lucky = true;
	for (auto digit : number)
		if (digit != '4' && digit != '7')
		{
			is_lucky = false;
			break;
		}

	if (!is_lucky)
	{
		cout << "NO";
		return 0;
	}

	uint16_t alpha = 0, beta = 0;
	for (auto index = 0; index < lenght / 2; index++)
		alpha += number[index] - '0';
	for (auto index = lenght / 2; index < lenght; index++)
		beta += number[index] - '0';

	cout << (alpha == beta ? "YES" : "NO");
}