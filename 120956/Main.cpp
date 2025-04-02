#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> b = { "aya", "ye", "woo", "ma" };

int solution(vector<string> babbling) {
    int answer = 0;
	for (int i = 0; i < babbling.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			auto iter = babbling[i].find(b[j]);
			if (iter != string::npos)//exist
			{
				babbling[i].erase(iter, b[j].size());
				babbling[i].insert(iter, " ");
			}
		}
	}

	for (int i = 0; i < babbling.size(); i++)
	{
		babbling[i].erase(remove(babbling[i].begin(), babbling[i].end(), ' '), babbling[i].end());
		if (babbling[i].empty())
		{
			++answer;
		}
	}
    return answer;
}

int main() 
{
	cout << solution({ "aya", "yee", "u", "maa", "wyeoo" }) << endl;
	cout << solution({ "ayaye", "uuuma", "ye", "yemawoo", "ayaa" }) << endl;
	//"aya", "ye", "woo", "ma"
	cout << solution({ "ayawyeomao", "ayaye", "ye", "woomayeye", "maya" }) << endl;//2
}