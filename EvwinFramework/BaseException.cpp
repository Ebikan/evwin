#include "stdafx.h"
/******************************************************************************

	file:	BaseException.cpp

	brief:	none

	date:	7/16/2020 2:02:16 PM

	author:	Evie Brown

	email:	evie@eviebrown.com

******************************************************************************/



#include "BaseException.h"

BaseException::BaseException() noexcept
{
}

char const* BaseException::what() const
{
	return nullptr;
}

char const* BaseException::description() const
{
	return nullptr;
}
