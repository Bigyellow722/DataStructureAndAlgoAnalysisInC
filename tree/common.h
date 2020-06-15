#ifndef __COMMON_H
#define __COMMON_H
#include <stdio.h>
#include <stdlib.h>

#define offsetof(member, type) ((size_t) &((type *)0)->member) 

#define container_of(ptr, member, type) ({		\
		const typeof(((type *)0)->member) *__mptr = (ptr);	\
		(type *)( (char *)__mptr - offsetof(member,type));})

#endif /* __COMMON_H */
