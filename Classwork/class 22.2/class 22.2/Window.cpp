#include "Window.h"

Window::Window()
{
	cout << "Window()" << endl;
}

Window::Window(int w, int h, const char* mat)
{
	cout << "Window(int, int, const char *)" << endl;
	width = w;
	height = h;
	material = new char[strlen(mat) + 1] {};
	strcpy(material, mat);
}

Window::Window(const Window& obj)
{
	cout << "Window(const Window&)" << endl;
	width = obj.width;
	height = obj.height;
	open = obj.open;
	if (obj.material)
	{
		material = new char[strlen(obj.material) + 1] {};
		strcpy(material, obj.material);
	}
}

Window::~Window()
{
	cout << "~Window() for " << (material?material:"Empty") << endl;
	delete[] material;
}

int Window::getWidth() const
{
	return width;
}

int Window::getHeight() const
{
	return height;
}

const char* Window::getMaterial() const
{
	return material;
}

void Window::setWidth(int val)
{
	width = val;
}

void Window::setHeight(int val)
{
	height = val;
}

void Window::setMaterial(const char* val)
{
	delete[] material;
	material = new char[strlen(val) + 1] {};
	strcpy(material, val);
}

void Window::openClose()
{
	open = !open;
}

void Window::printWindow() const
{
	cout << "Width x Height: " << width << " x " << height << endl;
	cout << "Material: " << (material?material:"Unknown") << endl;
	cout << "State: " << (open ? "Open" : "Close") << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
