#include <iostream>
#include <string>
#include <vector>

using namespace std;

void SetBomb(vector<vector<int>>& board, int row, int col) 
{
    if (board.size() <= row || board.size() <= col || row<0 || col<0)
    {
        return;
    }
    if (board[row][col] ==1 || board[row][col] ==2)
    {
        return;
    }
    board[row][col] = 2;
}

int solution(vector<vector<int>> board) {
    int answer = 0;
    int size = board.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[j][i] == 1)
            {
                SetBomb(board, j - 1, i - 1);
                SetBomb(board, j, i - 1);
                SetBomb(board, j + 1, i - 1);
                SetBomb(board, j - 1, i);
                SetBomb(board, j + 1, i);
                SetBomb(board, j - 1, i + 1);
                SetBomb(board, j , i + 1);
                SetBomb(board, j + 1, i + 1);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (board[j][i] == 0)
            {
                ++answer;
            }
        }
    }

    return answer;
}

int main() {
    solution({ {0, 0, 0, 0, 0} ,{0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 0, 1, 1, 0},{0, 0, 0, 0, 0} });
}