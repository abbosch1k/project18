#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
int counter=0;

void inc(){
    lock_guard<mutex> lock(m);
    counter++;
}

int main(){
    thread t1(inc), t2(inc);
    t1.join(); t2.join();
    cout<<counter;
}
