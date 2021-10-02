#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string number;

	cin >> cases;
	while (cases--)
	{
		cin >> number;
		cout << *max_element(number.begin(), number.end()) - '0' << endl;
	}
}