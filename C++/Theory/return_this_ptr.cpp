#include <iostream>
using namespace std;

class box
{
    int l, b, h;
public:
    box &setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        return *this;
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
    box *p = new box;
    p->setDimension(3, 2, 1).showDimension();
    return 0;
}