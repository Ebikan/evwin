#pragma once
/******************************************************************************

	file:	BaseException.h

	brief:	none

	date:	7/16/2020 2:02:16 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/

#include <Exception>
#include <string>

class BaseException : public std::exception {

public:

	BaseException() noexcept;

	_NODISCARD char const* what() const override;
	_NODISCARD virtual char const* description() const;

protected:
	static std::string temp;

};
