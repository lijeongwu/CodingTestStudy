// 12-2 문자열 정렬하기(1)
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i=0; i<my_string.size(); i++){
        if( 47 < my_string[i] && my_string[i] < 58){ // ASCII 코드 범위로 숫자라면 answer에 추가하는 조건문
            answer.push_back((my_string[i])-'0'); // char to int 변형을 위해 - '0'을 해줌
        }
    }
    sort(answer.begin(),answer.end()); // algorithm 라이브러리의 sort 활용하여 오름차순 정렬
    return answer;
}