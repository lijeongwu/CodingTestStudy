// 12-1 모음 제거
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";


    for(int i=0; i<my_string.size(); i++){ // if문의 조건으로 'aeiou'가 포함되어있다면 answer에 입력하지 않기
        if(my_string[i] != 'a' && my_string[i] != 'e' && my_string[i] != 'i' && my_string[i] != 'o' 
        && my_string[i] != 'u'){
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}