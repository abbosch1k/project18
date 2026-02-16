#include <iostream>
using namespace std;

class Singleton{
public:
    static Singleton& get(){
        static Singleton instance;
        return instance;
    }
    void hello(){ cout<<"Hi"; }
};

int main(){
    Singleton::get().hello();
}
