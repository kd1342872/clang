#include<stdio.h>
main() 
{
	int data, sum, cut;

	//����
	printf("�����F");
	ret = scanf("%d", &data);

	while (data!=EOF)
	{
		//�v�Z
		sum += data;
		cut++;
		//����
		printf("�����F");
		ret = scanf("%d", &data);
	}
	//���v�ƕ��ς����߂�
	printf("���v=%d ����=%.2f\n", sum, (float)sum / cut);
}
 