#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	auto dot = number.find('.');
	if (number[dot - 1] == '9')
		cout << "GOTO Vasilisa.";
	else
	{
		if (number[dot + 1] >= '5')
			number[dot - 1]++;

		cout << number.substr(0, dot);
	}
}