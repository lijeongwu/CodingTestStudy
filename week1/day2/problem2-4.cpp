// Day2 4.배열 두배 만들기
#include <string>
#include <vector>

using namespace std;

// numbers의 크기와 동일하게 answer 벡터의 크기를 지정해준 뒤
// numbers 벡터의 크기만큼 반복하는 for문으로 두 배의 숫자를 answer에 입력
vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size());

    for(int i=0; i<numbers.size(); i++)
    {
        answer[i] = numbers[i] * 2 ;
    }

    return answer;
}