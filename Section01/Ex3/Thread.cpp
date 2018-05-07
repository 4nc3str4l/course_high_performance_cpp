#include "Thread.h"

Thread::Thread()
{
    m_Thread = NULL;
    m_Stopped = false;
}

Thread::~Thread()
{
    delete m_Thread;
    m_Thread = NULL;
}

void Thread::run()
{
    while(! m_Stopped)
    {
        cout << this_thread::get_id() << endl;
        this_thread::sleep_for(1s);
    }

    cout << "\nThred " << this_thread::get_id() << " stoped as requested. " << endl;
}


void Thread::stop()
{
    m_Stopped = true;
}

void Thread::start()
{
    m_Thread = new thread(&Thread::run, this);
}

void Thread::join()
{
    m_Thread->join();
}

void Thread::detach()
{
    m_Thread->detach();
}
