// 8-2 외계행성의 나이
#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s = to_string(age); // 자릿수를 쉽게 파악하기 위해 string으로 변환

    for (int i=0; i< s.size(); i++){
        answer += (s[i]+49); // ASCII 코드값을 이용해 문자를 출력한다
    }
    return answer;
}