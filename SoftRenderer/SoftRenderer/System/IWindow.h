#ifndef IWINDOW_H
#define IWINDOW_H
#include<Windows.h>

class IWindow
{
public:
	virtual void Initialize(HINSTANCE hInstance) = 0;
	virtual void Release() = 0;
	virtual void Hide()=0;
	virtual void Show()=0;
	virtual void Minimum()=0;
	virtual void SetPos(int x, int y)=0;
	virtual void SetSize(int w,int h)=0;

public:
	HWND m_hwnd;
	HINSTANCE m_hIns;
	int m_width, m_height;
	int m_posX, m_posY;
};


#endif // !IWINDW_H

