#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Window
{
	int width;
	int height;
	char* material = nullptr;
	bool open = false;

public:
	Window();
	Window(int w, int h, const char* mat);
	Window(const Window& obj);
	~Window();
	int getWidth()const;
	int getHeight()const;
	const char* getMaterial()const;
	void setWidth(int val);
	void setHeight(int val);
	void setMaterial(const char* val);
	void openClose();
	void printWindow()const;

};