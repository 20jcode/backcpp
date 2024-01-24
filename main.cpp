#include <iostream>
#include <list>

using namespace std;


int main() {
    //입출력 속도 개선을 위해서
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<n;j++){
            if(i<n){ // 중간까지
                if(n-i-1>j){
                    cout<<' ';
                }else {
                    cout<<'*';
                }
            } else {
                if(i-n+1>j){
                    cout<<' ';
                } else {
                    cout<<'*';
                }
            }

        }
        cout<<'\n';
    }

    return 0;

}
