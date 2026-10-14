#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Window
{
    // public, private, protected
private:
    int width;
    int height;
    char material[20];
    double price;
    bool open;
public:

    Window(int width, int height, const char* material,
        double price)
    {
        this->width = width > 0 ? width : 0;
        this->height = height > 0 ? height : 0;
        this->price = price > 0 ? price : 0;
        strcpy(this->material, material);
        open = false;
    }

    Window() : Window(0, 0, "", 0)
    {
    }

    //    Window()
    //    {
    //        width = 0;
    //        height = 0;
    //        material[0] = 0;
    //        price = 0;
    //        open = false;
    //    }
    int getWidth()
    {

        return width;
    }

    void setWidth(int width)
    {
        if (width > 0)
            this->width = width;
    }

    int getHeight()
    {
        return height;
    }

    void setHeight(int val)
    {
        if (val > 0)
            height = val;
    }

    const char* getMaterial()
    {
        return material;
    }

    void setMaterial(const char* val)
    {
        strcpy(material, val);
    }

    double getPrice()
    {
        return price;
    }

    void setPrice(double price)
    {
        if (price > 0)
            Window::price = price;
    }

    bool isOpen()
    {
        return open;
    }

    void openClose()
    {
        open = !open;
    }

    void printWindow()
    {
        cout << "Width x Height: " << width << "x" << height << endl;
        cout << "Material: " << material << endl;
        cout << "Price: " << price << endl;
        cout << "State: " << (open ? "Open" : "Close") << endl;
        cout << endl;
    }
};

int main()
{
    Window w1(123, 234, "Wood", 2000);
    //    w1.setWidth(123);
    //    w1.setHeight(234);
    //    w1.setMaterial("Wood");
    //    w1.setPrice(2000);
    w1.printWindow();
    //    w1.openClose();
    //    w1.printWindow();

    Window w2;
    w2.setMaterial("Plastic");
    w2.printWindow();



    /*
     OOP:
        - Encapsulation
        - Inheritance
        - Polymorphism
     * */
}