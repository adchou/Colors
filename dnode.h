/********************************************************************
   This file is the dnode.h header file 
   associated dnode and dnode iterator classes for 
   project 4.

      Andrew Chou				October 30, 2019
***********************************************************************/
#include<cstdlib>
#include<iterator>
//#include<"colors.h">



#ifndef DNODE
#define DNODE

template <class T>
class Dnode{

public:
typedef T value_type;
Dnode(const T init_data = T(), Dnode* init_fore = NULL, Dnode* init_back = NULL);
//Dnode();
//~Dnode()

//Accessor Functions
Dnode* get_next()const{ return link_fore;}
Dnode* get_previous()const{ return link_back;}
T get_data()const{return data;}


//Mutator functions
void set_next(Dnode* new_link){
    link_fore = new_link;
}
void set_previous(Dnode* new_previous){
    link_back = new_previous;
}
void set_data(const T& new_data){
    data = new_data;
}


private:
T data;
Dnode* link_fore;
Dnode* link_back;

};







#include "dnode.template"
#endif
