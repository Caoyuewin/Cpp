#define _CRT_SECURE_NO_WARNINGS 1
#include <Windows.h>
#include <tchar.h>
#include "UIlib.h"

using namespace DuiLib;

int APIENTRY _tWinMain(HINSTANCE hInstance
	, HINSTANCE hPrevInstance
	, LPTSTR lpCmdLine
	, int nCmShow) 
{
	::MessageBox(NULL, _T("Hello World!"), NULL, NULL);
	return 0;
}