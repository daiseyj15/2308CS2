
#include "Students.h"
#include <iostream>

using namespace std;

void Students::appendNode(int ident, string nickna, string mail, double num)
{
    ListNode *newNode; // to point to a new node
    ListNode *nodePtr; // to move through the list

    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->ids = ident;
    newNode->name = nickna;
    newNode->email = mail;
    newNode->gpa = num;
    newNode->next = 0;

    //if there are no nodes in the list
    //make newNode the first node.

    if(!head)
        head = newNode;
    else //Otherwise, insert newNode at the end
    {
        //initialize nodePtr to head of list
        nodePtr = head;

        //find the last node in the list
        while (nodePtr->next)
            nodePtr = nodePtr->next;

        //insert newNode as the last node
        nodePtr->next = newNode;
    }
}

void Students::displayList() const
{
    ListNode *nodePtr;

    nodePtr = head;

    while(nodePtr)
    {
      cout << nodePtr->ids << " ";
      cout << nodePtr->name << " ";
      cout << nodePtr->email << " ";
      cout << nodePtr->gpa << endl;


        nodePtr = nodePtr->next;
    }
}

Students::~Students()
{

}
