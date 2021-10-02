#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t left, right, direct;
	cin >> left >> right >> direct;
	cout << min({
		(left + right) * 2,
		left + direct + right,
		(left + direct) * 2,
		(right + direct) * 2,
	});
}