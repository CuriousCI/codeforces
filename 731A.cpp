#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string word;
	cin >> word;

	uint32_t distance = 0;
	char current_letter = 'a';

	for (size_t index = 0; index < word.length() - 1; index++)
	{
		cout << (uint16_t)'a';
	}
}