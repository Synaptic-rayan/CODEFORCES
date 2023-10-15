#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
string str;
cin>>str;
string newstr = str.substr(0,2);
for(int i=3; i<str.length(); i+=2){
    newstr+=str[i];
}
cout<<newstr<<endl;
}
}