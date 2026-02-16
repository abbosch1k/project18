#include <iostream>
#include <future>
using namespace std;

int task(){ return 7; }

int main(){
    future<int> f = async(task);
    cout<<f.get();
}
