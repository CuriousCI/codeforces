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
	sort(sequence.begin(), sequence.end());
	for (auto index = sequence.size() - 1; index >= 0; index--)
	{
		cout << sequence[index];
		if (sequence[index - 1] != sequence[index])
			break;
	}
}