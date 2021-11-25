#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,p;
    cin>>n>>p;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int price=0;
    for(int i=0;i<n;i++){
        price+=(i/p+1)*a[i];
    }
    cout<<price<<endl;
    return 0;
}