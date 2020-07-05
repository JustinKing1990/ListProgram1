//g++ -std=c++1z TestList.cpp -o TestList && ./TestList
#include "List.hpp"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    typedef List1<int> IntegerList;
    IntegerList list1, list2, list3;
    int xi = 1;
    cout<<"TESTING THE ADDRIGHTFRONT FUNCTION!"<<endl;
    cout<<"Adding "<<xi<< " to the right hand side of list1"<<endl;
    list1.addRightFront(xi);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    xi = 2;
    cout<<"\nAdding "<<xi<< " to the right hand side of list1"<<endl;
    list1.addRightFront(xi);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    xi = 3;
    cout<<"\nAdding "<<xi<< " to the right hand side of list1"<<endl;
    list1.addRightFront(xi);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nTESTING THE ASSERT FUNCTION (a few times)!"<<endl;
    list1.advance();
    list1.advance();
    list1.advance();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nADDING VALUES TO RIGHT HAND SIDE!"<<endl;
    xi = 4;
    list1.addRightFront(xi);
    xi = 5;
    list1.addRightFront(xi);
    xi = 6; 
    list1.addRightFront(xi);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nTESTING THE MOVE TO START FUNCTION!"<<endl;
    list1.moveToStart();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nADDING SOME VALUES BACK INTO RIGHT HAND SIDE!"<<endl;
    xi=7;
    list1.addRightFront(xi);
    xi=8;
    list1.addRightFront(xi);
    xi=9;
    list1.addRightFront(xi);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nTESTING THE ASSERT FUNCTION (a few times)!"<<endl;
    list1.advance();
    list1.advance();
    list1.advance();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nTESTING THE MOVE TO FINISH FUNCTION!"<<endl;
    list1.moveToFinish();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nCLEARING THE LISTS FOR NEXT TESTS!"<<endl;
    list1.clear();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nTESTING THE REMOVE RIGHT FRONT FUNCTION WITH ERROR!"<<endl;
    list1.removeRightFront(xi);
    xi = 10;
    cout<<"\nAdding "<<xi<<" to the right hand side of the list"<<endl;
    list1.addRightFront(xi);
    xi =0;
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nTESTING THE REMOVE RIGHT FRONT FUNCTION WITHOUT ERROR!"<<endl;
    list1.removeRightFront(xi);
    cout<<"The removed value is: "<<xi<<endl;
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nADDING VALUES BACK INTO THE LIST!"<<endl;
    xi=11;
    list1.addRightFront(xi);
    xi=12;
    list1.addRightFront(xi);
    xi = 13;
    list1.addRightFront(xi);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nGENERATING A SECOND LIST FOR TESTING!"<<endl;
    xi = 14;
    list2.addRightFront(xi);
    xi = 15;
    list2.addRightFront(xi);
    xi = 16;
    list2.addRightFront(xi);
    cout<<"List2 is now: ";
    list2.outputList();
    cout<<"\nThe size of list2 right hand side is: "<<list2.rightLength();
    cout<<"\nThe size of list2 left hand side is: "<<list2.leftLength();
    cout<<"\nTESTING THE SWAP RIGHTS FUNCTION!"<<endl;
    list1.swapRights(list2);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList2 is now: ";
    list2.outputList();
    cout<<"\nTESTING THE RIGHT FRONT FUNCTION!"<<endl;
    cout<<"The first value of the right hand side of list1 is: "<<list1.rightFront();
    cout<<"\nTESTING THE TRANSFER FROM FUNCTION!"<<endl;
    list2.transferFrom(list1);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList2 is now: ";
    list2.outputList();
    cout<<"\nTransferring again"<<endl;
    list1.transferFrom(list2);
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList2 is now: ";
    list2.outputList();
    cout<<"\nTESTING THE OPERATOR = FUNCTION!"<<endl;
    list2=list1;
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList2 is now: ";
    list2.outputList();
    cout<<"\nTESTING THE REPLACE RIGHT FRONT FUNCTION!"<<endl;
    xi = 17;
    list1.replaceRightFront(xi);
    cout<<"The replaced value is: "<<xi<<endl;
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList2 is now: ";
    list2.outputList();
    cout<<"\nMOVING SOME VALUES FOR FUTURE TESTS!"<<endl;
    list1.advance();
    list1.advance();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nMOVING VALUES INTO NEW LIST!"<<endl;
    list3 = list1;
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList3 is now: ";
    list3.outputList();
    cout<<"\nMOVING MORE VALUES AROUND"<<endl;
    list3.moveToStart();
    list1.moveToStart();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList3 is now: ";
    list3.outputList();
    cout<<"\nTESTING MULTIPLE FUNCTION CALLS AT ONCE!"<<endl;
    list3.addRightFront(list1.rightFront());
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList3 is now: ";
    list3.outputList();
    cout<<"\nCLEARING ALL LISTS!"<<endl;
    list1.clear();
    list2.clear();
    list3.clear();
    cout<<"List1 is now: ";
    list1.outputList();
    cout<<"\nList2 is now: ";
    list2.outputList();
    cout<<"\nList3 is now: ";
    list3.outputList();
    cout<<"\nThe size of list1 right hand side is: "<<list1.rightLength();
    cout<<"\nThe size of list1 left hand side is: "<<list1.leftLength();
    cout<<"\nThe size of list2 right hand side is: "<<list2.rightLength();
    cout<<"\nThe size of list2 left hand side is: "<<list2.leftLength();
    cout<<"\nThe size of list3 right hand side is: "<<list3.rightLength();
    cout<<"\nThe size of list3 left hand side is: "<<list3.leftLength();
    cout<<"\n";
    
}