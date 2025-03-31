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

class A
{
public:
    A() 
    {
        b,c,d = 0;
    }
    virtual ~A() = default;
    virtual void Func(int& a)//�����Լ��� �ƴϹǷ� ������ �ð��� �����Ǵµ� �����Ϸ��� �� �Լ��� �Ϲ��Լ�ó�� ����� �� �ִ�.
    {
        a = 10;
    }

protected:
    int b,c,d = 0;
};

class B : public A
{
public:
    B()
        :A()
    {

    }
    virtual void Func(int& a) override
    {
        a = 20;
    }

private:

};

int main() {
    solution({ {0, 0, 0, 0, 0} ,{0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 0, 1, 1, 0},{0, 0, 0, 0, 0} });
    
    B b;
    A a = b;

    int as = 0;
    b.Func(as);
    cout << "b AS : " << as << endl;
    a.Func(as);
    cout << "a AS : " << as << endl;
}