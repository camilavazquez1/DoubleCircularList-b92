//
// Clase Job. 
// Camila Vazquez Rodriguez
// 801-18-7684
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
    string toString() const;
    int Getid();
};



#endif //CPUSCHEDULER_JOB_H

#endif //DOUBLECIRCULARLIST_JOB_H
