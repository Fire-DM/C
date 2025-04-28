#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>



//ʵ��memcpy�Ĺ��ܣ���һ�����ݸ��Ƶ���һ��������
void* my_memcpy(void* dest,
	const void* src,
	size_t num)
{
	assert(dest && src);
	//����Ŀ��ռ����ʼ��ַ
	void* ret = dest;

	while (num--)
	{
		//void*���͵����ݲ���ֱ�ӽ�����
		//����ÿһ���ֽ�
		
		//*((char*)dest)++ = *((char*)src)++;//����ʱ�������в�����ĳЩ�������¿����޷�����
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1 ;
		src = (char*)src + 1 ;
	}

	//������ʼ��ַ�����ڹ۲�
	return ret;
}



//ʵ��memmove
void* my_memmove(void* dest,
	const void* src,
	size_t num)
{
	assert(dest && src);
	void* ret = dest;

	//�Ƚ�Դ��ַ��Ŀ�ĵ�ַ��ȷ������˳��
	//dest��srcǰ���ʹ�ǰ��󿽱�����֮��Ӻ���ǰ����
	

	//dest��src���
	if (src>dest)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
		//dest��src�ұ�
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	
	return ret;
}