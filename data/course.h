#include<string>
using namespace std;

class course{
    private: 
        int id;
        string name;
    //-------------//
    public:
    course();
    course(course &s1);
    course(int num, string n);
    ~course();
    //--------------//
    int get_id();
    void set_id(int a);
    void set_c_name(string n);
    string get_c_name();
};