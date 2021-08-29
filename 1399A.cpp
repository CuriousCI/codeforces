#include <iostream>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, element;
	uint16_t size;
	cin >> cases;

	while (cases--)
	{
		cin >> size;

		set<uint32_t> elements;
		while (size--)
		{
			cin >> element;
			elements.insert(element);
		}

		vector<uint32_t> sorted;
		for (auto element : elements)
			sorted.push_back(element);

		bool possible = true;
		for (auto element = sorted.begin(); element < sorted.end() - 1; element++)
			if (element[1] - *element != 1)
			{
				possible = false;
				break;
			}

		cout << (possible ? "YES" : "NO") << endl;
	}
}