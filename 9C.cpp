#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

string increase(string binary)
{
	string result;
	uint64_t zero = binary.rfind('0');
	if (zero == string::npos)
	{
		result = "1";
		for (auto _ = 0; _ < binary.size(); _++)
			result += '0';
	}
	else
	{
		result = binary;
		result[zero] = '1';
		for (auto _ = zero + 1; _ < binary.size(); _++)
			result[_] = '0';
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t numbers_count, result = 0;
	cin >> numbers_count;

	string number = "1";
	while (stoi(number) <= numbers_count)
	{
		result++;
		number = increase(number);
	}

	cout << result;
}