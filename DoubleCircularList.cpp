//
// Created by rarce on 03/10/20.
//

#include "DoubleCircularList.h"

void DoubleCircularList::add(const Job& data){
   
    DNode* newNode = new DNode(data);
    DNode* tail;

  if (head == NULL){
        
        head = newNode;
        newNode->next = newNode->prev = newNode;
        head->prev = newNode; 
  }
  else {
      tail = head->prev;
      //new_node = tail->next;
      tail->next = newNode;
      newNode->prev = tail;
      newNode->next = head;
      head->prev = newNode;
      tail = newNode;

  }
}

DNode* DoubleCircularList::removeCurrent(){
    DNode* tail, *curr, *bye;
    
    if (head == NULL) {
        return NULL;
    }
    else if (head != NULL) {
        if (head = head->prev) {
            curr = head;
            bye = curr;
            curr = NULL;
            head = curr;
            return bye;
        }

        else {
            tail = head->prev;
            curr = head;
            bye = curr;
            curr = curr->next;
            head = curr;
            bye->prev = bye->next = NULL;
            curr->prev = tail;
            tail->next = curr;
            return bye;
        }
    }
}

DNode* DoubleCircularList::getCurrent() {
  
    if (head == NULL)return head;
    return head; 
}

void DoubleCircularList::next(){
   
    if (head!= NULL && head!= head->prev) head = head->next;       
}

bool DoubleCircularList::isEmpty(){
    if (head == NULL)return true;
    return false;
}

string DoubleCircularList::toString() const {
    string res= "[";
    DNode* tail = head->prev, *curr = head;
 
    while (curr != NULL) {
        res += curr->data.toString;
        if (curr!= tail) res = " ";
        curr = curr->next;
    }
    res = "]";
    return res;
}
