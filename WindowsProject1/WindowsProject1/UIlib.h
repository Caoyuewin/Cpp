#define _CRT_SECURE_NO_WARNINGS 1
#ifdef _DEBUG
#ifdef _UNICODE
		#pragma comment(lib,"DuiLib_ud.lib")
#else
		#pragma comment(lib, "DuiLib_d.lib")
#endif
#else
#	ifdef UNICODE
#		pragma comment(lib, "DuiLib_u.lib")
#	else
#		pragma comment(lib, "DuiLib.lib")
#	endif
#endif
