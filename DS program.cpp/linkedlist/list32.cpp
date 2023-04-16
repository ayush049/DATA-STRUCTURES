#include "ll.h"

struct node* Add_Numbers(struct node*l1,struct node*l2){
    struct node*l3=NULL;
    struct node*p,*q;
    int carry=0,total,sum;
    reversal(&l1);
    reversal(&l2);
    p=l1;
    q=l2;
    while(p!=NULL && q!=NULL){
        total=(p->info+q->info+carry);
        sum=total%10000;
        carry=total/10000;
        p=p->next;
        q=q->next;
        insert_end(&l3,sum);
    }
    while(p!=NULL){
        total=(p->info+carry);
        sum=total%10000;
        carry=total/10000;
        p=p->next;
        insert_end(&l3,sum);
    }
    while(q!=NULL){
    total=(q->info+carry);
    sum=total%10000;
    carry=total/10000;
    q=q->next;
    insert_end(&l3,sum);
    }
    if(carry>0){
        insert_end(&l3,carry);
    }
    traversal(&l3);
    return 0;
}
void reverse(string & str){
    int n = str.length();
    for (int i=0; i<n/2; i++)
        swap(str[i], str[n-i-1]);
}
int main(){
    struct node*l1,*l2;
    l1=NULL;
    l2=NULL;
    string s1;
    getline(cin,s1);
    reverse(s1);
    int i=0;
    for(int i=0 ; i<s1.length() ; i=i+4){
        string r1=s1.substr(i,4);
        reverse(r1);
        insert_end(&l1,stoi(r1));
    }
    string s2;
    getline(cin,s2);
    reverse(s2);
    for(int i=0 ; i<s2.length() ; i=i+4){
        string r2=s2.substr(i,4);
        reverse(r2);
        insert_end(&l2,stoi(r2));
    }
    // traversal(&l1);
    // cout<<endl;
    // traversal(&l2);
    // cout<<endl;
    Add_Numbers(l1,l2);
}