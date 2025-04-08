#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int GetDivisorsCount(int num) 
{
	vector<int> divisors;
	for (int i = 1; i <= num; i++)
	{
		auto iter = find(divisors.begin(), divisors.end(), i);
		if (iter != divisors.end())
		{
			return divisors.size();
		}
		if (num%i == 0)
		{
			divisors.emplace_back(i);
			int a = num / i;
			iter = find(divisors.begin(), divisors.end(), a);
			if (iter != divisors.end())
			{
				return divisors.size();
			}
			else 
			{
				divisors.emplace_back(a);
			}
		}
	}
}

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/77884
/// </summary>
/// <param name="left"></param>
/// <param name="right"></param>
/// <returns></returns>
int solution(int left, int right) {
	int answer = 0;
	for (int i = left; i <= right; i++)
	{
		if (GetDivisorsCount(i)%2 == 0)//Â¦¼ö
		{
			answer += i;
		}
		else {//È¦¼ö
			answer -= i;
		}
	}
	return answer;
}

int main()
{
	solution(13, 17);
	solution(24, 27);
}