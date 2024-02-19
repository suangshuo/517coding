#include<bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[]) {
    int zkh=0,ykh=0;
    int zf=0;
    char i;
    while(scanf("%c",&i)==1){
        if(i=='('){
            if(yf){
                yf--;
            }
            zkh++;
            zf++;
        }else if(i==')'){
            if(zf){
                zf--;
            }
            ykh++;

        }
    }
    if(zkh==ykh&&!zf)cout<<"YES";
    else cout<<"NO";

    return 0;
}
