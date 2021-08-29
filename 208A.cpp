#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string remix;
	cin >> remix;

	size_t position = string::npos;
	while ((position = remix.find("WUB")) != string::npos)
		remix.replace(position, 3, " ");

	cout << remix;
}