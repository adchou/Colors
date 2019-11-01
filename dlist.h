/********************************************************************
   This file is the dnode.h header file 
   associated dnode and dnode iterator classes for 
   project 4.

      Andrew Chou				October 30, 2019
***********************************************************************/
#include<cstdlib>
#include<iterator>
#include<iostream>
#include "dnode.h"


#ifndef DLIST
#define DLIST

template <class T>
class dlist{
public:

dlist();

void front_insert(T entry);
void rear_insert(T entry);
void front_remove();
void rear_remove();
void show();


private:
Dnode<T>* head;
Dnode<T>* tail;


};

#include "dlist.h"
#include "dlist.template"
#endif