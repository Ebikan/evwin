#include "stdafx.h"
/******************************************************************************

	file:	Window.cpp

	brief:	none

	date:	7/16/2020 2:03:18 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/



#include "Window.h"

std::wstring Window::WndClass::WndClassID;
HINSTANCE Window::WndClass::hInstance = nullptr;


Window::Window(_In_ HINSTANCE hInst) {

	// Create a window class (WNDCLASS) to make windows from.
}


Window::WndClass::WndClass(_In_ HINSTANCE hInst, _In_ std::wstring className) {
	WNDCLASSEX info = {};
	info.cbSize = sizeof(WNDCLASSEX);
	info.style = CS_HREDRAW | CS_OWNDC;
	info.lpfnWndProc = DefWindowProc;
	info.cbClsExtra = 0u;
	info.cbWndExtra = 0u;
	info.hInstance = hInst;
	info.hIcon = nullptr;
	info.hCursor = nullptr;
	info.hbrBackground = nullptr;
	info.lpszMenuName = nullptr;
	info.lpszClassName = className.c_str();


	ATOM const atom = RegisterClassEx(&info);
	if (atom == NULL) { throw Window::HRESULTException(__LOC__, GetLastError()); }
	
	SetInstance(hInst);
	SetWndClassID(className);
}

Window::WndClass::~WndClass()
{
	UnregisterClass(GetWndClassID().c_str(),GetInstance());
}

std::wstring const Window::WndClass::GetWndClassID() const noexcept
{
	return WndClassID;
}

const HINSTANCE Window::WndClass::GetInstance() const noexcept
{
	return hInstance;
}

bool Window::WndClass::SetInstance(_In_ HINSTANCE const& hInst)
{
	if (hInst == NULL)
		throw Window::HRESULTException(__LOC__, GetLastError());
	hInstance = hInst;
}

bool Window::WndClass::SetWndClassID(_In_ std::wstring const& str)
{
	if (str.length())
		throw Window::HRESULTException(__LOC__, GetLastError());
	WndClassID = str;
}

Window::HRESULTException::HRESULTException(
	_In_ char const* file, 
	_In_ unsigned int line, 
	_In_ HRESULT hr) noexcept
	: BaseException(file, line), hr(hr)
{

}

char const* Window::HRESULTException::what() const noexcept
{
	return nullptr;
}

char const* Window::HRESULTException::description() const noexcept
{
	return nullptr;
}

char const* Window::UnknownException::what() const noexcept
{
	return nullptr;
}

char const* Window::UnknownException::description() const noexcept
{
	return nullptr;
}
