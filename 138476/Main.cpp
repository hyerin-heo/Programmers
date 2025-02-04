#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    unordered_map<int, int> map;


    for (int i = 0; i < tangerine.size(); i++)
    {
        auto key = map.find(tangerine[i]);
        if (key != map.end())
        {
            //exist
            key->second++;
        }
        else {
            map.insert(make_pair(tangerine[i], 1));
        }
    }

    vector<int> count;

    for (auto it : map)
    {
        count.push_back(it.second);
    }

    sort(count.begin(), count.end(), greater<int>());

    int tanCount = 0;

    for (int i = 0; i < count.size(); i++)
    {
        if (tanCount >= k)
        {
            break;
        }
        tanCount += count[i];
        ++answer;
    }

    return answer;
}

int main() 
{
    solution(2, { 1, 1, 1, 1, 2, 2, 2, 3 });
}