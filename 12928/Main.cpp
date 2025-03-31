#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> t = {};
    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            auto iter = find(t.begin(), t.end(), i);
            if (iter != t.end())
            {
                break;
            }
            answer += i;
            t.emplace_back(i);
            int a = n / i;
            if (a != 0)
            {
                iter = find(t.begin(), t.end(), a);
                if (iter != t.end())
                {
                    break;
                }
                answer += a;
                t.emplace_back(a);
            }
        }
    }
    return answer;
}

int main() {
    cout << solution(12) << endl;
    cout << solution(5) << endl;
    cout << solution(70) << endl;//1,70,2,35,5,12,7,10
    cout << solution(0) << endl;//0
    cout << solution(1) << endl;//1
    cout << solution(2) << endl;//1,2
    cout << solution(16) << endl;//1,16,2,8,4
}