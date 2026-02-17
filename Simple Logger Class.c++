#include <iostream>
#include <fstream>
using namespace std;

class Logger{
    ofstream file;
public:
    Logger(string name){ file.open(name); }
    void log(string msg){ file<<msg<<"\n"; }
};

int main(){
    Logger log("log.txt");
    log.log("Started");
}
