#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string account;
	cin >> account;

	if (account.front() == '-')
	{
		if (account.back() < account[account.size() - 2])
			account[account.size() - 2] = account[account.size() - 1];
		account[account.size() - 1] = ' ';
	}

	if (account == "-0 ")
		account = "0";

	cout << account;
}