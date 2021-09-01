#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, width, height, pieces, result;
	cin >> cases;

	while (cases--)
	{
		cin >> width >> height >> pieces;
		result = 1;
		while (!(width & 1))
		{
			result *= 2;
			width >>= 1;
		}

		while (!(height & 1))
		{
			result *= 2;
			height >>= 1;
		}

		cout << (result >= pieces ? "YES" : "NO") << endl;
	}
}