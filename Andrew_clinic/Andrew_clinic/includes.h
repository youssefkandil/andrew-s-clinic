//
//  includes.h
//  Andrew_clinic
//
//  Created by Youssef on 8/10/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef includes_h
#define includes_h
#include <fstream>
#include<string>
#include<iostream>
#include <vector>
#include <sstream>
using namespace std;

struct Name{
    string first_name;
    string last_name;
    string middle_name;
    
};

struct Date{
    int day;
    int month;
    int year;
};

struct Time{
    int hours;
    int mins;
    int sec;
};
struct Address{
    string street;
    string city;
    string country;
};

struct Work{
    string occupation;
    string company;
    Address work_address;
};



#endif /* includes_h */
