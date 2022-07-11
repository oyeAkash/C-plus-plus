#include <iostream>
using namespace std;

class box
{
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void showDimension()
    {
        cout << "\nl=" << l
             << " b=" << b
             << " h=" << h;
    }
};

int main()
{
    //  1st method of creating object
    box *p = new box;
    p->setDimension(3,2,1);
    p->showDimension();
//  2nd method of creating object
    box *ptr, smallBox;
    ptr=&smallBox;
    ptr->setDimension(1,2,3);
    ptr->showDimension();
    return 0;
}