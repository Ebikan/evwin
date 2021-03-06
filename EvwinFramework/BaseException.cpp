#include "stdafx.h"
/******************************************************************************

	file:	BaseException.cpp

	brief:	none

	date:	7/16/2020 2:02:16 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/



#include "BaseException.h"
#include <sstream>


char const* BaseException::what() const noexcept
{
	return "BaseException";
}

char const* BaseException::description() const noexcept
{
	std::ostringstream str;
	str << "[ERROR]\n"
		<< "[File] "
		<< fileName() << std::endl
		<< "[Line] " << lineNum()
		<< std::endl;
	temp = str.str();
	return temp.c_str();
}
