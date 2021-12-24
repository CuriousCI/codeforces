#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string alpha, beta;
	cin >> alpha >> beta;

	uint64_t first = stoi(alpha) + stoi(beta);

	string new_alpha, new_beta;
	for (auto character : alpha)
		if (character != '0')
			new_alpha += character;
	for (auto character : beta)
		if (character != '0')
			new_beta += character;

	uint64_t second = stoi(new_alpha) + stoi(new_beta);
	string new_first;
	for (auto character : to_string(first))
		if (character != '0')
			new_first += character;

	cout << (stoi(new_first) == second ? "YES" : "NO");
}