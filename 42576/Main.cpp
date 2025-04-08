#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/42576
/// </summary>
/// <param name="participant"></param>
/// <param name="completion"></param>
/// <returns></returns>
string solution(vector<string> participant, vector<string> completion) {
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	for (int i = 0; i < completion.size(); i++)
	{
		if (participant[i] != completion[i])
		{
			return participant[i];
		}
	}
    return participant.back();
}

int main() {
	cout << solution({ "leo", "kiki", "eden" }, { "kiki", "eden" }) << endl;
	cout << solution({ "marina", "josipa", "nikola", "vinko", "filipa" }, { "josipa", "filipa", "marina", "nikola" }) << endl;
	cout << solution({ "mislav", "stanko", "mislav", "ana" }, { "stanko", "ana", "mislav" }) << endl;
}