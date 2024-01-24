# cpp stl 종류

pair : first와 second로 구성된 컨테이너

vector : 배열과 비슷, 맨 끝 삽입,삭제 위치 참조 O(1)
중간 삽입 삭제 O(n)

deque

list

forward_list

set

map

https://ssocoit.tistory.com/24

# 출력 자리수 맞추기

cout.width(문자폭);
cout.fill(채울 문자);

```c++
    cout.width(2);
    cout.fill('0');
```

숫자 2자리 고정으로, 1자리라면 앞에 0을 붙여줌.
일회성으로 작동하는 것임. - 한번 out하고 다시 사용 시 다시 작성해야함.

# 입출력속도에 대해서

cin, cout을 사용하면 기본적으로 느려짐.

ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

해주면 개선 가능.

이때 endl을 사용하면 느려짐. -> "\n"으로 개행

# cin으로 입력 받을 때

공백도 구분기호로 사용되어질 수 있다. -> 기본으로 그렇게 됨.

# list 사용법

listname.push_back(1);
listname.push_front(1);

이런식으로 사용한다.

# 소수점 cout

cout<<fixed;
cout.precision(1);

위는 소수점 표기 범위 고정하는 것, 아래는 소숫점 몇번째까지 나오게 하는지

# 별찍기에서

특정 루프의 중간을 기준으로 대칭일 때, 중간을 기준으로 부호가 반대

n-i-1>j 였다면, i-n+1>j 같은 방식으로

