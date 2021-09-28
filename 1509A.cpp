#include <iostream>
#include <deque>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	uint32_t member;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		deque<uint32_t> members;
		while (size--)
		{
			cin >> member;
			if (member & 1)
				members.push_front(member);
			else
				members.push_back(member);
		}

		for (auto member : members)
			cout << member << ' ';
		cout << endl;
	}
}