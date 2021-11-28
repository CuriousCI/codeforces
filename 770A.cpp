#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, distinct_symbols;
	cin >> length >> distinct_symbols;

	string password;
	for (auto _ = 0; _ < length; _++)
		password += ('a' + (_ % distinct_symbols));

	cout << password;
}