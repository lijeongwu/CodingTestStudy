// 8-3 진료순서 정하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> e(emergency); // emergency 벡터를 복사한 벡터 e 생성
    sort(e.begin(),e.end(), greater<int>()); // greater()라는 비교 함수를 주어 숫자가 클수록 앞으로 오게 함

    for(int i=0; i<emergency.size(); i++){
        for(int j=0; j<e.size(); j++){
            if (emergency[i] == e[j]){
                answer.push_back(j+1);
            }
        }
    }
    return answer;
}