#include <iostream>
using namespace std;

int main(){
    int a=1,b=2;
    int* p=&a;
    int* q=&b;
    swap(p,q);
    cout<<*p<<" "<<*q;
}
