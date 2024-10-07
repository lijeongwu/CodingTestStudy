// 12-3 숨어있는 숫자의 덧셈(1)
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(int i=0; i<my_string.size(); i++){
        if( 47 < my_string[i] && my_string[i] < 58){ // 12-2와 동일하게 아스키코드 범위로 숫자 판단
            answer += (my_string[i] -'0'); // 동일하게 int로 변환한 뒤 answer에 더해주기
        }
    }
    return answer;
}