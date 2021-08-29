#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string sequence, end;
	cin >> sequence;

	for (auto letter : sequence)
		if (letter != 'a')
			end += letter;

	bool good = true;
	for (size_t index = sequence.size() - (end.size() / 2); index < sequence.size(); index++)
		if (sequence[index] != end[index - (sequence.size() - (end.size() / 2))])
		{
			good = false;
			break;
		}

	if (good && !(end.size() & 1))
		for (size_t index = 0; index < sequence.size() - (end.size() / 2); index++)
			cout << sequence[index];
	else
		cout << ":(";
}