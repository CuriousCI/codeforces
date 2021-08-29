#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t size;
	cin >> cases;

	while (cases--)
	{
		cin >> size;
		vector<pair<uint32_t, size_t>> piranhas(size);

		size_t index = 0;
		for (auto &piranha : piranhas)
		{
			cin >> piranha.first;
			piranha.second = index;
			index++;
		}

		bool fish_eaten = true;
		while (piranhas.size() > 1 && fish_eaten)
		{
			fish_eaten = false;
			for (index = 0; index < piranhas.size(); index++)
			{
				if (index < piranhas.size() - 1 && piranhas[index].first > piranhas[index + 1].first)
				{
					fish_eaten = true;
					piranhas[index].first++;
					piranhas.erase(piranhas.begin() + index + 1);
					break;
				}
				else if (index > 0 && piranhas[index].first > piranhas[index - 1].first)
				{
					fish_eaten = true;
					piranhas[index].first++;
					piranhas.erase(piranhas.begin() + index - 1);
					break;
				}
			}
		}

		if (piranhas.size() > 1)
			cout << -1;
		else
			cout << piranhas.front().second + 1;
		cout << endl;
	}
}