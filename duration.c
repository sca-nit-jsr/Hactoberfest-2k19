#include <stdio.h>

int main(){
	int sh,sm,eh,em,d,h,m,t,m1,m2;
	scanf("%d",&t);

	while(t)
	{
        scanf("%d%d%d%d", &sh,&sm,&eh,&em);
    	m1=sh*60+sm;
	    m2=eh*60+em;
    	d=m2-m1;
	    h=d/60;
	    m=d%60;
	    printf("%d %d\n",h,m);
	    t--;
	}
}
