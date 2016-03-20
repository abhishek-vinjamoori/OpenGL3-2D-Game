#include<stdio.h>
int main()
{
	int i;
	float t[300][3];
	for(i=0;i<103;i++)
	{
		float a,b,c,d,e,f,g,h;
		scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
		t[i][0]=d;
		t[i][1]=e;
		//t[i][2]=c;
	}
	for(i=0;i<97*3;i++)
	{
		int s;
		scanf("%d",&s);
		if(t[s][0]>0.9 && t[s][1]> 0.9)
		{
			printf("%f ,%f,%f,\n",46/255.0,41/255.0,96/255.0);
		}
		else
		{
			printf("%f ,%f,%f,\n",(35+t[s][0]*220)/255.0,0.0,0.0);
			
		}
	}
}

