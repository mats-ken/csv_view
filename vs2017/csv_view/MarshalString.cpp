#include	"stdafx.h"


#include	"MarshalString.h"


using	namespace	System;
using	namespace	System::Runtime::InteropServices;

using	namespace	std;


// •û–@: System::String ‚ğ•W€•¶š—ñ‚É•ÏŠ·‚·‚é
// https://msdn.microsoft.com/ja-jp/library/1b4az623.aspx


void MarshalString(String^ s, string& os)
{
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, wstring& os)
{
	const wchar_t* chars = (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}


string	MarshalString(String^ s)
{
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	const	string os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return	os;
}
