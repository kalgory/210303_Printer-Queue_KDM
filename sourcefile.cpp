#include <iostream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;
int main(){
    int testCase=0;
    int N,M;
    cin>>testCase;
    for(int i=0;i<testCase;i++){
        int count=0;
        queue<pair<int,int> > q;
        priority_queue<int> pq;
        cin>>N>>M;
        for(int index=0;index<N;index++){
            int priority=0;
            cin>>priority;
            pq.push(priority);
            q.push(pair<int,int>(priority,index));
        }
        while (!q.empty()){
            int a=q.front().first;
            int index=q.front().second;
            q.pop();
            if(pq.top()==a){
                pq.pop();
                count++;
                if(index==M){
                    cout<<count<<endl;
                    break;
                }
            }
            else q.push(pair<int,int>(a,index));
        }
    }
}