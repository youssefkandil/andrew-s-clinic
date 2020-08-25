//
//  template_doubly_linked_list.h
//  Andrew_clinic
//
//  Created by Youssef on 8/13/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef template_doubly_linked_list_h
#define template_doubly_linked_list_h
#include"includes.h"

//template struct node for node formation
// + next pointer and pre pointers are set to point to NULL by default
template  <class type>
struct Node{
    type value;
    Node<type>* next=NULL;
    Node<type>* pre=NULL;
    string n;
};




//--------------------------------------------------------------
//--------------------------------------------------------------

template  <class type>
class list{
private:
    Node<type>* head;
    
    
public:
    Node<type>* get_head(){
        return head;
    }
    
list(){
    head=NULL;
}
    
void  add_first(type x, string y){
    cout<<"in add first"<<endl;
    Node<type>* new_node= new Node<type>;
    new_node->value=x;
    new_node->n=y;
        if (head==NULL) {
            head= new_node;
            new_node->next=NULL;
            new_node->pre=NULL;
        }else{
            new_node->next=head;
            new_node->pre=NULL;
            head= new_node;
    }
    cout<<"out add first"<<endl;
}
void  add_last(type x, string y){
    Node<type>* new_node= new Node<type>;
    new_node->value=x;
    new_node->n=y;
    
    if (head==NULL) {
               head= new_node;
               new_node->next=NULL;
               new_node->pre=NULL;
           }else{
    
    Node<type>* temp = head;
    while (temp->next!=NULL) {
        temp=temp->next;
    }
    new_node->next=NULL;
    new_node->pre=temp;
    temp->next=new_node;
    temp=NULL;
           }
}
void add_middle(type x,int y, string z){
    Node<type>* new_node= new Node<type>;
    new_node->value=x;
    new_node->n=z;
    Node<type>* temp = head;
    int size=0;
    while (temp->next!=NULL && size<y-1) {
        temp=temp->next;
        size++;
    }
    new_node->next= temp->next;
    new_node->pre=temp;
    temp->next=new_node;
    temp=NULL;
}
  
void delete_first(){
    if (head!=NULL) {
        Node<type>* temp= head;
        head= head->next;
        head->pre=NULL;
        delete temp;
        temp=NULL;
    }
}
void delete_last(){
    Node<type>* temp = head;
    while (temp->next!=NULL) {
    temp=temp->next;
    }
    temp->pre->next=NULL;
    delete temp;
    temp=NULL;
}
    
void delete_middle(int x){
    Node<type>* temp = head;
    int size=0;
    
    if(x==0){
        head=NULL;
    }else{
    
    while (temp->next!=NULL && size<x-1) {
        temp=temp->next;
        size++;
    }
    temp->pre->next=temp->next;
    delete temp;
    temp=NULL;
        
    }
}
void  print_list(){
    if (head!=NULL){
    Node<type>* temp;
    temp=head;
        while(temp!=NULL){
        cout<<temp->n<<endl;
        temp = temp->next;
        }cout<<endl;
    }else{
    cout<<"the list is empty!!!"<<endl;
    }
}
    void  empty_list(){
        head=NULL;
        
    }
       
    type get_object(int y){
        Node<type>* temp = head;
        int size=0;

        while (temp!=NULL && size<y) {
               temp=temp->next;
               size++;
           }
        return temp->value;
    }
    
    
    type* get_tick_object(int y){
        Node<type>* temp = head;
        int size=0;

        while (temp!=NULL && size<y) {
               temp=temp->next;
               size++;
           }
        return &temp->value;
    }
    
    
    
    
    int get_size(){
        Node<type>* temp = head;
               int size=0;

               while (temp!=NULL ) {
                      temp=temp->next;
                      size++;
                  }
        return size;
    }
    
~list(){}
};





#endif /* template_doubly_linked_list_h */
