#include<stdio.h>
#define NIN 5

struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day data;
	char blood[5];
};
main()
{
	struct profile data[NIN] = { {"AAAA",2000,1,1,"A"},
		{"rina",2002,2,20,"B"},
		{"CCCC",1998,5,1,"O"},
		{"DDDD",1997,12,31,"AB"},
		{"kanami",1970,2,17,"A"} };

	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (p->data.tuki == 2) {
			printf("%s--%d”N %02d ŒŽ %02d “ú¶@ŒŒ‰tŒ^-%sŒ^\n",
				p->name, p->data.nen, p->data.tuki, p->data.hi, p->blood);
		}
	}
}