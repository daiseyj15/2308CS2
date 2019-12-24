
#include "Students.h"
#include <iostream>

using namespace std;

void Students::insertNode(int ident, string nickna, string mail, double num)
{
    ListNode *newNode; // to point to a new node
    ListNode *nodePtr; // to move through the list
    ListNode *previousNode = 0;

    // Allocate a new node and store num there
    newNode = new ListNode;
    newNode->ids = ident;
    newNode->name = nickna;
    newNode->email = mail;
    newNode->gpa = num;

    //if there are no nodes in the list
    //make newNode the first node.

    if(!head)
    {
        head = newNode;
        newNode->next = 0;
    }

    else
    {

        nodePtr = head;
        previousNode = 0;


        while (nodePtr != 0 && nodePtr->ids < ident)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

    if(previousNode==0)
    {
       head = newNode;
       newNode->next = nodePtr;
    }
    else
    {
        previousNode->next = newNode;
        newNode->next = nodePtr;
    }

    }
}
void Students::deleteNode(int ident)
{
    ListNode *nodePtr;
    ListNode *previousNode;

    if(!head)
        return;
    if(head->ids == ident)
    {
        nodePtr = head->next;
        delete head;
        head = 0;
    }
    else
    {
        nodePtr = head;

        while(nodePtr != 0 && nodePtr->ids != ident)
        {
            previousNode = nodePtr;
            nodePtr  = nodePtr->next;
        }

        if(nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
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
