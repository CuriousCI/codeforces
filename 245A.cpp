#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t pings, server, successful, lost;
	cin >> pings;
	pair<uint16_t, uint16_t> servers[2];
	while (pings--)
	{
		cin >> server >> successful >> lost;
		servers[--server].first += successful;
		servers[server].second += lost;
	}

	cout << (servers[0].first >= servers[0].second ? "LIVE" : "DEAD") << endl
		 << (servers[1].first >= servers[1].second ? "LIVE" : "DEAD") << endl;
}