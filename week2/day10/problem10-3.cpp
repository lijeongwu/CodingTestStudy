// 10-3 공 던지기
#include <string>
#include <vector>

using namespace std;


// people이 음수가 되지 않도록 범위 설정
int solution(vector<int> numbers, int k) {
    int answer = 0;
    int people = 0;
    people = ((2*(k-1)) % numbers.size());
    answer = numbers[people];

    return answer;
}