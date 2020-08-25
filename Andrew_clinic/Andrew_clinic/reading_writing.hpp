//
//  reading_writing.hpp
//  Andrew_clinic
//
//  Created by Youssef on 8/22/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef reading_writing_hpp
#define reading_writing_hpp
#include"includes.h"
#include <stdio.h>
#include "patient.hpp"
class re_wr{
private:
    fstream  write ;
    fstream read;
 
public:
    re_wr();
    
    patient read_patient(string path);
    void write_patient(string path, patient x);
    
    
    
    
    
    ~re_wr();
};



#endif /* reading_writing_hpp */
