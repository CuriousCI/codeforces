#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t alpha, beta, gamma;
	cin >> alpha >> beta >> gamma;
	cout << min(max(alpha, beta), min(alpha, beta) + 1) + min(alpha, beta) + gamma * 2;
}