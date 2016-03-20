#include<stdio.h>
int main()
{
	int i;
	float t[300][3];
	for(i=0;i<103;i++)
	{
		float a,b,c,d,e,f,g,h;
		scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
		t[i][0]=a;
		t[i][1]=b;
		t[i][2]=c;
	}
	for(i=0;i<97*3;i++)
	{
		int s;
		scanf("%d",&s);
		printf("%f ,%f,%f,\n",t[s][0],t[s][1],t[s][2]);
	}
}

