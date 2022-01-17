#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string letters, result;
		cin >> letters;

		vector<uint16_t> frequency(26, 0);
		for (auto letter : letters)
			frequency[letter - 'a']++;

		for (auto letter = 'a'; letter <= 'z'; letter++)
			while (frequency[letter - 'a']--)
				result += letter;

		cout << result << endl;
	}
}