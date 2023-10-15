#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minOps = 0;
    bool zeroFound = false;
    int smallestAbsValue = abs(arr[0]);

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroFound = true;
            break;
        }
        else if(abs(arr[i]) < smallestAbsValue){
            smallestAbsValue = abs(arr[i]);
        }
    }

    if(!zeroFound){
        minOps = smallestAbsValue;
    }

    cout << minOps;

    return 0;
}
