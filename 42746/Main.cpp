#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort(string left, string right) {
    int n = 0;
    string a = left+right;
    string b = right+left;
    return a > b;
}

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/42746?language=cpp#
/// </summary>
/// <param name="numbers"></param>
/// <returns></returns>
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> numberStr;
    numberStr.reserve(numbers.size());
    for (int i = 0; i < numbers.size(); i++)
    {
        numberStr.emplace_back(to_string(numbers[i]));
    }

    sort(numberStr.begin(), numberStr.end(), Sort);
    if (numberStr[0] == "0")
    {
        return "0";
    }
    for (int i = 0; i < numberStr.size(); i++)
    {
        answer.append(numberStr[i]);
    }
    return answer;
}

int main() {
    //cout << solution({ 12, 121 }) << endl; //12121
    //909088989810110
    //cout << solution({ 90, 908, 89, 898, 10, 101 }) << endl;
    //cout << solution({ 90, 908 }) << endl;
    //cout << solution({ 1, 2, 3, 4, 5 }) << endl;
    //cout << solution({ 30, 3 }) << endl;
    //cout << solution({ 1000, 100 }) << endl;
    //cout << solution({ 21, 212 }) << endl; 
    //cout << solution({ 82, 828, 824 }) << endl;
    cin.get();
}