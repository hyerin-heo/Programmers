#include <iostream>
#include <string>
#include <vector>

using namespace std;

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/12947?language=cpp
/// </summary>
/// <param name="x"></param>
/// <returns></returns>
bool solution(int x) {
    bool answer = true;
	string str = to_string(x);
	int a = 0;

	for (int i = 0; i < str.length(); i++)
	{
		a+=str[i] - '0';
	}

	if (x%a != 0)
	{
		answer = false;
	}

    return answer;
}

int main() 
{
	cout << solution(10) << endl;
	cout << solution(11) << endl;
	cout << solution(12) << endl;
	cout << solution(13) << endl;
}