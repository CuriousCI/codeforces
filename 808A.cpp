#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string year, next;

	cin >> year;
	if (year.front() == '9')
		next = "10";
	else
		next += (char)(year.front() + 1);

	for (auto _ = 1; _ < year.size(); _++)
		next += '0';
	cout << stoi(next) - stoi(year);
}