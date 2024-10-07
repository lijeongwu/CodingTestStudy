// 점의 위치 구하기
#include <string>
#include <vector>

using namespace std;

// 조건문으로 answer에 1,2,3,4 사분면 리턴
int solution(vector<int> dot) {
    int answer = 0;
    if (dot[0] >0 && dot[1] >0){
        answer = 1;
    }
    else if (dot[0] <0 && dot[1] >0){
        answer = 2;
    }
    else if (dot[0] <0 && dot[1] <0){
        answer = 3;
    }
    else{
        answer = 4;
    }
    return answer;
}