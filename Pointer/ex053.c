#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b, * w;

	printf(":*p_a=%d \t *p_b=%d\n", *p_a, *p_b);

	//�|�C���^�̕ۑ����Ă���A�h���X�����ւ�
	w = p_a;
	p_a = p_b;
	p_b = w;

	printf(":*p_a=%d \t *p_b=%d\n", *p_a, *p_b);
}