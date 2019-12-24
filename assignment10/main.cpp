//  Author: Daisey Jaramillo
//
//  Due Date: April 25, 2019
//  Programming Assignment Number 9
//  Spring 2019 - CS 2308 - 256
//
//  Instructor: Caneo J. Hwang
//


#include <iostream>
#include "Students.h"
#include "StudRec.h"
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    ifstream inputFile;
    inputFile.open("studrecs.txt");

    int numb = 15;
    StudRec reco[numb];
   Students records;
   int id;
   string firstNam;
   string eMail;
   double gPa;

    if (!inputFile)
    {
    cout << "File can't be opened! " << endl;
    return 1;
    }
    for (int i=0; i < numb; i++){
            inputFile >> id;
            inputFile >> firstNam;
            inputFile >> eMail;
            inputFile >> gPa;
    reco[i].setID(id);
    reco[i].setFirstName(firstNam);
    reco[i].setEduEmail(eMail);
    reco[i].setGPA(gPa);
    }

    cout<<fixed<<setprecision(1);
    cout << "       The Student Records From The Unsorted Array" << endl;
    for (int i=0;i< numb;i++) {
        cout << reco[i].getID()<<"  ";
        cout << reco[i].getFirstName()<<" ";
        cout << reco[i].getEduEmail()<<"  ";
        cout << reco[i].getGPA()<< endl;
    }

    inputFile.close();

    cout << endl << endl << "    The Student Records From The Sorted Linked List"<<endl;
    for(int i = 0; i < numb; i++)
    {
        records.insertNode(reco[i].getID(), reco[i].getFirstName(), reco[i].getEduEmail(), reco[i].getGPA());
    }

    records.displayList();

    cout<< endl << endl << "I'm going to delete the node in the Middle!" << endl;
    records.deleteNode(reco[13].getID());
    cout << endl;

    cout << endl << "The Student Records From The Sorted Linked List when the Middle Node is Deleted"<<endl;
    records.displayList();

    cout << endl << endl << "I'm going to insert a node in the Middle now!" << endl;
    records.insertNode(45633,"Wade","wdh44@txstate.edu",4.0);
    cout<<endl;

    cout << endl << "The Student Records From The Sorted Linked List when a Node is Inserted in the Middle"<<endl;
    records.displayList();

    return 0;
}

