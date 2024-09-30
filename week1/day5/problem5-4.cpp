// day5 4. 배열 뒤집기
#include <string>
#include <vector>

using namespace std;

// 배열의 크기 -1만큼 반복하는 반복문을 생성
vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int i=(num_list.size()-1); i>=0; i--)
    {
        answer.push_back(num_list[i]); // 벡터 answer에 num_list 벡터의 요소들을 거꾸로 차례대로 집어넣는다
    }
    return answer;
}