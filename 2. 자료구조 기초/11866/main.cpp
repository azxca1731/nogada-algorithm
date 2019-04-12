#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
int arr[1001];
int main()
{
    int N,K;
    int count=0;
    queue<int> que;
    
    cin>>N>>K;

    for(int i=1;i<=N;i++){
        que.push(i);
    }

    printf("<");
    while(!que.empty()){
        for(int i=0;i<K-1;i++){
            que.push(que.front());
            que.pop();
        }
        printf("%d",que.front());
        que.pop();
        if(!que.empty())printf(", ");
    }
    printf(">\n");

    return 0;
}