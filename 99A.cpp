#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t beautiful;
	string text;
	set<char> distinct;

	cin >> beautiful >> text;

	for (auto letter : text)
		distinct.insert(letter);

	if (distinct.size() < beautiful)
		cout << "NO";
	else
	{
		cout << "YES" << endl;
	}
}