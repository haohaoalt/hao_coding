#include<iostream>
#include<csignal>
#include<unistd.h>
using namespace std;
void signalHander(int signum){
    cout << "Interrupt signal (" << signum << ") received.\n";
    // cleanup and close up stuff here
    // terminate program
    exit(signum);
}

int main(){
    int i = 0;
    //register signal SIGNT and signal handler
    signal(SIGINT, signalHander);
    while(++i){
        cout << "Going to sleep...." << endl;
        if (i == 3)
        {
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}