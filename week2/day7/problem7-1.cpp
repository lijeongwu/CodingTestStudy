// 7-1 특정 문자 제거하기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i] != letter[0]){ // letter와 stirng의 문자가 다르다면 answer에 입력
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}