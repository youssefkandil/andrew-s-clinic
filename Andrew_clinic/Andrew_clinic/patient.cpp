//
//  patient.cpp
//  Andrew_clinic
//
//  Created by Youssef on 8/10/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#include "patient.hpp"



patient::patient(){}

string patient:: get_history(){
    return patient_history;
}
void  patient::set_history(string x){
    patient_history=x;
}
patient:: ~patient(){}

