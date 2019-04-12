#include <iostream>
#include <string>
#include <deque>
using namespace std;
int arr[10001];

int main()
{
    int T,temp;
    deque<int> dq;
    string buffer;
    cin>>T;
    while(T--) 
    {
        cin>>buffer;
        if(buffer=="push_front"){
            cin>>temp;
            dq.push_front(temp);
        } else if(buffer=="push_back") {
            cin>>temp;
            dq.push_back(temp);
        } else if(buffer=="pop_front") {
            if(dq.empty()){
                cout<<-1<<endl;
            } else {
                cout<<dq.front()<<endl;
                dq.pop_front();
            }
        } else if(buffer=="pop_back") {
            if(dq.empty()){
                cout<<-1<<endl;
            } else {
                cout<<dq.back()<<endl;
                dq.pop_back();
            }
        } else if(buffer=="size") {
            cout<<dq.size()<<endl;
        } else if(buffer=="empty") {
            cout<<dq.empty()<<endl;
        } else if(buffer=="front") {
            if(dq.empty()){
                cout<<-1<<endl;
            } else {
                cout<<dq.front()<<endl;
            }
        } else if(buffer=="back") {
            if(dq.empty()){
                cout<<-1<<endl;
            } else {
                cout<<dq.back()<<endl;
            }
        }
    }

    return 0;
}