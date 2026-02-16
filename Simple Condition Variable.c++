#include <iostream>
#include <thread>
#include <condition_variable>
using namespace std;

mutex m;
condition_variable cv;
bool ready=false;

void worker(){
    unique_lock<mutex> lock(m);
    cv.wait(lock,[](){return ready;});
    cout<<"Done";
}

int main(){
    thread t(worker);
    {
        lock_guard<mutex> lock(m);
        ready=true;
    }
    cv.notify_one();
    t.join();
}
