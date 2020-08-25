//
//  patient.hpp
//  Andrew_clinic
//
//  Created by Youssef on 8/10/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef patient_hpp
#define patient_hpp
#include"person.hpp"
#include <stdio.h>
#include "template_doubly_linked_list.h"
class patient: public person{
  
private:
    string patient_history;
    
public:
    list<string> remarks;
    
    patient();
    string get_history();
    void set_history(string);
    ~patient();
};




#endif /* patient_hpp */
