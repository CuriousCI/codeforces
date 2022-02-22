#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, bags_count;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> bags_count;
		cout << bags_count - 1 << endl;
		for (auto bag = 2; bag <= bags_count; bag++)
			cout << bag << ' ';
		cout << endl;
	}
}