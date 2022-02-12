#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	for (auto &digit : number)
		if ('9' - digit < digit - '0')
			digit = (char)('9' - digit + '0');

	if (number.front() == '0')
		number.front() = '9';

	cout << number;
}
