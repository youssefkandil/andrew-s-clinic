//
//  person.cpp
//  Andrew_clinic
//
//  Created by Youssef on 8/10/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#include "person.hpp"

person::person(){
    
    cout<<"Creating a new person"<<endl;
}


string person::get_ID(){

    cout<<"The number of the patient is "<<ID;
    return ID;
}

Name person::get_name(){

    cout<<"The patient's name is "<<name.first_name<<""<<name.middle_name<<""<<name.last_name;
    return name;
}

string person::get_phone(){

    cout<<"The patient's phone is "<<phone;
    return phone;
}

Address person::get_address(){

    cout<<"The patient's address is "<<address.street<<","<<address.city<<","<<address.country<<","<<endl;
    
    return address;
}

Date person::get_birthdate(){

    cout<<"The patient's birthdate is "<<birthdate.day<<"/"<<birthdate.month<<"/"<<birthdate.year<<endl;
    return birthdate;
}

void person::set_ID(string x){

    ID = x;
}

void person::set_name(string x, string y, string z){

    name.first_name=x;
    name.middle_name=y;
    name.last_name=z;
}

void person::set_phone(string x){

    phone = x;
}

void person::set_address(string x, string y, string z){

    address.street=x;
    address.city=y;
    address.country=z;
}

void person::set_birthdate(int x, int y, int z){

    birthdate.day=x;
    birthdate.month=y;
    birthdate.year=z;
}
