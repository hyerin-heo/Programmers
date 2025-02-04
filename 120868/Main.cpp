#include <vector>

using namespace std;

/// <summary>
/// https://school.programmers.co.kr/learn/courses/30/lessons/120868
/// </summary>
/// <param name="sides"></param>
/// <returns></returns>
int solution(vector<int> sides) {
	int answer = 0;

	int maxLengthIndex = sides[0] > sides[1] ? 0 : 1;

	//sides중 하나가 제일 큼
	int maxLength = sides[maxLengthIndex];
	int sideLength = sides[(maxLengthIndex + 1) % 2];

	for (int i = 1; i <= maxLength; i++)
	{
		if (i + sideLength > maxLength)
		{
			++answer;
		}
	}

	//나머지가 젤 김
	for (int i = maxLength + 1; i < maxLength + sideLength; i++)
	{
		++answer;
	}


	return answer;
}

int main()
{
	solution({ 11, 7 });
}