#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void task(int id){
    cout<<"Task "<<id<<"\n";
}

int main(){
    vector<thread> pool;
    for(int i=0;i<4;i++)
        pool.emplace_back(task,i);

    for(auto& t:pool)
        t.join();
}
