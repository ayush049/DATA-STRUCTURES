#include "ll.h"

// struct node * binarysearch(struct node ** list,int key){
//     struct node * p=*list;
//     struct node * mid;
//     if(p!=NULL){
//         mid=middle(list);
//         if(key==mid->info)
//             return mid;
//         else{
//             if(key<mid->info){
//                 mid->next=NULL;
//                 binarysearch(&p,key);}
//             else{
//                 p=mid->next;
//                 binarysearch(&p,key);}
//         }
//     }
//     else 
//         return NULL;
// }

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
    struct node * ind=binarysearch(&list1,key);
    if(ind==NULL){
        cout<<"Element is not in the list";
    }
    else {
        cout<<"Element is in the list";
    }

}