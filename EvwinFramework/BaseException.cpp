#include "stdafx.h"
/******************************************************************************

	file:	BaseException.cpp

	brief:	none

	date:	7/16/2020 2:02:16 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/



#include "BaseException.h"



char const* BaseException::what() const noexcept
{
	return "Generic BaseException";
}

char const* BaseException::description() const noexcept
{
	return "A BaseException is being thrown";
}
