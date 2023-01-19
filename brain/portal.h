

#define Length 50
using namespace std;
class portal{
    private:
    student student_array[Length];
    int student_count;
    teacher teacher_array[Length];
    int teacher_count;
    course course_array[Length];
    int course_count;
    course_reg course_r_arr[Length];
    int course_reg_count;
    student_reg student_r_arr[Length];
    int student_reg_count;

    public:
    portal();
    portal(portal &p1);
    portal(student student_arr[Length],teacher teacher_arr[Length],course course_arr[Length],int a,int b, int c);
    ~portal();

//============student's count===================//
    int get_student_count();
    void set_student_count(int num);

//============student array's getter & setter===================//

    void get_student_array(student arr[Length]);
    void set_student_array(student arr2[Length]);
    
//=====================student function=====================//    
    void add_student(student s1);
    void update_student(int index, student s1);
    void delete_student(int index);

//============teacher's count===================//
    int get_teacher_count();
    void set_teacher_count(int n);

//============teacher array's getter & setter===================//
    void get_teacher_array(teacher arr[Length]);
    void set_teacher_array(teacher arr2[Length]);

//================== teacher function=======================//    
    void add_teacher(teacher t1);
    void update_teacher(int index, teacher t1);
    void delete_teacher(int index);
//======================course's count======================//
    int get_course_count();
    void set_course_count(int n);

//=====================course array's getter & setter================//
    void get_course_array(course arr[Length]);
    void set_course_array(course arr2[Length]);

//=====================course function====================//
    void add_course(course c1);
    void update_course(int index, course c1);
    void delete_course(int index);
    
//==================course_reg count========================//

    void set_course_r_count(int );
    int get_course_r_count();

//==================course_reg getter & setter ====================//

    void get_course_r_array(course_reg arr[Length]);
    void set_course_r_array(course_reg arr[Length]);

//===============course_reg functions ============================//

    void add_course_reg(course_reg cr1);
    void delete_course_reg(int );
    void update_course_reg(int , course_reg cr1);

//==================student_reg count========================//

    void set_student_r_count(int );
    int get_student_r_count();

//==================student_reg getter & setter ====================//

    void get_student_r_array(student_reg arr[Length]);
    void set_student_r_array(student_reg arr[Length]);

//===============student_reg functions ============================//

    void add_student_reg(student_reg cr1);
    void delete_student_reg(int );
    void update_student_reg(int , student_reg cr1);




    int oop_checker();
    int male_checker();
    int usman_logic();
    int student_checker();
    int oop_name_checker();

};