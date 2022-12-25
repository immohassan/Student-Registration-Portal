#include"../master_header.h"

course_reg::course_reg(){
    course_id = 0;
    teacher_id = 0;
}
course_reg::course_reg(int a, int b){
    course_id = a;
    teacher_id = b;
}

course_reg::course_reg(course_reg &cr1){
    
    course_id = cr1.course_id;
    teacher_id = cr1.teacher_id;
}

int course_reg::get_course_id(){
    return course_id;
}

int course_reg::get_teacher_id(){
    return teacher_id;
}
void course_reg::set_course_id(int a){
    course_id = a;
}

void course_reg::set_teacher_id(int a){
    teacher_id =a ;
}

