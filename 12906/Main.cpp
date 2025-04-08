#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/12906
/// </summary>
/// <param name="arr"></param>
/// <returns></returns>
vector<int> solution(vector<int> arr)
{
    auto iter = unique(arr.begin(), arr.end());
    arr.erase(iter, arr.end());
    return arr;
}

int main() {
    solution({ 1,1,3,3,0,1,1 });
}