/*
#include <stdio.h>

int main()
{
	printf("hello world!!!");
	int i = 0;
	i++;
	printf("%d/n",i);
	return 0;
}
*/

#include <stdio.h>


void f(){
        printf("f is called\n");
}

int i = 0;

int main(){
        f();
        i = 4;
        printf("hello World\n");
        return 0;

}

