#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 0~3�� �ռ����� �ƴϹǷ� �̸� ����.
    for (int i = 4; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0)
            {
                ++count;
            }
        }
        if (count >=3)
        {
            ++answer;
        }
    }
    return answer;
}

int main() {
    cout << solution(10) << endl;
    cout << solution(15) << endl;
}