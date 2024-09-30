// Day2 2.숫자 비교하기
#include <string>
#include <vector>

using namespace std;

// 입력받은 num1과 num2를 비교해 같다면 1,
// 다르다면 -1을 answer에 할당하는 조건문 작성
int solution(int num1, int num2) {
    int answer = 0;
    if (num1 == num2)
    {
        answer = 1;
    }
    else
    {
        answer = -1;
    }
    return answer;
}