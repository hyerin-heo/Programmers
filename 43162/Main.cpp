#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Coordinate
{
    Coordinate(int row, int col) {
        this->row = row;
        this->col = col;
    }
    int row;
    int col;
};

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    int row = 0;
    int col = 1;
    queue<Coordinate> que;
    que.push(Coordinate(row, col));
    while (que.empty())
    {
        Coordinate co = que.front();
        que.pop();
        if (computers[co.row][co.col] == 1)
        {

        }
    }
    return answer;
}

int main() {
    solution(3, { {1, 1, 0} ,{1, 1, 0},{0, 0, 1} });
    solution(3, { {1, 1, 0} ,{1, 1, 1},{0, 1, 1} });
}