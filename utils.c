#include "push_swap.h"


void swap_int(int *a , int *b){
    (*a)+=(*b); 
    (*b)=(*a)-(*b) ; 
    (*a)-=(*b); 
}