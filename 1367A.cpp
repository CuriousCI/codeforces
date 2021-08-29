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
		for (auto chr = problem.begin(); chr < problem.end() - 4; chr += 2)
		{
			cout << chr[0];
			if (chr[1] == chr[2])
			{
				cout << chr[1];
				chr--;
			}
			else
				cout << chr[1] << chr[2];
			cout << chr[3];
		}
		cout << endl;
	}
}