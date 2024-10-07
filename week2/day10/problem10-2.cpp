// 2차원으로 만들기
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;

    for(int i=0; i<num_list.size()/n; i++){
        vector<int> group; // group 벡터 선언 후 for문을 돌며 계속 초기화
        for(int j=0; j<n;j++){
            group.push_back(num_list[i*n+j]); // n개의 연속되는 원소들을 group에 저장
        }
        answer.push_back(group); // group 벡터를 answer 벡터에 저장
    }
    return answer;
}