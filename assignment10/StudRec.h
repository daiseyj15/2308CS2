#ifndef STUDREC_H
#define STUDREC_H
#include <string>

using namespace std;

class StudRec
{
private:

    int identification;
    string firstName;
    string eduEmail;
    double gradePointAvg;

public:

    void setID(int x)
    {identification = x;}
    void setFirstName(string y)
    {firstName = y;}
    void setEduEmail(string z)
    {eduEmail = z;}
    void setGPA(double w)
    {gradePointAvg = w;}

    int getID()
    {return identification;}
    string getFirstName()
    {return firstName;}
    string getEduEmail()
    {return eduEmail;}
    double getGPA()
    {return gradePointAvg;}

};


#endif
