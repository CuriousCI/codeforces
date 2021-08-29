#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t forces;
	int32_t input[3], output[3] = {0};
	cin >> forces;

	while (forces--)
		for (int _ = 0; _ < 3; _++)
		{
			cin >> input[_];
			output[_] += input[_];
		}

	cout << (output[0] or output[1] or output[2] ? "NO" : "YES");
}
