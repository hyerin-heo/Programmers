#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0;

    int bounds = (w * 2) + 1;
    int start = 0;
    int end = 0;

    sort(stations.begin(), stations.end(), less<int>());

    for (int i = 0; i < stations.size(); i++)
    {
        start = stations[i] - w - 1 - end;
        if (start > 0)
        {
            answer += start / bounds;
            if (start % bounds > 0)
            {
                ++answer;
            }
        }
        end = stations[i] + w;
    }

    start = n - end;

    if (start > 0)
    {
        answer += start / bounds;
        if (start % bounds > 0)
        {
            ++answer;
        }
    }


    return answer;
}

int main() 
{
    solution(16, { 9 }, 2);
}