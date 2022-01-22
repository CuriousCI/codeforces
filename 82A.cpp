#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<string> friends = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

	uint64_t turn;
	cin >> turn;

	auto modulo = turn % 5;
	auto rounds = (turn - modulo) / 5;
}