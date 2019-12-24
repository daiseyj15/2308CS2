
#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>

using namespace std;

class Students
{
private:
    struct ListNode
    {
        int ids;
       string name;
       string email;
        double gpa;
        struct ListNode *next;

    };
    ListNode *head;
public:
  Students()
    { head = 0; }



    void appendNode(int,string,string,double);
    void displayList() const;
  ~Students();
};


#endif // STUDENTS_H
