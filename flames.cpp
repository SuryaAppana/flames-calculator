#include<iostream> 
#include<string.h>
using namespace std; 
int main() 
{  
 char a[20],b[30];  
 cout<<"Enetr first name:\n";  
 cin>>a; 
 cout<<"Enter Second name:\n";   
 cin>>b;  
 int i,j,m,n;  
 i=strcmp(a,b); 
 if(i==0)  
   {
       cout<<"Don't be self obssessed.It's unnatural...";  exit(0);
   }i=0;   
 while(1)          
   {            
    for(j=0;b[j]!='\0';j++) 
       if(a[i]==b[j]&&a[i]!='\0')      
          {            
             for(int m=i;a[m]!='\0';m++)       
             a[m]=a[m+1];        
             for(int n=j;b[n]!='\0';n++)            
             b[n]=b[n+1]; 
          }      
             if(a[i]=='\0')       
                 break;       
             else       
                 i++;         
    }
  i=strcmp(a,b);  
  if(i==0)  
  {  
     cout<<"Don't be self obssessed.It's unnatural..."; 
     exit(0);    
  }  
   int x=strlen(a)+strlen(b); 
   char c[10]={'f','l','a','m','e','s'};  
   if(x==0)  
   cout<<"You're a Gay"; 
   for(i=1;i!=0&&c[1]!='\0';i++)  
      {  
           if(i%x==0)   
           {    
           n=i;    
           while(n>strlen(c))    
           n=n-strlen(c);   
            for(m=n-1;m<6;m++)   
             c[m]=c[m+1];  
            } 
             }
               if(c[1]=='\0')  
               {   
               switch(c[0])   
               {    case 'f':cout<<"\nFRIENDS";   
                break;    
                case 'l':cout<<"\nLOVERS";   
                 break;  
                   case 'a':cout<<"\nATTRACTION";   
                    break;   
                     case 'm':cout<<"\nMARRIAGE";  
                       break;    
                       case 'e':cout<<"\nENEMY";   
                        break;    
                        case 's':cout<<"\nSISTERS/BROTHERS";    break;    
                        default: cout<<"\n !!!ERROR 404 ::NOT FOUND YOU'LL DIE SINGLE";    
                          }  }  
                          return 0; } 
