// Day6 3. 짝수 홀수 개수

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int even =0; // 짝수와 홀수의 개수를 담을 변수 생성 및 초기화
    int odd =0;

    for(int i=0; i<num_list.size(); i++){
        if(num_list[i]%2==0){ // 2로 나눈 나머지가 0이라면 짝수, 아니라면 홀수를 증가시키는 for문
            even++;
        }
        else{
            odd++;
        }
    }
    answer.push_back(even); // 순서대로 answer 벡터에 할당
    answer.push_back(odd);
    return answer;
}