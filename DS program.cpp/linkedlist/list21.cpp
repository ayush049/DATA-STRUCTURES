// Program to find kth node from the last in a single link list

#include "ll.h"

struct node * nodefromlast(struct node ** list,int key){
    struct node * rev=reversal(list);
    struct node * ind=binarysearch(list,key);
    return ind;
}

int main(){
    struct node * list1;
    list1=NULL;
    int key;
    insert_end(&list1,10);
    insert_end(&list1,24);
    insert_end(&list1,31);
    insert_end(&list1,40);
    insert_end(&list1,45);
    cout<<"Enter the key to be searched: ";
    cin>>key;
    struct node * ptr=nodefromlast(&list1,key);
    if(ptr==NULL){
        cout<<"Element is not in the list";
    }
    else {
        cout<<"Element is in the list";
    }

}


