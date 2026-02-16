#include <iostream>
#include <thread>
using namespace std;

int counter=0;

void inc(){ counter++; }

int main(){
    thread t1(inc), t2(inc);
    t1.join(); t2.join();
    cout<<counter;
}
