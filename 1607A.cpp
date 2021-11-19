#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string alphabet, word;

	cin >> cases;
	while (cases--)
	{
		getline(cin, alphabet);
		getline(cin, word);
		map<char, uint16_t> positions;
		for (auto index = 0; index < alphabet.size(); index++)
			positions[alphabet[index]] = index;

		auto distance = 0;
		for (auto index = 0; index < word.length() - 1; index++)
			distance += abs(positions[word[index]] - positions[word[index + 1]]);

		cout << distance << endl;
	}
}