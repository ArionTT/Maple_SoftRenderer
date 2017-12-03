#ifndef CONSOLE_WINDOW_H
#define CONSOLE_WINDOW_H

#include"IWindow.h"

class ConsoleWindow :public IWindow
{
public:
	// Í¨¹ý IWindow ¼Ì³Ð
	virtual void Hide() override;
	virtual void Show() override;
	virtual void Minimum() override;
	virtual void SetPos(int x, int y) override;
	virtual void SetSize(int w, int h) override;
	virtual void Initialize(HINSTANCE hInstance) override;
	void Initialize();
	virtual void Release() override;
};

#endif // !CONSOLE_WINDOW_H

