#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t socks_count, sock, result = 0;
	cin >> socks_count;

	socks_count *= 2;

	set<uint64_t> socks;
	while (socks_count--)
	{
		cin >> sock;

		if (socks.contains(sock))
			socks.erase(sock);
		else
			socks.insert(sock);

		result = max(result, socks.size());
	}

	cout << result;
}