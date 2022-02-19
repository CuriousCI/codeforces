#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string encrypted, decrypted;
	cin >> encrypted;

	auto center = floor((double)encrypted.length() / 2.0) - !(encrypted.length() & 1);
	auto offset = 0;
	for (auto turn = 0; turn < encrypted.length(); turn++)
		if (turn & 1)
		{
			offset++;
			decrypted += encrypted[center + offset];
		}
		else
			decrypted += encrypted[center - offset];

	cout << decrypted;
}