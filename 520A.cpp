#include <iostream>
#include <cstdint>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	set<char> letters;
	char letter;

	cin >> size;
	while (size--)
	{
		cin >> letter;
		letters.insert(tolower(letter));
	}

	cout << (letters.size() == 26 ? "YES" : "NO");
}