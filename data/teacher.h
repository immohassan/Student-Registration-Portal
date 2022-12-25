using namespace std;
#include<string>
class teacher{
    private: 
    int code;
    string name;
    //-------------//
    public:
    teacher();
    teacher(teacher &s1);
    teacher(int num, string n);
    ~teacher();
    //--------------//
    int get_code();
    void set_code(int a);
    void set_t_name(string n);
    string get_t_name();
};