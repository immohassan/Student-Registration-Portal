#include "../master_header.h"

int interface::main_menu()                  // Main menu display function
{
    while (1)
    {
        int num;
        cout << endl << endl;
        cout << "Press 1 for student functions" << endl;
        cout << "Press 2 for teacher functions" << endl;
        cout << "Press 3 for course functions" << endl;
        cout << "Press -1 to exit the portal" << endl;
        num = get_int();
        switch (num)
        {
        case 1:
            student_menu();
            break;
        case 2:
            teacher_menu();
            break;
        case 3:
            course_menu();
            break;
        case -1:
            exit(0);
            break;
        default:
            cout << "Invalid Input, Please enter the number correctly!" << endl << endl << endl;
        }
    }
}
//===========student===================//
int interface::student_menu()
{

    while (1)
    {
        int num = 0;
        cout << "Press 1 to display students list" << endl;
        cout << "Press 2 to add a student" << endl;
        cout << "Press 3 to delete a student" << endl;
        cout << "Press 4 to update a student" << endl;
        cout << "Press 5 to register a student" << endl;
        cout << "Press 6 to display registered student" << endl;
        cout << "Press 7 to update registered student" << endl;
        cout << "Press 8 to delete registered student" << endl;
        cout << "Press -1 to return to main menu" << endl;
        num = get_int();
        switch (num)
        {
        case 1:
            i_display_student();
            break;
        case 2:
            i_add_student();
            break;
        case 3:
            i_delete_student();
            break;
        case 4:
            i_update_student();
            break;
        case 5:
            i_add_reg_student();
            break;
        case 6:
            i_display_student_reg();
            break;
        case 7:
            i_update_student_reg();
            break;
        case 8:
            i_delete_student_reg();
            break;
        case -1:
            return 1;
            break;
        default:
            cout << "Invalid input, please try again" << endl << endl << endl;
            break;
        }
    }
}
int interface::i_add_student()
{
    int n = 0;
    string name, gen;
    cout << "Enter the rollno of student: " << endl;
    n = get_int();
    cout << "Enter the Student's name: " << endl;
    cin >> name;
    cout << "Enter the gender" << endl;
    cin >> gen;
    student s1(n, name, gen);
    p1.add_student(s1);
    cout << "Student added Succesfully" << endl << endl << endl;
    return 0;
}

int interface::i_delete_student()
{
    int n = 0;
    cout << "Enter the position from which you want to delete the student: " << endl;
    n = get_int();
    n = n - 1;
    int num = p1.get_student_count();
    if (n > num - 1 || n < -1)
    {
        cout << "Index don't exists: " << endl << endl;
        return 0;
    }
    else
    {
        p1.delete_student(n);
        cout << "Student deleted sucessfully" << endl << endl << endl;
        return 0;
    }
}
int interface::i_update_student()
{
    int n = 0;
    cout << "Enter the position from which you want to update the student: " << endl;
    n = get_int();
    n = n - 1;
    int num = p1.get_student_count();
    if (n > num - 1 || n < -1)
    {
        cout << "Index don't exists: " << endl << endl;
        return 0;
    }
    else
    {
        int num = 0;
        string name = " ";
        string gen = " ";
        cout << "Enter the new rollno : " << endl;
        num = get_int();
        cout << "Enter the new name: " << endl;
        cin >> name;
        cout << "Enter gender" << endl;
        cin >> gen;
        student s1(num, name, gen);
        p1.update_student(n, s1);
        cout << "Student updated successfull" << endl;
    }
    return 0;
}

