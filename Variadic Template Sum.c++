#include <iostream>
using namespace std;

template<typename T>
T sum(T t){ return t; }

template<typename T, typename... Args>
T sum(T first, Args... args){
    return first + sum(args...);
}

int main(){
    cout<<sum(1,2,3,4);
}
