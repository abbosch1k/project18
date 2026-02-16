#include <iostream>
#include <chrono>
using namespace std;

int main(){
    auto now=chrono::system_clock::now();
    auto sec=chrono::duration_cast<chrono::seconds>(now.time_since_epoch());
    cout<<sec.count();
}
