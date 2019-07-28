//class CDuiFrameWnd : public CWindowWnd, public INotifyUI{
//public:
//
//	virtual LPCTSTR GetWindowClassName() const {
//		return _T("CDuiFrameWnd");
//	}
//	virtual void Notify(TNotifyUI& msg) {}
//	virtual LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
//	{
//		LRESULT lRes = 0;
//		if (uMsg == WM_CREATE)
//		{
//			CControlUI *pWnd = new CButtonUI;
//			pWnd->SetText(_T("Hello World!"));
//			pWnd->SetBkColor(0xFF00FF00);
//
//			m_PainaManager.Init(m_hWnd);
//			m_PainaManager.AttachDialog(pWnd);
//			return lRes;
//		}
//
//		if (m_PainaManager.MessageHandler(uMsg, wParam, lParam, lRes))
//		{
//			return lRes;
//		}
//		return __super::HandleMessage(uMsg, wParam, lParam);
//	}
//protected:
//	CPaintManagerUI m_PainaManager;
//};
//
//int APIENTRY _tWinMain(HINSTANCE hInstance
//	, HINSTANCE hPrevInstance
//	, LPTSTR lpCmdLine
//	, int nCmShow)
//{
//	CPaintManagerUI::SetInstance(hInstance);
//	CDuiFrameWnd duiFrame;
//	duiFrame.Create(NULL, _T("DUIWnd"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
//	duiFrame.ShowModal();
//	return 0;
//}