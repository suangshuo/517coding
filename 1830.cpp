#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int a=n;;a++){
        int b=0;
        for(int i=1;i*i<a;i++){
            if(a%i==0){
                b+=i;
                if(i!=1&&a/i!=i){
                    b+=a/i;
                }
            }
        }
        int num=0;
        for(int i=1;i*i<b;i++){
            if(b%i==0){
                num+=i;
                if(i!=1&&b/i!=i){
                    num+=b/i;
                }
            }
        }
        if(a==num&&a!=b){
            cout<<a<<' '<<b;
            break;
        }
    }

    return 0;
}
