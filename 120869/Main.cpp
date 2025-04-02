#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for (int i = 0; i < dic.size(); i++)
    {
        for (int j = 0; j < spell.size(); j++)
        {
            auto iter = dic[i].find(spell[j]);
            if (iter != string::npos)
            {
                //exist
                dic[i].erase(iter, 1);
            }
            else {
                dic[i].append(spell[j]);
            }
        }
    }

    for (int i = 0; i < dic.size(); i++)
    {
        if (dic[i].empty())
        {
            answer = 1;
            break;
        }
    }
    return answer;
}

int main() {
    cout << solution({ "p", "o", "s" }, { "sod", "eocd", "qixm", "adio", "soo" }) << endl;
    cout << solution({"z", "d", "x"},{"def", "dww", "dzx", "loveaw"}) << endl;
    cout << solution({"s", "o", "m", "d"},{"moos", "dzx", "smm", "sunmmo", "som"}) << endl;
}