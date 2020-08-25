//
//  temp_queue.h
//  Andrew_clinic
//
//  Created by Youssef on 8/22/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef temp_queue_h
#define temp_queue_h

#include"includes.h"

template<class T>

class queue{
    
   
private:

//    attributes
    int counter_elements;//not used
      public:
     std::vector<T> temp_queue;//used
  
//    methods
    queue();//done
    
    void print();
    void add(T );//done
    void remove();
    ~queue();
 
    
};


template<class T>

queue<T>:: queue(){
    counter_elements=0;
}


template<class T>
void queue<T>::  print(){}


template<class T>
void queue<T>::  add(T new_object ){
   
     
    
    bool flag=true;
    for (int i=0; i<temp_queue.size(); i++) {
        if (temp_queue[i] == new_object) {
            flag=false;
        }
    }
    if (flag==true) {
        
    
    temp_queue.push_back(new_object);
    counter_elements++;
    }
}


template<class T>
void queue<T>:: remove(){
   
   
    temp_queue.erase(temp_queue.begin(), temp_queue.begin()+1);
    counter_elements--;
    
    
}


 template<class T>
queue<T>::~queue(){
    temp_queue.clear();
}



#endif /* temp_queue_h */
