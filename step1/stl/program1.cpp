#include<bits/stdc++.h>
using namespace std;
int main(){
    //  pairs
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> prr={1,{3,4}};
    cout<<prr.second.second<<" "<<prr.second.first<<endl;
    pair<int,int>a[]={{1,2},{2,5},{5,1}};
    cout<<a[1].second<<endl;

    // vector
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int>vi(5,100);//{100,100,100,100,100}
    vector<int>ve(5);//{0,0,0,0,0}
    vector<int>v1(3,20);//{20,20,20}
    vector<int>vi2(v1);//copies v2 in v1;

    // {1,2,3,4,5}
    vector<int> ::iterator it =v.begin();
    it++;
    cout<<*it<<endl;//2
    it+=2;
    cout<<*it<<endl;//4
    
    cout<<v[0]<<" "<<v.at(0)<<endl;//1
    for(auto it : v){
        cout<<it<<" ";//1 2 3 4 5
    }
    cout<<endl;
    for(vector<int> :: iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";//1 2 3 4 5 
    }
    cout<<endl;
    v.erase(v.begin()+1);//1 3 4 5
    v.erase(v.begin()+1,v.begin()+2);//1 5

    // insert function
    vector<int> v2(3,100);
    v2.insert(v2.begin(),200);//200,100,100,100
    v2.insert(v2.begin()+1,2,10);//200 10 10 100 100 100
    vector<int>v4(2,50);
    v2.insert(v2.begin(),v4.begin(),v4.end());//50 50 200 10 10 100 100 100
    v2.pop_back();//50 50 200 10 10 100 100
    v2.swap(v4);
    v2.clear();
    cout<<v2.empty()<<endl;

    // list
    list <int> ls;
    ls.push_back(1);//1
    ls.push_front(4);//4 1
    ls.emplace_back(5);//4 1 5
    ls.emplace_front(2);//2 4 1 5
    // similar operation like vectors 

    // double queue
    deque<int>dq;
    dq.push_back(1);//1
    dq.emplace_back(2);//1 2
    dq.push_front(3);//3 1 2
    dq.emplace_front(4);// 4 3 1 2
    dq.pop_back();//4 3 1
    dq.pop_front();//3 1

    // stack lifo
    stack<int> st;
    st.push(1); //1
    st.push(2);//1 2 
    st.push(3);//1 2 3
    cout<<st.top()<<endl;//3
    st.pop();
    cout<<st.top()<<endl;//2
    
    //  queue fifo
    queue<int> q;
    q.push(1);//1
    q.push(2);//1 2
    q.push(3);//1 2 3
    cout<<q.front()<<endl; //1
    q.pop();//2 3
    cout<<q.front()<<endl;//2

    // priority queue
    priority_queue<int> pq;
    pq.push(2);//2
    pq.push(1);//2 1
    pq.push(4);// 4 2 1
    cout<<pq.top()<<endl;//4
    pq.pop();
    cout<<pq.top()<<endl;//2

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(2);//2
    pq1.push(1);// 1 2
    pq1.push(4);// 1 2 4
    cout<<pq1.top()<<endl;//1
    pq1.pop();
    cout<<pq1.top()<<endl;//2

    // set
    set<int>s;
    s.insert(1);//1
    s.insert(1);//1
    s.insert(1);//1
    s.insert(3);//1 3
    s.insert(2);//1 2 3
    auto it=s.find(2);
    s.erase(2);

    
}
