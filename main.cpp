#include <iostream>
#include <map>

using namespace std;


int main() {
    int n = 0; // 반에 있는 학생 수

    int min_ans = 0;
    int max_ans = 0;

    cin>>n;

    map<int,string> db;

    for(int i=0;i<n;i++){
        //초기화
        string human;
        int dd = 0;
        int mm = 0;
        int yy = 0;
        int year = 0;
        cin>>human>>dd>>mm>>yy;

        //입력시 나이를 1990-01-01부터 계산해서 저장한다.
        year = dd+(mm-1)*30+(yy-1990)*365;
        //year가 높을수록 나이가 낮게 된다.

        db.insert({year,human});

    }

    for(auto iter=db.begin();iter!=db.end();iter++){

        if(iter->first < min_ans){

        }

    }
}