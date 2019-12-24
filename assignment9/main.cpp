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
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    struct StudRec
{
    int identification;
    string firstName;
    string eduEmail;
    double gradePointAvg;
};


    ifstream inputFile;
    inputFile.open("records.txt");

    int numb = 15;
    StudRec reco[numb];
   Students records;

    if (!inputFile)
    {
    cout << "File can't be opened! " << endl;
    return 1;
    }
    for (int i=0; i < numb; i++){
    inputFile >> reco[i].identification;
    inputFile >> reco[i].firstName;
    inputFile >>reco[i].eduEmail;
    inputFile >> reco[i].gradePointAvg;
    }

    cout<<fixed<<setprecision(1);
    cout << "       The Student Records From The Unsorted Array" << endl;
    for (int i=0;i< numb;i++) {
        cout << reco[i].identification<<"  ";
        cout << reco[i].firstName<<" ";
        cout << reco[i].eduEmail<<"  ";
        cout << reco[i].gradePointAvg<< endl;
    }

    inputFile.close();

    cout << endl << endl << "    The Student Records From The Unsorted Linked List"<<endl;
    for(int i = 0; i < numb; i++)
    {
        records.appendNode(reco[i].identification, reco[i].firstName, reco[i].eduEmail, reco[i].gradePointAvg);
    }



  records.displayList();
    return 0;
}

