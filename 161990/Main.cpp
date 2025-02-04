#include <iostream>
#include <string>
#include <vector>

using namespace std;

static const char EXSIT_FILE = '#';

struct Point {
    Point(int x, int y)
        : x(x), y(y) {

    }
    int x;
    int y;
};

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/161990?language=cpp
/// </summary>
/// <param name="wallpaper"></param>
/// <returns></returns>
vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    const int y = wallpaper.size();
    const int x = wallpaper[0].length();
    int startX = 0;
    int startY = 0;

    vector<Point> point;

    while (true)
    {
        if (wallpaper[startY][startX] == EXSIT_FILE) 
        {
            point.emplace_back(Point(startX, startY));
        }
        if (startX == x - 1)
        {
            if (startY == y - 1)
            {
                break;
            }
            startX = 0;
            ++startY;
        }
        else {
            ++startX;
        }
    }

    int minX = 50;
    int minY = 50;
    int maxX = 0;
    int maxY = 0;

    for (Point p : point)
    {
        if (p.x > maxX)
        {
            maxX = p.x;
        }
        if (p.y > maxY)
        {
            maxY = p.y;
        }


        if (p.x < minX)
        {
            minX = p.x;
        }
        if (p.y < minY)
        {
            minY = p.y;
        }
    }

    answer.emplace_back(minY);
    answer.emplace_back(minX);
    answer.emplace_back(maxY + 1);
    answer.emplace_back(maxX + 1);

    return answer;
}

int main() 
{
    solution({ "..........", ".....#....", "......##..", "...##.....", "....#....." });
}