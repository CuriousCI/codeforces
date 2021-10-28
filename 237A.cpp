#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t clients;
	string time;
	map<string, uint32_t> times;

	cin >> clients;
	clients++;
	while (clients--)
	{
		getline(cin, time);
		times[time]++;
	}

	uint32_t cashes = 0;
	for (auto count : times)
		cashes = max(cashes, count.second);

	cout << cashes;
}