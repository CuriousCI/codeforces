#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

bool reverse_sort(long long int alpha, long long int beta)
{
    return alpha > beta;
}

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    output.clear();

    long long int contestants_count, contestant_index;
    input >> contestants_count >> contestant_index;

    long long int *contestants = new long long int[contestants_count];
    for (long long int index = 0; index < contestants_count; index++)
    {
        input >> contestants[index];
    }

    long long int threshold_score = contestants[contestant_index - 1];
    sort(contestants, contestants + contestants_count, reverse_sort);

    long long int result = 0;
    for (long long int index = 0; index < contestants_count; index++)
    {
        if (contestants[index] >= threshold_score && contestants[index] > 0)
        {
            result++;
        }
        else 
        {
            break;
        }
    }
    cout << result << endl;

    input.close();
    output.close();
    return 0;
}