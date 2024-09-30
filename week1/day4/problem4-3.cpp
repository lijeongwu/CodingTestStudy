// day4 3. 피자 나눠먹기3

#include <string>
#include <vector>

using namespace std;

// 인원수 n을 조각 수로 나누었을때, 딱 나누어 떨어진다면 그만큼을 피자의 판수로 정한다
int solution(int slice, int n) {
    int answer = 0;
    if (n%slice ==0)
    {
        answer = n/slice;
    }
    else
    {
        answer = (n/slice) + 1; // 나누어 떨어지지 않는다면 +1을 해준다.
    }
    return answer;
}