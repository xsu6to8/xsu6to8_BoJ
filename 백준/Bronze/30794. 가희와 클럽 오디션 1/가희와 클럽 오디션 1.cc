#include <iostream>
#include <string>

using namespace std;

int main() {
    int lv;
    string judgment;
    
    cin >> lv >> judgment;
    
    static int perfect_streak = 0;

    int score = 0;
    
    if (judgment == "miss") {
        score = 0;
    } else if (judgment == "bad") {
        score = 200 * lv; 
    } else if (judgment == "cool") {
        score = 400 * lv; 
    } else if (judgment == "great") {
        score = 600 * lv; 
    } else if (judgment == "perfect") {
        perfect_streak++; 
        score = perfect_streak * lv * 1000; 
    }
    
    cout << score << endl;
    
    return 0;
}
