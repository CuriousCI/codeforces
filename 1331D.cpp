#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string hexadecimal;
	cin >> hexadecimal;
	uint16_t digit = hexadecimal[6] - '0';
	cout << (digit & 1);
}