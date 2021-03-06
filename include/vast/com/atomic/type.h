#ifndef VAST_COM_ATOMIC_TYPE
#define VAST_COM_ATOMIC_TYPE

#include "cstddef"
#include "string"

namespace Vast
{
	typedef unsigned char	byte;

	typedef char		i8;
	typedef short		i16;
	typedef int		i32;
	typedef long		i64;

	typedef unsigned char	u8;
	typedef unsigned short	u16;
	typedef unsigned int	u32;
	typedef unsigned long	u64;

	typedef float		f32;
	typedef double		f64;

	typedef unsigned long	id;

	typedef void*		ptr;
	typedef size_t		imem;
}

#endif
