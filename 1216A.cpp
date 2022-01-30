#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length, answer = 0;
	string letters;

	cin >> length >> letters;
	for (auto letter = 0; letter < length - 1; letter += 2)
		if (letters[letter] == letters[letter + 1])
		{
			answer++;
			letters[letter + 1] = (letters[letter + 1] == 'a' ? 'b' : 'a');
		}

	cout << answer << endl
		 << letters;
}