//
// Implementacion de la clase para la lista 
// circular doblemente enlazada. 
// Camila Vazquez Rodriguez
// 801-18-7684
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
      tail->next = newNode;
      newNode->prev = tail;
      newNode->next = head;
      head->prev = newNode;
      tail = newNode;
  }

}

DNode* DoubleCircularList::removeCurrent() {


    if (head == NULL) return NULL;

  
     DNode* currnode = head;
     DNode* tail = head->prev;
     DNode* bye;

     if (head == tail) {
         head = NULL;
         return currnode;
     }
     else {
         bye = head;
         head = head->next;
         return bye;
    }
}

DNode* DoubleCircularList::getCurrent() {
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
    
    if(head == NULL) return "none";

    DNode *currnode = head;
    string counter;
    counter.append(currnode->data.toString());
    for(currnode = head->next ; head != currnode;currnode = currnode->next){
        counter.append(currnode->data.toString());
    }
    return counter;   
}



