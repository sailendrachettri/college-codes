// Date: 18 - 12 - 2021
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "Roll no: " << roll_number << endl;
}

// -----------------------------Derived Student class-----------------------------
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

// -----------------------------Derived Exam class------------------------
class Result : public Exam{
    float percentage;

    public:
        void display_result(){
            get_roll_number(); 
            get_marks();
            cout<< "Your percentage is "<<(maths + physics) / 2<<"%"<<endl;
        }
};

int main()
{
    Result sai;
    sai.set_roll_number(1001);
    sai.set_marks(90.1, 98.0);
    sai.display_result();
    return 0;
}