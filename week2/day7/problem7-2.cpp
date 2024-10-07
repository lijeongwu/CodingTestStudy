// 7-2 각도기
#include <string>
#include <vector>

using namespace std;

int solution(int angle) { // 각도 범위에 따라 answer 값을 다르게 할당하기
    int answer = 0;
    if (angle == 180){
        answer = 4;
    }
    else if(angle > 90){
        answer = 3;
    }
    else if(angle == 90){
        answer = 2;
    }
    else{
        answer = 1;
    }
    return answer;
}