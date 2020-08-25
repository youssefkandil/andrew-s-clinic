//
//  person.hpp
//  Andrew_clinic
//
//  Created by Youssef on 8/10/20.
//  Copyright © 2020 Youssef. All rights reserved.
//



// this is a test for the github

#ifndef person_hpp
#define person_hpp
#include "includes.h"
#include <stdio.h>

class person{
protected:
    Name name;
    string ID;
    string phone;
    Address address;
    Date birthdate;
    
public:
    person();
    string get_ID();
    Name get_name();
    string get_phone();
    Address get_address();
    Date get_birthdate();

    void set_ID(string);
    void set_name(string,string,string);
    void set_phone(string);
    void set_address(string,string,string);
    void set_birthdate(int,int,int);
    
    ~person(){}
};

#endif /* person_hpp */
