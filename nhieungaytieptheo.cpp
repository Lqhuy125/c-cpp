#include<stdio.h>
int main(){
 int nd,nm,ny,n;
 scanf("%d/%d/%d",&nd,&nm,&ny);
 scanf("%d", &n);
 for (int i = 0; i<n;i++)
 {
  	if(nm==1||nm==3||nm==5||nm==7||nm==8||nm==10||nm==12)
  	{
  		if(nd==31)
  		 {
  		 	nd=1;
  		 	if(nm==12)	
			{
			   	nm=1;
			   	ny=ny+1;
			}
			else
			{
			    nm=nm+1;
			   	ny=ny;	
			}		 	
		 }
		else
		 {
		 	nd=nd+1;
		 	nm=nm;
			ny=ny;				
		 } 
	}
	else if(nm==4||nm==6||nm==9||nm==11)
  	{
  		if(nd==30)
  		 {
  		 	nd=1;
  		 	nm=nm+1;		 	
		 }
		else
		 {
		 	nd=nd+1;
		 	nm=nm;			
		 } 
		 
		ny=ny;	 
	}
	else if(((ny % 4 == 0 && ny % 100!= 0) || ny%400 == 0 )&&nm==2)
	{
		if(nd==29)
		{
			nd=1;
			nm=nm+1;		
		}
		else
		{
			nd=nd+1;
			nm=nm;	
		}	
		ny=ny;	
	}
	else
	{
		if(nd==28)
		{
			nd=1;
			nm=nm+1;		
		}
		else
		{
			nd=nd+1;
			nm=nm;	
		}	
		ny=ny;	
	}
    printf("%d/%d/%d",nd,nm,ny); 
    printf("\n");
}
 return 0;
}
