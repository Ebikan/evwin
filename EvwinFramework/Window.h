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
protected:
	class UnknownException : public BaseException {
		_NODISCARD char const* what() const noexcept override;
		_NODISCARD char const* description() const noexcept override;
	};
	class HRESULTException : public BaseException {
	public:
		HRESULTException(
			_In_ char const* file, 
			_In_ unsigned int line,
			_In_ HRESULT hr
		) noexcept;
		_NODISCARD char const* what() const noexcept override;
		_NODISCARD char const* description() const noexcept override;
	private:
		HRESULT hr;
	};

private:
	class WndClass {
	public:
		WndClass(_In_ HINSTANCE hInst, _In_ std::wstring className);
		~WndClass();
		WndClass(const WndClass&) = delete;
		WndClass& operator=(const WndClass&) = delete;
		WndClass(WndClass&&) = delete;
		WndClass& operator=(WndClass&&) = delete;
		_NODISCARD std::wstring const GetWndClassID() const noexcept;
		_NODISCARD HINSTANCE const GetInstance() const noexcept;
	private:
		bool SetInstance(_In_ HINSTANCE const& hInst);
		bool SetWndClassID(_In_ std::wstring const& atom);
		static std::wstring WndClassID;
		static HINSTANCE hInstance;
	};

public:

	Window(_In_ HINSTANCE hInst);
	~Window() = default;
	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;
	Window(Window&&) = delete;
	Window& operator=(Window&&) = delete;

private:
	

};
