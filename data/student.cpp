#include"../master_header.h"

student::student(){
    roll_no = 0;
    name = " ";
    gender = " ";
}

student::student(student &s1){
    roll_no = s1.roll_no;
    name = s1.name;
    gender = s1.gender;
}

student::student(int a, string n, string c){
    
    roll_no = a;
    name = n;
    gender = c;
}

student::~student(){

}

int student::get_roll_no(){
    return roll_no;
}

void student::set_roll_no(int a){
    roll_no = a;
}

string student::get_name(){
    return name;
}

void student::set_name(string n){
    name = n;
}

string student::get_gender(){
    return gender;
}

void student::set_gender(string c){
    gender = c; 
}