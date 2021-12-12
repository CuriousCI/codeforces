#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string alpha, beta;
	cin >> alpha >> beta;

	size_t offset = 1;
	while (alpha[alpha.length() - offset] == beta[beta.length() - offset] &&
		   offset <= min(alpha.length(), beta.length()))
		offset++;

	cout << (alpha.length() - offset + 1) + (beta.length() - offset + 1);
}