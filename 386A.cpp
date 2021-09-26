#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint16_t> bidders(size);
	for (auto &bidder : bidders)
		cin >> bidder;

	size_t position = max_element(bidders.begin(), bidders.end()) - bidders.begin();
	bidders[position] = 0;
	uint16_t price = *max_element(bidders.begin(), bidders.end());

	cout << position + 1 << ' ' << price;
}