#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length;
	string commands;
	cin >> length >> commands;

	cout << length + 1;
}