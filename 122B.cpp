#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string digits;
	cin >> digits;

	uint16_t fours = 0, sevens = 0;
	for (auto digit : digits)
		if (digit == '4')
			fours++;
		else if (digit == '7')
			sevens++;

	if (!fours && !sevens)
		cout << -1;
	else
		cout << (fours >= sevens ? '4' : '7');
}