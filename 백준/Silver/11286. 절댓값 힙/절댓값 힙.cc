#include<iostream>
#include<queue>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    
    priority_queue<double, vector<double>, greater<>> q;
    
    while(n--){
        long long tmp;
        cin >> tmp;
        if(tmp){
            if(tmp>0){ 
                q.push(tmp);
            }
            else{ 
                q.push(tmp*(-1)-0.1);
            }
        }
        else{
            if(q.empty()){
                cout << 0 << '\n';
            }
            else{
                long long integer = q.top();
                if(integer == q.top()){
                    cout << integer << '\n';
                }
                else{
                    integer = (q.top() + 0.1)*(-1.0);
                    cout << integer << '\n';
                }
                q.pop();
            }
        }
    }
    
    
    return 0;
}