// #include"../master_header.h"
#include<string>
#include<cstring>
using namespace std;

class student{
    private: 
        int roll_no;
        string name;
        string gender;
    //-------------//
    public:
    student();
    student(student &s1);
    student(int num, string n,string a);
    ~student();
    //--------------//
    int get_roll_no();
    void set_roll_no(int a);
    void set_name(string n);
    string get_name();
    string get_gender();
    void set_gender(string c);
};