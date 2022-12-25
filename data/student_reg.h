using namespace std;

class student_reg{
    private:
        int student_id;
        int course_reg_id; 

    public:
    student_reg();
    student_reg(int , int);
    student_reg(student_reg &cr1);

    int get_student_id();
    void set_student_id(int);

    int get_course_reg_id();
    void set_course_reg_id(int);
};