#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string sequence;

	cin >> cases;
	while (cases--)
	{
		cin >> sequence;
		if (sequence.front() != sequence.back())
			sequence.front() = sequence.back();
		cout << sequence << endl;
	}
}