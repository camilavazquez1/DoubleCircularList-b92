//
// Created by rarce on 03/10/20.
//

#ifndef DOUBLECIRCULARLIST_JOB_H
#define DOUBLECIRCULARLIST_JOB_H


#ifndef CPUSCHEDULER_JOB_H
#define CPUSCHEDULER_JOB_H

#include <string>
#include <iostream>
using namespace std;


class Job {
private:
    int id;
    int start;
    int duration;
public:
    Job(int _id, int _start, int duration);
    void display(ostream &out);
};

ostream& operator<<(ostream &out, Job &j);

#endif //CPUSCHEDULER_JOB_H

#endif //DOUBLECIRCULARLIST_JOB_H