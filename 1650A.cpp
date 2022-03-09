#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string sequence;
		char goal;
		cin >> sequence >> goal;

		bool convertable = false;
		for (auto letter = 0; letter < sequence.length() && !convertable; letter++)
			convertable = sequence[letter] == goal && !(letter & 1);

		cout << (convertable ? "YES" : "NO") << endl;
	}
}