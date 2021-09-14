#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length;
	cin >> length;

	string binary;
	cin >> binary;

	int64_t digits[2] = {0};
	for (auto digit : binary)
		digits[digit - '0']++;
	cout << max(digits[0], digits[1]) - min(digits[0], digits[1]);
}