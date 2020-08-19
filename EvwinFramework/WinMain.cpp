#include "stdafx.h"
/******************************************************************************

	file:	WinMain.cpp

	brief:	The Primary Entry point for the framework.

	date:	7/16/2020 1:44:33 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/
#include "Window.h"
#include <iostream>

int CALLBACK WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nShowCmd
) {
	try {
		throw Window::HRESULTException(__LOC__, ERROR_WAIT_NO_CHILDREN);
	}
	catch (Window::HRESULTException e) {
		OutputDebugStringA(e.what());
		OutputDebugStringA( e.description());
	}
	return 0;
}
