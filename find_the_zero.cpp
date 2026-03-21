#include <bits/stdc++.h>
using namespace std;

int queryPair(int a, int b){
    cout<<"? "<<a<<" "<<b<<endl;
    cout.flush();

    int r;
    cin>>r;
    if(r==-1) exit(0);
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin>>tests;

    while(tests--){
        int n;
        cin>>n;

        int pos=-1;

        int x=queryPair(1,2);
        if(x==1) pos=1;
        else{
            int y=queryPair(1,3);
            if(y==1) pos=1;
            else{
                int z=queryPair(2,3);
                if(z==1) pos=2;
                else{
                    for(int i=4;i<2*n;i+=2){
                        if(queryPair(i,i+1)==1){
                            pos=i;
                            break;
                        }
                    }
                    if(pos==-1) pos=2*n;
                }
            }
        }

        cout<<"! "<<pos<<endl;
        cout.flush();
    }

    return 0;
}