#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> sp = make_shared<int>(5);
    weak_ptr<int> wp = sp;

    if(auto s = wp.lock())
        cout<<*s;
}
