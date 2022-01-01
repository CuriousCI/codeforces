#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t boys_count, girls_count;
	cin >> boys_count >> girls_count;

	set<pair<uint16_t, uint16_t>> pairs;
	for (auto boy = 1; boy <= boys_count; boy++)
		for (auto girl = boy; girl <= girls_count; girl++)
			pairs.insert({boy, girl});

	cout << pairs.size() << endl;
	for (auto item : pairs)
		cout << item.first << ' ' << item.second << endl;
}