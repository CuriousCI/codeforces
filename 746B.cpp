#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string word, decoded;

	cin >> length >> word;

	for (size_t position = 0; position < length; position++)
		if ((position & 1 && length & 1) || !(position & 1) && !(length & 1))
			decoded = word[position] + decoded;
		else
			decoded += word[position];

	cout << decoded;
}