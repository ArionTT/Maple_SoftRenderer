#include<iostream>
#include"Base\Math.h"
#include"Base\Vector.h"
#include"Base\Matrix4x4.h"
#include"Utils\TestUtils.h"
#include"Utils\DateTime.h"
#include"Utils\Logger.h"
#include"System\DisplayWindow.h"
#include<Windows.h>

using std::cout;
using std::cin;
using std::endl;


//int main(int argc, char*argv[])
//{
//	//Matrix4x4 matrix = {};
//	//Test::PrintMatrix(matrix);
//
//	//Vector4 v1(1, 1, 1);
//	//Vector4 v2(2, 3, 4);
//
//	//Test::PrintVector(v1 + v2);
//
//	//Test::PrintVector(v1 * 10);
//
//	//Test::PrintVector(Matrix4x4::MultiplyVector(v2, matrix));
//
//	Logger log;
//	log.Init();
//
//	log.LogError(string("这是一条错误"));
//	Sleep(1000);
//
//	log.LogWarning(string("这是一条警告"));
//	Sleep(2000);
//
//	log.LogInfo(string("这是一条信息"));
//	Sleep(10000);
//
//	log.LogSystem(string("这是一条系统消息"));
//
//	
//
//	system("PAUSE");
//	return 0;
//}



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// mem leak detecting code...
	// Enable run-time memory check for debug builds.
#if (defined(DEBUG) || defined(_DEBUG))
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	DisplayWindow SoftRendererWindow;

	SoftRendererWindow.Initialize(hInstance);
	SoftRendererWindow.Run();
	SoftRendererWindow.Release();

	return 0;
}