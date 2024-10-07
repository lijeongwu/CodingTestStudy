// 11-3 최댓값 만들기
#include <string>
#include <vector>
#include <algorithm> // algorithm 라이브러리를 활용

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end()); // 오름차순 정렬이기 때문에 맨 뒤의 두 개의 값을 리턴

    answer = numbers[numbers.size()-1] * numbers[numbers.size()-2];
    return answer;
}