//
// Created by rarce on 03/10/20.
//


#include "Job.h"
#include <iostream>
using namespace std;


Job::Job(int _id, int _start, int _duration) :
        id(_id), start(_start), duration(_duration) {}


void Job::display(std::ostream &out) {
    out << " [ " << id << ", " << start <<  ", "  << duration <<  "]" << endl;
}

ostream& operator<<(ostream &out, Job &j) {
    j.display(out);
    return out;
}