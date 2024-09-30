//day3 4. 짝수는 싫어요
#include <string>
#include <vector>

using namespace std;

// 정수 n을 입력 받았을때 n만큼 반복하는 for문 생성
vector<int> solution(int n) {
    vector<int> answer;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1) // i가 홀수라면 answer 벡터에 입력, 그렇지 않으면 무시
        {
            answer.push_back(i);
        }
    }
    return answer;
}