#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, petya, vasya;
	cin >> size >> petya >> vasya;

	vector<uint64_t> chores(size);
	for (auto &chore : chores)
		cin >> chore;

	sort(chores.begin(), chores.end());

	cout << chores[vasya] - chores[vasya - 1];
}