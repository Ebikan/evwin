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

#define __LOC__ __FILE__, __LINE__

class BaseException : public std::exception {

public:

	// Use __LOC__ as the parameter to exceptions.
	BaseException(_In_ char const* file, _In_ unsigned int line) noexcept : file(file), line(line) {};


protected:
	_NODISCARD char const* what() const noexcept override;
	_NODISCARD virtual char const* description() const noexcept;
	_NODISCARD char const* fileName() const noexcept { return file; };
	_NODISCARD int lineNum() const noexcept { return line; };
	
	//mutable std::string temp;

private:
	char const* file;
	unsigned int line;

};
