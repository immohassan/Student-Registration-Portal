#include"../master_header.h"

teacher::teacher(){
    code = 0;
    name = " ";
}

teacher::teacher(teacher &s1){
    code = s1.code;
    name = s1.name;
}

teacher::teacher(int a, string n){
    code = a;
    name = n;
}

teacher::~teacher(){

}

int teacher::get_code(){
    return code;
}

void teacher::set_code(int a){
    code = a;
}

string teacher::get_t_name(){
    return name;
}

void teacher::set_t_name(string n){
    name = n;
}