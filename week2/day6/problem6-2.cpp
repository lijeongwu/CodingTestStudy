// day6 2. 직각삼각형 출력하기
#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=-1; j<i; j++){ 
            cout << "*";

        }
        cout << endl;
    }
    return 0;
}