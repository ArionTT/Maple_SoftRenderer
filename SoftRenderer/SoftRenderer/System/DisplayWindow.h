
#ifndef IWINDOW_H
#include"IWindow.h"
#endif // !IWINDOW_H

#ifndef DISPLAY_WINDOW_H
#define DISPLAY_WINDOW_H


class DisplayWindow : public IWindow
{
public:
	// Í¨¹ý IWindow ¼Ì³Ð
	virtual void Initialize(HINSTANCE hInstance) override;
	virtual void Release() override;
	virtual void Hide() override;
	virtual void Show() override;
	virtual void Minimum() override;
	virtual void SetPos(int x, int y) override;
	virtual void SetSize(int w, int h) override;

	void Run();
	bool Update();

private:


};


#endif // !DISPLAY_WINDOW_H

