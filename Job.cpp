//
// Implementacion clase Job 
// Camila Vazquez Rodriguez
// 801-18-7684
//


#include "Job.h"
#include <iostream>
using namespace std;


Job::Job(int _id, int _start, int _duration) :
        id(_id), start(_start), duration(_duration) {}


string Job::toString() const {
    return "[" + to_string(id) + " " + to_string(start) + " " + to_string(duration) + "]";
}

int Job::Getid(){
    return id;
}


