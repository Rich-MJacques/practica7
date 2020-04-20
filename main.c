#include <stdio.h>
#include <stdlib.h>
#include "Clist.h"

int main(){
    clist *l;
    l =create_list();
    add_init(l,3);
    delete_list(l);
    add_init(l,4);
     print_list(l);
    add(l,5,2);
    add(l,7,3);
     print_list(l);
    remove_data(l,4);
     print_list(l);
    search_pos(l,7);
    search_data(l,5);
    print_list(l);
    delete_end(l);
    delete_init(l);
     print_list(l);
    printf("Terminé");
    return 0;
}