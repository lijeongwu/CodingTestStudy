// 11-4 팩토리얼
#include <string>
#include <vector>

using namespace std;

int factorial(int n){ // 재귀적 구조의 factorial 함수 선언
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int solution(int n) {
    int answer = 0;
    int i=0;
    while(factorial(i)<=n){ // n보다 작거나 같을때까지 i를 증가시키며 팩토리얼에 대입
        i++;
    }
    answer = i-1;

    return answer;
}