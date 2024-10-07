// 7-4 짝수의 합
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=0; i<=n; i++){ // i가 n이 될 때까지 반복하는 for문으로 짝수만 answer에 더한다
        if (i%2==0){
            answer += i;
        }
    }
    return answer;
}