#include "DisplayWindow.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

void DisplayWindow::Initialize(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance,IDI_APPLICATION);
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW);
	wcex.lpszMenuName = NULL;//MAKEINTRESOURCE(IDC_SOFTRENDERER);
	wcex.lpszClassName = L"SoftRenderer Window Class";
	wcex.hIconSm = LoadIcon(wcex.hInstance,IDI_APPLICATION);

	RegisterClassEx(&wcex);

	m_hIns = hInstance; // Store instance handle in our global variable

	const int createWidth = 854;
	const int createHeight = 480;

	m_hwnd = CreateWindow(L"SoftRenderer Window Class", L"SoftRenderer", WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, createWidth, createHeight, NULL, NULL, hInstance, NULL);


	RECT realRect;
	GetClientRect(m_hwnd, &realRect);

	int width = realRect.right - realRect.left;
	int height = realRect.bottom - realRect.top;
	width = createWidth * 2 - width;
	height = createHeight * 2 - height;

	MoveWindow(m_hwnd, GetSystemMetrics(SM_CXSCREEN) / 2 - width / 2, GetSystemMetrics(SM_CYSCREEN) / 2 - height / 2, width, height, FALSE);

	if (!m_hwnd)
	{
		return;
	}

	// 创建资源管理器

	//创建渲染器上下文对象

	// 显示窗口
	ShowWindow(m_hwnd, SW_SHOWNORMAL);
	UpdateWindow(m_hwnd);

	// 切换焦点
	SetFocus(m_hwnd);
	SetForegroundWindow(m_hwnd);

}

void DisplayWindow::Release()
{
}

void DisplayWindow::Hide()
{
}

void DisplayWindow::Show()
{
}

void DisplayWindow::Minimum()
{
}

void DisplayWindow::SetPos(int x, int y)
{
}

void DisplayWindow::SetSize(int w, int h)
{
}

void DisplayWindow::Run()
{
	for (;;)
	{
		MSG msg;

		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			if (msg.message != WM_QUIT)
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
			else
			{

				break;
			}
		}
		else
		{
			if (!Update())
			{
				// need to clean the message loop (WM_QUIT might cause problems in the case of a restart)
				// another message loop might have WM_QUIT already so we cannot rely only on this 
				while (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
				{
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
				break;
			}
		}
	}

}

bool DisplayWindow::Update()
{

	return true;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
	case WM_COMMAND:
		wmId = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// Parse the menu selections:
		// 		switch (wmId)
		// 		{
		// 		default:
		return DefWindowProc(hWnd, message, wParam, lParam);
		//		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		// TODO: Add any drawing code here...
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}
