#include "../master_header.h"
#include<algorithm>

portal::portal()
{
    student_count = 0;
    teacher_count = 0;
    course_count = 0;
    course_reg_count = 0;            // -> Empty constructor is setting all elements of the three
    student_reg_count = 0;           // -> Empty constructor is setting all elements of the three
    for (int i = 0; i < Length; i++) //   arrays in portal to zero and empty string.
    {                                // -> Also it sets all the counts to zero too.
        student_array[i].set_name(" ");
        student_array[i].set_roll_no(0);
        teacher_array[i].set_code(0);
        teacher_array[i].set_t_name(" ");
        course_array[i].set_c_name(" ");
        course_array[i].set_id(0);
        course_r_arr[i].set_course_id(0);
        course_r_arr[i].set_teacher_id(0);
        student_r_arr[i].set_course_reg_id(0);
        student_r_arr[i].set_student_id(0);
    }
}

portal::portal(portal &p1)
{
    student_count = p1.student_count;       // -> Copy Contructor: is copying all the counts of
    teacher_count = p1.teacher_count;       //  previously made portal object.
    course_count = p1.course_count;         // -> Also it will copy all the previous object arrays
    course_reg_count = p1.course_reg_count; //  to this newly born object.
    student_reg_count = p1.student_reg_count;
    for (int i = 0; i < p1.student_count; i++)
    {
        student_array[i] = p1.student_array[i];
    }
    for (int i = 0; i < p1.teacher_count; i++)
    {
        teacher_array[i] = p1.teacher_array[i];
    }
    for (int i = 0; i < p1.course_count; i++)
    {
        course_array[i] = p1.course_array[i];
    }
    for (int i = 0; i < p1.course_reg_count; i++)
    {
        course_r_arr[i] = p1.course_r_arr[i];
    }
    for (int i = 0; i < p1.student_reg_count; i++)
    {
        student_r_arr[i] = p1.student_r_arr[i];
    }
}

portal::portal(student student_arr[Length], teacher teacher_arr[Length], course course_arr[Length], int a, int b, int c)
{
    student_count = a;
    teacher_count = b; // -> Paramatric Constructor: is simply copying all things
    course_count = c;  // from parameter to this new object.
    for (int i = 0; i < a; i++)
    {
        student_array[i] = student_arr[i];
    }
    for (int i = 0; i < b; i++)
    {
        teacher_array[i] = teacher_arr[i];
    }
    for (int i = 0; i < c; i++)
    {
        course_array[i] = course_arr[i];
    }
}

portal::~portal()
{ // -> Destructor: yeah it's empty
}

//===========================student's portion=============================//
int portal::get_student_count()
{ // -> Getter for student count
    return student_count;
}

void portal::set_student_count(int n)
{
    student_count = n; // -> Setter for student count
}

void portal::get_student_array(student arr[Length])
{ // -> Getter for student array
    for (int i = 0; i < Length; i++)
    {
        arr[i] = student_array[i];
    }
}

void portal::set_student_array(student arr2[Length])
{ // -> Setter for student array
    for (int i = 0; i < Length; i++)
    {
        student_array[i] = arr2[i];
    }
}

void portal::add_student(student s1)
{ // -> add student function
    // s1.set_roll_no(student_count);
    student_array[student_count] = s1;
    student_count++;
    
}

void portal::update_student(int index, student s1)
{
    student_array[index] = s1; // -> Update student function
}

void portal::delete_student(int index)
{
    for(int i = 0; i < student_count; i++){
        if(i == index){
            for(int j = i; j < student_count - i; j++){
                student_array[j] = student_array[j+1];
            }
            student_count--;
        }
    }
}

//========================teacher's portion ============================//
int portal::get_teacher_count()
{ // -> Getter for teacher count
    return teacher_count;
}

void portal::set_teacher_count(int n)
{ // -> Setter for teacher count
    teacher_count = n;
}

void portal::get_teacher_array(teacher arr[Length])
{ // -> Getter for teacher array
    for (int i = 0; i < Length; i++)
    {
        arr[i] = teacher_array[i];
    }
}

