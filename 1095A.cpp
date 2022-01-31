#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string encrypted;
	cin >> length >> encrypted;

	auto multiplier = 0;
	for (auto character = 0; character < length; character += multiplier)
	{
		cout << encrypted[character];
		multiplier++;
	}
}