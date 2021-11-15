#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t workout, set, chest = 0, biceps = 0, back = 0;
	cin >> workout;
	for (auto _ = 0; _ < workout; _++)
	{
		cin >> set;

		switch (_ % 3)
		{
		case 0:
			chest += set;
			break;

		case 1:
			biceps += set;
			break;

		case 2:
			back += set;
			break;
		}
	}

	if (chest > biceps && chest > back)
		cout << "chest";
	else if (biceps > back)
		cout << "biceps";
	else
		cout << "back";
}