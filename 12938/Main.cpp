#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/12938
/// </summary>
/// <param name="n"></param>
/// <param name="s"></param>
/// <returns></returns>
vector<int> solution(int n, int s) {
	vector<int> answer;

	int mid = s / n;
	int l = s % n;
	if (mid <= 0)
	{
		answer.emplace_back(-1);
		return answer;
	}
	for (int i = 0; i < n; i++)
	{
		answer.emplace_back(mid);
	}
	for (int i = 0; i < l; i++)
	{
		answer[i] += 1;
	}

	sort(answer.begin(), answer.end());

	return answer;
}


int main()
{
	vector<int>	t = solution(7, 13);
	for (int i = 0; i < t.size(); i++)
	{
		cout << t[i] << endl;
	}
}