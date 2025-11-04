#include <iostream>
#include <string>

using namespace std;

int main(void){
    string S; //  한글 (UTF-8 : 3Byte)
    int N;
    cin >> S;

    // 3바이트
    N = ((S[0] & 255) - 234) * 4096 + ((S[1] & 255) - 176) * 64 + (S[2] & 255) - 127;
    
    cout << N;
    return 0;
}
