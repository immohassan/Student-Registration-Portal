using namespace std;
class interface{
    private:
        portal p1;
    public:
    // portal *p;
    int main_menu();
    int student_menu();
    int teacher_menu();
    int course_menu();

    //--------------------------------------//

    int i_add_student();
    int i_update_student();
    int i_delete_student();
    int i_display_student();
    int i_add_reg_student();
    int i_display_student_reg();
    int i_update_student_reg();
    int i_delete_student_reg();

    //--------------------------------------//

    int i_add_teacher();
    int i_update_teacher();
    int i_delete_teacher();
    int i_display_teacher();

    //-------------------------------------//

    int i_add_course();
    int i_update_course();
    int i_delete_course();
    int i_display_course();
    int i_add_reg_course();
    int i_display_course_reg();
    int i_update_course_reg();
    int i_delete_course_reg();

};
