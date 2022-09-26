// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        int k = n - i + 1;
        while(j<=k){
            cout<<j<<" ";
            j++;
        }
        int g = 2;
        while(g<=i){
            cout<<"* ";
            g++;
        }
        int l = 2;
        while(l<=i){
            cout<<"* ";
            l++;
        }
        int c = n-i+1;
        while(c){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}