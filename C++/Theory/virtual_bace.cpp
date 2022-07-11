#include <iostream>
using namespace std;

class students
{
protected:
    int roll_num;

public:
    void set_rollNum(int roll)
    {
        roll_num = roll;
    }
    void print_rollNum(void)
    {
        cout << endl
             << endl
             << "Roll Number: " << roll_num << endl;
    }
};
class test : virtual public students // if we'll not describe virtual class then a ambiguity will occure
{
protected:
    float maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << endl
             << "Your Marks in:" << endl
             << "Mahematics: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class sports : virtual public students // if we'll not describe virtual class then a ambiguity will occure
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Sports: " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_rollNum();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    result obj1;
    int roll_num;
    float maths, physics, sport_score;
    cout << "Enter Roll No.: ";
    cin >> roll_num;
    cout << "Enter Maths Marks: ";
    cin >> maths;
    cout << "Enter Physics Marks: ";
    cin >> physics;
    cout << "Enter Sports Score: ";
    cin >> sport_score;
    obj1.set_rollNum(roll_num);
    obj1.set_marks(maths, physics);
    obj1.set_score(sport_score);
    obj1.display();
    return 0;
}
