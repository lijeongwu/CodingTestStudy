// day4 2. 피자 나눠먹기 2
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(a%b==0) return b;    
    return gcd(b, a%b);
}

int solution(int n) {
    int answer = 0;
    int m=gcd(n, 6);
    
    answer=n/m;
    
    return answer;
}