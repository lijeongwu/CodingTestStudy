// 배열 회전시키기
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int n = 0;
    if (direction == "right"){ // 오른쪽 방향이면 numbers 배열의 마지막 요소를 제일 먼저 answer에 넣은 뒤
        n = numbers[numbers.size()-1];
        answer.push_back(n);
        for(int i=0; i<numbers.size()-1; i++){ // 나머지 요소들을 입력
            answer.push_back(numbers[i]);
        }
    }
    else{
        for (int j=1; j<numbers.size(); j++){ // 왼쪽 방향이면 numbers 배열의 첫 번째 요소 빼고 모두 입력
            answer.push_back(numbers[j]);
        }
        n = numbers[0];                       // answer 배열의 마지막 요소로 numbers 배열의 첫번째 요소 입력
        answer.push_back(n);
    }
    return answer;
}