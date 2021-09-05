#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string problem;
	cin >> cases;

	while (cases--)
	{
		cin >> problem;
		cout << problem.front();
		for (size_t index = 1; index < problem.length(); index += 2)
			cout << problem[index];
		cout << endl;
	}
}