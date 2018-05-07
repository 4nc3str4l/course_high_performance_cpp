#pragma once

#include <iostream>
#include <thread>

using namespace std;

class Thread
{
private:
    thread *m_Thread;
    bool m_Stopped;
    void run();
public:
    Thread();
    ~Thread();

    void start();
    void stop();
    void join();
    void detach();
};