#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Hanoi(int n, int from, int to, int temp, vector<vector<int>>& answer) {
    if (n == 1) {
        cout << from << " → " << to << endl;
        answer.emplace_back(vector<int>{from, to});
    }
    else {
        Hanoi(n - 1, from, temp, to, answer);  // 1. n-1개를 보조 기둥으로 이동
        cout << from << " → " << to << endl;  // 2. 가장 큰 원반 이동
        answer.emplace_back(vector<int>{from, to});
        Hanoi(n - 1, temp, to, from, answer);  // 3. 보조 기둥의 n-1개를 목표로 이동
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    Hanoi(n, 1, 3, 2, answer);

    return answer;
}

int main() {
    solution(5);
}