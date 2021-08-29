#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    output.clear();

    int problems_count;
    input >> problems_count;

    int result = 0;    
    for (int problem = 0; problem < problems_count; problem++)
    {
        int petya, vasya, tonya;
        input >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2)
        {
            result++;
        }
    }

    cout << result << endl;

    input.close();
    output.close();
    return 0;
}