#include"../master_header.h"

student_reg::student_reg(){
    student_id = 0;
    course_reg_id = 0;
}

student_reg::student_reg(int a, int b){
    student_id = a;
    course_reg_id = b;
}

student_reg::student_reg(student_reg &cr1){
    student_id = cr1.student_id;
    course_reg_id = cr1.course_reg_id;
}

int student_reg::get_student_id(){
    return student_id;
}

int student_reg::get_course_reg_id(){
    return course_reg_id;
}
void student_reg::set_student_id(int a){
    student_id = a;
}

void student_reg::set_course_reg_id(int a){
    course_reg_id =a ;
}
