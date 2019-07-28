#pragma once
#include <UIlib.h>
#ifdef _DEBUG
#   ifdef _UNICODE
#       pragma comment(lib, "DuiLib_ud.lib")
#   else
#       pragma comment(lib, "DuiLib_d.lib")
#   endif
#else
#   ifdef _UNICODE
#       pragma comment(lib, "DuiLib_u.lib")
#   else
#       pragma comment(lib, "DuiLib.lib")
#   endif
#endif

using namespace DuiLib;

class CDuiFrameWnd : public WindowImplBase
{
public:
	virtual LPCTSTR GetWindowClassName() const { return _T("DUIMainFrame"); }
	virtual CDuiString GetSkinFile()		{ return _T("duilib.xml"); }
	virtual CDuiString GetSkinFolder()		{ return _T(""); }
};

int APIENTRY _tWinMain(HINSTANCE hInstance
		, HINSTANCE hPrevInstance
		, LPTSTR lpCmdLine
		, int nCmShow)
	{
		CPaintManagerUI::SetInstance(hInstance);
		CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());//设置资源默路径
		CDuiFrameWnd duiFrame;
		duiFrame.Create(NULL, _T("DUIWnd"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
		duiFrame.CenterWindow();
		duiFrame.ShowModal();
		return 0;
	}