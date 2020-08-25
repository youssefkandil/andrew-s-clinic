//
//  reading_writing.cpp
//  Andrew_clinic
//
//  Created by Youssef on 8/22/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#include "reading_writing.hpp"


re_wr :: re_wr(){}

patient re_wr :: read_patient(string path){
    patient restore;
    read.open(path,ios::in);
   
//    if (!read.is_open()){
//           return ;
//       }
    
    string line1="";
    string line2="";
    string line3="";
    string fname="";
    string mname="";
    string lname="";
    string id = "";
    string number = "";
    string day="";
    string month="";
    string year="";
    string street="";
    string city="";
    string country="";
    
    getline(read , line1);
    stringstream m(line1);
    
    getline(m, fname, ',');
    getline(m, mname, ',');
    getline(m, lname, ',');
    getline(m, id, ',');
    getline(m, number, ',');
    
    getline(read , line2);
    stringstream n(line2);
    
    getline(n, street, ',');
    getline(n, city, ',');
    getline(n, country, ',');
    
    getline(read , line3);
    stringstream s(line3);
    
    getline(s, day, ',');
    getline(s, month, ',');
    getline(s, year, ',');
    
    
    restore.set_name(fname, mname, lname);
    restore.set_birthdate(stoi(day), stoi(month), stoi(year));
    restore.set_ID(id);
    restore.set_address(street, city, country);
    restore.set_phone(number);
    
    
    read.close();
    return restore;;
}
void re_wr :: write_patient(string path, patient x){
//    if (<#condition#>) {
//        <#statements#>
//    }
    write.open(path, std::ofstream::out | std::ofstream::trunc);
    write<<x.get_name().first_name<<","<<x.get_name().middle_name<<","<<x.get_name().last_name;
    write<<x.get_ID()<<","<<x.get_phone()<<endl;
    write<<x.get_address().street<<","<<x.get_address().city<<x.get_address().country;

    
    
    
    
    
    write.close();
    
}


re_wr :: ~re_wr(){}
