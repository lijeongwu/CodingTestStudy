// day4. 피자 나눠 먹기 1
#include <string>
#include <vector>

using namespace std;

// N을 7로 나누었을 때 딱 나누어 떨어지면 그 값을 피자 판수
// 나누어 떨어지지 않는다면 1을 더해 피자 판수를 구한다
int solution(int n) {
    int answer = 0;
    if (n%7==0)
    {
        answer = n/7;
    }
    else
    {
        answer = (n/7)+1;
    }
   
    return answer;
}