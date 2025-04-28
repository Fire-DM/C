#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>



//实现memcpy的功能，将一组数据复制到另一组数据中
void* my_memcpy(void* dest,
	const void* src,
	size_t num)
{
	assert(dest && src);
	//储存目标空间的起始地址
	void* ret = dest;

	while (num--)
	{
		//void*类型的数据不能直接解引用
		//复制每一个字节
		
		//*((char*)dest)++ = *((char*)src)++;//对临时变量进行操作在某些编译器下可能无法运行
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1 ;
		src = (char*)src + 1 ;
	}

	//返回起始地址，便于观察
	return ret;
}



//实现memmove
void* my_memmove(void* dest,
	const void* src,
	size_t num)
{
	assert(dest && src);
	void* ret = dest;

	//比较源地址和目的地址，确定拷贝顺序
	//dest在src前，就从前向后拷贝；反之则从后向前拷贝
	

	//dest在src左边
	if (src>dest)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
		//dest在src右边
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	
	return ret;
}