// day3 3. 최빈값 구하기
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> count(1001); // 각 수가 나오는 횟수에 대한 count 배열 생성
    int max = 0;
    int max_index = 0;
    int max_count = 0;

    for(int i=0; i<array.size(); i++)
    {
        count[array[i]]++; // 숫자가 나올 때마다 그 숫자에 대한 count가 1씩 증가
    }

    for(int i=0; i<count.size(); i++)
    {
        if (count[i]>max) // max값보다 큰 count배열 값이 등장할 시의 조건문
        {
            max = count[i]; // max(빈도수)를 변경한 뒤
            max_index = i;  // 최빈값을 변경한다
            max_count=1;    // max_count는 다시 1로 만든다
        }else if(max==count[i])
        {
            max_count++; // 중복된 빈도수가 있는지를 파악하고, 있다면 max_count를 증가시킨다.
        }
    }
    
    if(max_count>1) // 최빈값이 한개가 아니라면 (여러 번 등장한다면) -1을 리턴
    {
        answer = -1;
    }
    else
    {
        answer = max_index; // 최빈값이 한개라면 그 수를 리턴
    }
    return answer;

}