void portal::set_teacher_array(teacher arr2[Length])
{ // -> Setter for teacher array
    for (int i = 0; i < Length; i++)
    {
        teacher_array[i] = arr2[i];
    }
}

void portal::add_teacher(teacher t1)
{ // -> add teacher Function
    // t1.set_code(teacher_count);
    teacher_array[teacher_count] = t1;
    teacher_count++;
}

void portal::update_teacher(int index, teacher t1)
{
    teacher_array[index] = t1; // -> update teacher function
}

void portal::delete_teacher(int index)
{
    for(int i = 0; i < teacher_count; i++){
        if(i == index){
            for(int j = i; j < teacher_count - i; j++){
                teacher_array[j] = teacher_array[j+1];
            }
            teacher_count--;
        }
    }
}

//========================course's portion======================//

int portal::get_course_count()
{ // -> Getter for course count
    return course_count;
}

void portal::set_course_count(int n)
{ // -> Setter for course count
    course_count = n;
}

void portal::get_course_array(course arr[Length])
{ // -> Getter for course array
    for (int i = 0; i < Length; i++)
    {
        arr[i] = course_array[i];
    }
}

void portal::set_course_array(course arr2[Length])
{ // -> Setter for course array
    for (int i = 0; i < Length; i++)
    {
        course_array[i] = arr2[i];
    }
}

void portal::add_course(course c1)
{ // -> Add course Function
    // c1.set_id(course_count);
    course_array[course_count] = c1;
    course_count++;
}

void portal::update_course(int index, course c1)
{
    course_array[index] = c1;
}

void portal::delete_course(int index)
{
    for(int i = 0; i < course_count; i++){
        if(i == index){
            for(int j = i; j < course_count - i; j++){
                course_array[j] = course_array[j+1];
            }
            course_count--;
        }
    }
}

//========================course_reg portion=======================//

int portal::get_course_r_count()
{
    return course_reg_count;
}

void portal::set_course_r_count(int a)
{
    course_reg_count = a;
}

void portal::get_course_r_array(course_reg arr[Length])
{
    for (int i = 0; i < Length; i++)
    {
        arr[i] = course_r_arr[i];
    }
}

void portal::set_course_r_array(course_reg arr[Length])
{
    for (int i = 0; i < Length; i++)
    {
        course_r_arr[i] = arr[i];
    }
}

void portal::add_course_reg(course_reg cr1)
{   
    course_r_arr[course_reg_count] = cr1;
    course_reg_count++;
}

void portal::delete_course_reg(int a)
{
    for(int i = 0; i < course_reg_count; i++){
        if(i == a){
            for(int j = i; j < course_reg_count - i; j++){
                course_r_arr[j] = course_r_arr[j+1];
            }
            course_reg_count--;
        }
    }
}

void portal::update_course_reg(int a, course_reg cr1)
{
    course_r_arr[a] = cr1;
}

//========================student_reg portion=======================//

int portal::get_student_r_count()
{
    return student_reg_count;
}

void portal::set_student_r_count(int a)
{
    student_reg_count = a;
}

void portal::get_student_r_array(student_reg arr[Length])
{
    for (int i = 0; i < Length; i++)
    {
        arr[i] = student_r_arr[i];
    }
}

void portal::set_student_r_array(student_reg arr[Length])
{
    for (int i = 0; i < Length; i++)
    {
        student_r_arr[i] = arr[i];
    }
}

void portal::add_student_reg(student_reg cr1)
{
    student_r_arr[student_reg_count] = cr1;
    student_reg_count++;
}

void portal::delete_student_reg(int a)
{
    for(int i = 0; i < student_reg_count; i++){
        if(i == a){
            for(int j = i; j < student_reg_count - i; j++){
                student_r_arr[j] = student_r_arr[j+1];
            }
            student_reg_count--;
        }
    }
}

void portal::update_student_reg(int a, student_reg cr1)
{
    student_r_arr[a] = cr1;
}

