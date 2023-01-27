#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
    int width;
    int height;

public:
    int area()
    {
        return width * height;
    }
    Rectangle(int x, int y)
    {
        width = x;
        height = y;
    }
};
int main()
{
    Rectangle rect =  Rectangle(45,45);
    Rectangle *rec = new Rectangle(34,34);
    cout << " Area 1: " << rec->area() << endl;
    cout << "Area : " << rect.area();
}