#include<iostream>

int mayor(int a, int b, int c);

using namespace std;

int main(){
	
    int a,b,c,n;
    
    std::cout<<"introduzca el valor del primer numero:\n"; std::cin>>a;
    
    cout<<"introduzca el valor del segundo numero\n";cin>>b;
    
    cout<<"introduzca el valor del tercer numero\n";cin>>c;
   
    n=mayor(a,b,c);
    
    cout<<"mayor es: "<<n<<endl;
    cin.ignore();
	return 0;
}

int mayor(int a,int b,int c){
	
int n;

    if(a>b)
    
    if(a>c)
    n=a;
    else
    n=c;
    else
    if(b>c)
    n=b;
    else
    n=c;
    
    
    
return n;
}
