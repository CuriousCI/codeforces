#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<string> haiku(3);
	for (auto &line : haiku)
		getline(cin, line);

	vector<uint16_t> syllables(3, 0);
	for (auto index = 0; index < 3; index++)
		for (auto letter : haiku[index])
			if (((string) "aeiou").find(letter) != string::npos)
				syllables[index]++;

	cout << (syllables.front() == syllables.back() && syllables.front() == 5 && syllables[1] == 7 ? "YES" : "NO");
}