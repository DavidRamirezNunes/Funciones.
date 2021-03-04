


#include<iostream>

void mayor(int a, int b);

using namespace std;

int main(){
	
    int a,b;
    cout<<"introduzca el valor del prmer numero\n";cin>>a;
    
    cout<<"introduzca el valor del segundo numero\n";cin>>b;
    
    
   
   
    mayor(a,b);
    return 0;
}

void mayor(int a,int b){

if (a>b){
	
	printf("%d es mayor",a);
	
}
else if(a<b){
	printf("%d es mayor",b);
	
}
else
printf("error");
}
