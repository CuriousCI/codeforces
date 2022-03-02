#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t home, jump;
	string path;
	cin >> home >> jump >> path;
	home--;

	uint16_t jumps = 0, frog = 0;
	bool reached = false;
	while (!reached)
	{
		bool jumped = false;
		for (auto offset = jump; offset > 0 && !jumped; offset--)
			if (path[frog + offset] == '1' || frog + offset == home)
			{
				frog += offset;
				jumped = true;
				jumps++;
			}

		if (!jumped)
			break;
		if (frog == home)
			reached = true;
	}

	cout << (reached ? jumps : -1);
}