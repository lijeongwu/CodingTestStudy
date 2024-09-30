// Day2 1. 두 수의 나눗셈
#include <string>
#include <vector>

using namespace std;

// num1/num2를 먼저 하고 1000을 곱하면 소수점 아래 숫자가 사라지기 때문에
// num1*1000을 먼저 시행
int solution(int num1, int num2) {
    int answer = (num1 * 1000)/num2;
    return answer;
}