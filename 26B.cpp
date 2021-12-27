#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string sequence;
	cin >> sequence;

	uint64_t
		open = 0,
		length = sequence.length();

	for (auto character : sequence)
		if (character == '(')
			open++;
		else if (open)
			open--;
		else
			length--;

	cout << length - open;
}