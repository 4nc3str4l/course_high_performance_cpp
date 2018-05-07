#include<iostream>
#include "Thread.h"

using namespace std;

int main()
{
    Thread thread1, thread2, thread3;

    thread1.start();
    thread2.start();
    thread3.start();

    thread1.detach();
    thread2.detach();
    thread3.detach();

    this_thread::sleep_for(3s);

    thread1.stop();
    thread2.stop();
    thread3.stop();

    this_thread::sleep_for(3s);

    return 0;
}