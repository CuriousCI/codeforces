#include <iostream>
#include <fstream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	ifstream input("input.txt");
	ofstream output("output.txt");

	string entrance;
	uint16_t rail;
	input >> entrance >> rail;
	input.close();

	string
		stronger_arm = "L",
		weaker_arm = "R";

	if ((rail == 2 && entrance == "front") || (rail == 1 && entrance == "back"))
	{
		auto copy = stronger_arm;
		stronger_arm = weaker_arm;
		weaker_arm = stronger_arm;
	}

	output << stronger_arm;
	output.close();
}