#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, target, work, data[20];
	srand(time(0));
	rand();
	
	//‰º€”õ
	i = 0;
	while (i<20)
	{
		data[i] = i + 1;
		i++;
	}
	
	//ƒVƒƒƒbƒtƒ‹
	i = 0;
	while (i<20)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		i++;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", data[i]);
	}
}