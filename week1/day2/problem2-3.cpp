// Day2 3. 분수의 덧셈
#include <string>
#include <vector>

using namespace std;
// 유클리드 호제법을 이용한 최대공약수 구하기
int gcd(int a, int b){
    if(b==0){ // b(나머지)가 0이면 a값을 리턴
        return a;
    }
    else{
        return gcd(b,a % b); //a를 b로 나눈 나머지를 이용해 b와 재귀 호출
    }

}  

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;

    int gcd_value = gcd(numer,denom);

    answer.push_back(numer/gcd_value);
    answer.push_back(denom/gcd_value);
    return answer;
}