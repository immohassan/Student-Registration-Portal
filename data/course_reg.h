using namespace std;

class course_reg{
    private:
        int course_id;
        int teacher_id;

    public:
    course_reg();
    course_reg(int , int);
    course_reg(course_reg &cr1);

    int get_course_id();
    void set_course_id(int);

    int get_teacher_id();
    void set_teacher_id(int);
};