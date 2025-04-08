#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/138477
/// </summary>
/// <param name="k"></param>
/// <param name="score"></param>
/// <returns></returns>
vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> top;
    for (int i = 0; i < score.size(); i++)
    {
        if (top.size() > 0)
        {
            if (top.size() < k)
            {
                top.emplace_back(score[i]);
            }
            else {
                sort(top.begin(), top.end());
                if (top[0] < score[i])
                {
                    top.erase(top.begin(), top.begin()+1);
                    top.emplace_back(score[i]);
                }
                sort(top.begin(), top.end());
            }
        }
        else {
            top.emplace_back(score[i]);
        }
        sort(top.begin(), top.end());
        answer.emplace_back(top[0]);
    }
    return answer;
}

int main() {
    vector<int> t = solution(2, { 10, 0, 0, 0, 0, 0, 0 });
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << ", ";
    }
}