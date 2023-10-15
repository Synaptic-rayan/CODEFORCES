#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    string x;
    cin >> n;
    
    if(n == 1){
        cin >> x;
        if(x == "X++" || x == "++X"){
            ans++;
        }
        else if(x == "X--" || x == "--X"){
            ans--;
        }
    }
    else{
        while(n--){
            cin >> x;
            if(x == "X++" || x == "++X"){
                ans++;
            }
            else if(x == "X--" || x == "--X"){
                ans--;
            }
        }
    }
    
    cout << ans << endl;
}
