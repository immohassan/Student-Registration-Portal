#include"../master_header.h"

course::course(){
    id = 0;
    name = " ";
}

course::course(course &s1){
    id = s1.id;
    name = s1.name;
}

course::course(int a, string n){
    id = a;
    name = n;
}

course::~course(){

}

int course::get_id(){
    return id;
}

void course::set_id(int a){
    id = a;
}

string course::get_c_name(){
    return name;
}

void course::set_c_name(string n){
    name = n;
}