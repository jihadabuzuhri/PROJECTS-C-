#include<iostream.h>

 int strln (char *a)
 
 {
 	int c=0;
 	for(;*a!='\0';c++,a++);
 	return c;
 }
 
 char * strcopy  (char * a,char * b)
 {
 	char *c=new char [strln(a)+1];
 	c=a;
 	for(;(*a=*b)!='\0';a++,b++);
 	return c;
 }


char * strncopy  (char * a , char * b , int n)
 {
 	
 	char *c=new char [strln(a)+1];
 	c=a;
 	 for(int i=0;i<n;a++,b++,i++)
 	 {
	 	*a=*b;
	 }
    return c;
 }
 
 
 char * strcat  (char * a , char * b )
 {
 	
 	char *c=new char [strln(a)+strln(b)+1];
 	c=a;
 	a+=strln(a);
 	
 	for(;(*a=*b)!='\0';a++,b++);
 	
    return c;
 }
 
 
 char * strncat  (char * a , char * b ,int n)
 {
 	
 	char *c=new char [strln(a)+strln(b)+1];
 	c=a;
 	a+=strln(a);
 	
 	 for(int i=0;i<n;a++,b++,i++)
 	 {
	 	*a=*b;
	 }
 	
    return c;
    
 }
 
  
 
 int strcom  (char * a , char * b )
 {
 	
 	for(;*a!='\0'||*b!='\0';a++,b++)
 	{
	int c=*a;
	int d=*b;
	if(c>d)
	return 1;
	if(c<d)
	return -1;
	if(c==d) 
	continue;	
    }
    return 0;
 }
 
 int strncom  (char * a , char * b ,int n)
 
 {
 	
 	for( int i=0;i<n;a++,b++,i++)
 	{
	int c=*a;
	int d=*b;
	if(c>d)
	return 1;
	if(c<d)
	return -1;
	if(c==d) 
	continue;	
    }
    return 0;
 }
 
main ()
 {
	 char a[30]={"jihad"};
  	 cout<<"a :"<<a<<endl;
	 cout<<"strln : "<<strln (a)<<endl;
	 cout<<"strcopy : "<<strcopy (a,"user")<<endl;
	 char b[30]={"jihad"};
	 cout<<"strncopy(n=3) : "<<strncopy (b,"user",3)<<endl;
	 char c[30]={"jihad"};
	 cout<<"strcat : "<<strcat (c,"user")<<endl;
	 char d[30]={"jihad"};
	 char e[30]={"user"};
     cout<<"strncat (n=3): "<<strncat (d,e,3)<<endl;
     char f[30]={"jihad"};
	 char g[30]={"user"};
	 cout<<"strcom : "<<strcom (f,g)<<endl;
	 char h[30]={"jihad"};
	 char i[30]={"jihoo"};
     cout<<"strncat (n=3): "<<strncom (h,i,3)<<endl;
	
 }
    
