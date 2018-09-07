// •û–@: System::String ‚ğ•W€•¶š—ñ‚É•ÏŠ·‚·‚é
// https://msdn.microsoft.com/ja-jp/library/1b4az623.aspx



#include	<string>


#define		S2s(Str)	MarshalString(Str)				// Convert System::String to std::string
#define		s2S(str)	(gcnew System::String((str).c_str()))	// Convert std::string to System::String


void	MarshalString(System::String ^ s, std::string& os);
void	MarshalString(System::String ^ s, std::wstring& os);

std::string	MarshalString(System::String ^ s);
