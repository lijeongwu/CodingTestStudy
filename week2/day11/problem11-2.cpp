// 11-2 합성수 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i=2; i<=n; i++){ // 1을 제외하고 2부터 시작
        int count = 0;       // 1과 자기 자신을 제외한 약수를 카운트하는 변수

        for(int j=2; j<i; j++){ // i를 나머지 없이 나눌 수 있는 j가 존재한다면 카운트를 증가시킨다 
            if(i%j==0){
                count++;
                break;
            }

        }
        if(count > 0){ // 카운트가 증가됐다면 answer(합성수의 개수)를 증가시킨다.
            answer++;
        }
    }

    return answer;
}