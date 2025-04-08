#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool IsGreater(char left, char right) {
    return left > right;
}

string solution(string s) {
    string answer = "";
    vector<char> sArr;
    sArr.reserve(s.length());
    for (int i = 0; i < s.length(); i++)
    {
        sArr.emplace_back(s[i]);
    }
    sort(sArr.begin(), sArr.end(), IsGreater);
    for (int i = 0; i < sArr.size(); i++)
    {
        answer += sArr[i];
    }
    return answer;
}

int main() {
    cout << solution("Zbcdefg") << endl;
}