int interface::i_display_student()
{
    int num = p1.get_student_count();
    student arr[Length];
    p1.get_student_array(arr);
    if (num == 0)
    {
        cout << "No student present in the list" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  Student's name: " << arr[i].get_name() << endl;
            cout << "    Student's rollno: " << arr[i].get_roll_no() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    return 0;
}
int interface::i_add_reg_student()
{
    int num = p1.get_student_count();
    student arr[Length];
    p1.get_student_array(arr);
    if (num == 0)
    {
        cout << "There are no students present" << endl <<endl;
        return 0;
    }
    i_display_student();
    int a;
    cout << "Enter the index of student you want to register: " << endl;
    a = get_int();
    a = a - 1;
    if(a > num-1 || a < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    int id = arr[a].get_roll_no();
    //=====================//
    int number = p1.get_course_r_count();
    course_reg arr1[Length];
    p1.get_course_r_array(arr1);
    if (number == 0)
    {
        cout << "No course registered yet" << endl << endl;
        return 0;
    }
    i_display_course_reg();
    int n;
    cout << "Enter the index of registered course : " << endl;
    n = get_int();
    n = n-1;
    if(n > number-1 || n < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    student_reg sr1(id, n);
    p1.add_student_reg(sr1);
    cout << "Student registered successfull" << endl << endl;
    return 0;
}
int interface::i_display_student_reg()
{
    int num = p1.get_student_r_count();
    student_reg arr[Length];
    p1.get_student_r_array(arr);
    if (num <= 0)
    {
        cout << "No student registered yet" << endl << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  Student's id: " << arr[i].get_student_id() << endl;
            cout << "    Registered course's id: " << arr[i].get_course_reg_id() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    return 0;
}
int interface::i_update_student_reg()
{
    cout << "Enter the index you want to update: " << endl;
    int n, id;
    n = get_int();
    n = n-1;
    int num = p1.get_student_r_count();
    if(n > num-1 || n < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    cout << "Enter new student id: " << endl;
    id = get_int();
    cout << "Enter new registered course index: " << endl;
    int index;
    index = get_int();
    student_reg s1(id, index);
    p1.update_student_reg(n, s1);
    cout << "Registered student updated" << endl << endl;
    return 0;
}
int interface::i_delete_student_reg()
{
    cout << "Enter the index you want to delete: " << endl;
    int n;
    n = get_int();
    n=n-1;
    int num = p1.get_student_r_count();
    if(n > num-1 || n < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    p1.delete_student_reg(n);
    cout << "Deletion successful" << endl << endl;
    return 0;
}
//--------------------teachers------------------//

int interface::teacher_menu()
{
    while (1)
    {
        cout << "Press 1 to display teachers list" << endl;
        cout << "Press 2 to add a teacher" << endl;
        cout << "Press 3 to delete a teacher" << endl;
        cout << "Press 4 to update a teacher" << endl;
        cout << "Press -1 to return to main menu" << endl;
        int num = 0;
        num = get_int();
        switch (num)
        {
        case 1:
            i_display_teacher();
            break;
        case 2:
            i_add_teacher();
            break;
        case 3:
            i_delete_teacher();
            break;
        case 4:
            i_update_teacher();
            break;
        case -1:
            return 0;
            break;
        default:
            cout << "Invalid input, please try again" << endl << endl << endl;
            break;
        }
    }
}

int interface::i_add_teacher()
{
    int n = 0;
    string name;
    cout << "Enter the code of teacher: " << endl;
    n = get_int();
    cout << "Enter the teacher's name: " << endl;
    cin >> name;
    teacher t1(n, name);
    p1.add_teacher(t1);
    cout << "teacher added Succesfully" << endl << endl << endl;
    return 0;
}

int interface::i_delete_teacher()
{
    int n = 0;
    cout << "Enter the position from which you want to delete the teacher: " << endl;
    n = get_int();
    n = n - 1;
    int num = p1.get_teacher_count();
    if (n > num - 1 || n < -1)
    {
        cout << "Index don't exists: " << endl << endl;
        return 0;
    }
    else
    {
        p1.delete_teacher(n);
        cout << "teacher deleted sucessfully" << endl << endl << endl;
    }
    return 0;
}
int interface::i_update_teacher()
{
    int n = 0;
    cout << "Enter the position from which you want to update the teacher: " << endl;
    n = get_int();
    n = n - 1;
    int num = p1.get_teacher_count();
    if (n > num - 1 || n < -1)
    {
        cout << "Index don't exists: " << endl << endl;
        return 0;
    }
    else
    {
        int num = 0;
        string name = " ";
        cout << "Enter the new code : " << endl;
        num = get_int();
        cout << "Enter the new name: " << endl;
        cin >> name;
        teacher t1(num, name);
        p1.update_teacher(n, t1);
        cout << "teacher updated successfull" << endl;
    }
    return 0;
}

int interface::i_display_teacher()
{
    int num = p1.get_teacher_count();
    teacher arr[Length];
    p1.get_teacher_array(arr);
    if (num == 0)
    {
        cout << "No teacher present in the list" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  teacher's name: " << arr[i].get_t_name() << endl;
            cout << "    teacher's code: " << arr[i].get_code() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    return 0;
}

//----------------course--------------//

int interface::course_menu()
{
    while (1)
    {
        cout << "Press 1 to display courses list" << endl;
        cout << "Press 2 to add a course" << endl;
        cout << "Press 3 to delete a course" << endl;
        cout << "Press 4 to update a course" << endl;
        cout << "Press 5 to register a course" << endl;
        cout << "Press 6 to display registered courses" << endl;
        cout << "Press 7 to update registered courses" << endl;
        cout << "Press 8 to delete registered courses" << endl;
        cout << "Press -1 to return to main menu" << endl;
        int num = 0;
        num = get_int();
        switch (num)
        {
        case 1:
            i_display_course();
            break;
        case 2:
            i_add_course();
            break;
        case 3:
            i_delete_course();
            break;
        case 4:
            i_update_course();
            break;
        case 5:
            i_add_reg_course();
            break;
        case 6:
            i_display_course_reg();
            break;
        case 7:
            i_update_course_reg();
            break;
        case 8:
            i_delete_course_reg();
            break;
        case -1:
            return 0;
            break;
        default:
            cout << "Invalid input, please try again" << endl << endl << endl;
            break;
        }
    }
}

int interface::i_add_course()
{
    int n = 0;
    string name;
    cout << "Enter the id of course: " << endl;
    n = get_int();
    cout << "Enter the course's name: " << endl;
    cin >> name;
    course t1(n, name);
    p1.add_course(t1);
    cout << "course added Succesfully" << endl << endl << endl;
    return 0;
}

int interface::i_delete_course()
{
    int n = 0;
    cout << "Enter the position from which you want to delete the course: " << endl;
    n = get_int();
    n = n - 1;
    int num = p1.get_course_count();
    if (n > num - 1 || n < -1)
    {
        cout << "Index don't exists: " << endl << endl;
        return 0;
    }
    else
    {
        p1.delete_course(n);
        cout << "course deleted sucessfully" << endl << endl << endl;
    }
    return 0;
}
int interface::i_update_course()
{
    int n = 0;
    cout << "Enter the position from which you want to update the course: " << endl;
    n = get_int();
    n = n - 1;
    int num = p1.get_course_count();
    if (n < -1 || n > num - 1)
    {
        cout << "Index don't exists: " << endl << endl;
        return 0;
    }
    else
    {
        int num = 0;
        string name = " ";
        cout << "Enter the new id : " << endl;
        num = get_int();
        cout << "Enter the new name: " << endl;
        cin >> name;
        course t1(num, name);
        p1.update_course(n, t1);
        cout << "course updated successfull" << endl;
    }
    return 0;
}

int interface::i_display_course()
{
    int num = p1.get_course_count();
    course arr[Length];
    p1.get_course_array(arr);
    if (num == 0)
    {
        cout << "No course present in the list" << endl << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  course's name: " << arr[i].get_c_name() << endl;
            cout << "    course's id: " << arr[i].get_id() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    return 0;
}
int interface::i_add_reg_course()
{
    int num = p1.get_course_count();
    course arr[Length];
    p1.get_course_array(arr);
    if (num == 0)
    {
        cout << "No course present in the list" << endl << endl;
        return 0;
    }
    i_display_course();
    //-------------------------------------------//
    int n = 0;
    cout << "Enter the index of the course you want to register: " << endl;
    n = get_int();
    n = n - 1;
    if(n > num-1 || n < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    course arr1[Length];
    p1.get_course_array(arr1);
    teacher arr2[Length];
    p1.get_teacher_array(arr2);
    int num1, num2, num3;
    num1 = arr1[n].get_id();
    //----------------------------------------------//
    int number = p1.get_teacher_count();
    teacher arr4[Length];
    p1.get_teacher_array(arr4);
    if (number == 0)
    {
        cout << "No teacher present in the list" << endl << endl;
        return 0;
    }
    i_display_teacher();

    cout << "Enter the index of teacher you want to assign to the selected course" << endl;
    num2 = get_int();
    num2 = num2 - 1;
    if(num2 > number-1 || num2 < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    num3 = arr2[num2].get_code();
    course_reg cr1(num1, num3);
    p1.add_course_reg(cr1);
    cout << "Course registered" << endl << endl;
    return 0;
}

int interface::i_display_course_reg()
{
    int num = p1.get_course_r_count();
    course_reg arr[Length];
    p1.get_course_r_array(arr);
    if (num <= 0)
    {
        cout << "No course registered yet" << endl << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            cout << i + 1 << ".  Course's id: " << arr[i].get_course_id() << endl;
            cout << "    Teacher's id: " << arr[i].get_teacher_id() << endl;
            cout << "-----------------------------------------------" << endl << endl;
        }
    }
    return 0;
}
int interface::i_update_course_reg()
{
    cout << "Enter the index you want to update: " << endl;
    int n;
    n = get_int();
    n=n-1;
    int num = p1.get_course_r_count();
    if(n > num-1 || n < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    cout << "Enter new course id: " << endl;
    int id;
    id = get_int();
    cout << "Enter new teacher id: " << endl;
    int id2;
    id2 = get_int();
    course_reg s1(id, id2);
    p1.update_course_reg(n, s1);
    cout << "Registered course updated" << endl << endl;
    return 0;
}

int interface::i_delete_course_reg()
{
    cout << "Enter the index you want to delete: " << endl;
    int n;
    n=n-1;
    int num = p1.get_course_r_count();
    if(n > num-1 || n < 0){
        cout << "Invalid index!!"<<endl;
        return 0;
    }
    n = get_int();
    p1.delete_course_reg(n);
    cout << "Deletion successful" << endl;
    return 0;
}