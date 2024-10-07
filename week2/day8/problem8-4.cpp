// 8-4 순서쌍의 개수
#include <string>
#include <vector>

using namespace std;

int solution(int n) { 
    int answer = 0;
    for(int i=1; i<=n; i++){ // n(입력된 정수)를 나누는 i값이 존재한다면 answer값 1씩 올리기
        if(n%i==0){
            answer++;
        }
    }
    return answer;
}