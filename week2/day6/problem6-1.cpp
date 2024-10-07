// day6 1. 문자열 뒤집기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    // 문자열 뒤집어서 answer string에 입력
    for(int i= my_string.size() -1; i>=0; i--){
        answer +=(my_string[i]);
    }
    return answer;
}