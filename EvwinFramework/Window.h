#pragma once
/******************************************************************************

	file:	Window.h

	brief:	none

	date:	7/16/2020 2:03:18 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include "BaseException.h"


class Window {
public:
	class UnknownException : public BaseException {
		_NODISCARD char const* what() const override;
		_NODISCARD char const* description() const override;
	};
	class HRESULTException : public BaseException {
		

	};


public:

	Window() noexcept;
	~Window() noexcept;
	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;
	Window(Window&&) = delete;
	Window& operator=(Window&&) = delete;

};
