#include <stdio.h>
#include <math.h>
int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p){
	double y=p;
	int r=1;
	if(p<2){
		r=0;
	}
	for(int u=2;u<sqrt(y)+1;u++){
		if(p%u==0){
			r=0;
			break;
		}
	}
	return r;
}
int PrimeSum( int m,int n ){
	if(m<2){
		m=2;
	}
	int i=m,sum=0;
	for(i;i<n;i++){
		sum+=prime(i)*i;
	}
	return sum;
}
