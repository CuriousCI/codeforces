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

	size_t index = 0;
	for (auto letter : word)
		if (letter == "hello"[index])
			index++;

	cout << (index >= 5 ? "YES" : "NO");
}