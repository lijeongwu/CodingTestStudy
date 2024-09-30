// day5 3. 나이 출력
#include <string>
#include <vector>

using namespace std;

// 출생연도를 구하기 위해 현재 년도인 2022년에서 나이를 빼준다
int solution(int age) {
    int answer = 0;
    answer = 2022 - age + 1;
    return answer;
} 