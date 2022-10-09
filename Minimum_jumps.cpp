#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void nobody(){
    int n,flag=1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int jmp=0,m=0,c=0;
    for(int i=0;i<n-1;i++){
        m=max(m,arr[i]+i);
        if(i==c){
            c=m;
            jmp++;
        }
        cout <<"No - " << i << " jmp - " << jmp << " m - " << m << " c - "<< c << "  " << endl;
    }
    if(c<n-1){
        cout << -1 << endl;
    }
    cout << jmp << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        nobody();
    }
}

