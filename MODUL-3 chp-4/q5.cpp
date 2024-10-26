#include<stdio.h>
main()
{
	int i,j,a1[50],a2[50],choise,n1,n2,temp;

	
	printf("enter first elemnt array size:");
	scanf("%d",&n1);
	
	printf("enter %d element is :",n1);
	for(i=0;i<n1;i++){
		
		scanf("%d",&a1[i]);
	}

	{
	
	printf("enter secomd elemnt array size:");
	scanf("%d",&n2);
	
	printf("enter %d element is :",n2);
	for(i=0;i<n2;i++){
		
		scanf("%d",&a2[i]);
	}
}


 printf("enter choise(1 for assending or 2 for desending order):");
 scanf("%d",&choise);
 
 if(choise==1)
 {
 	for(i=0;i<n1;i++)
 	{
 		for(j=i+1;j<n1;j++)
 		{
 			if(a1[i]>a1[j])
 			{
 				temp=a1[i];
 				a1[i]=a1[j];
 				a1[j]=temp;
			 }
		 }
	 }
	 
	 printf("assending order of first element is :");
	 for(i=0;i<n1;i++)
	 {
	 
	 printf("%d",a1[i]);
}
}
else if(choise==2)
{
 	for(i=0;i<n2;i++)
 	{
 		for(j=i+1;j<n2;j++)
 		{
 			if(a2[i]<a2[j])
 			{
 				temp=a2[i];
 				a2[i]=a2[j];
 				a2[j]=temp;
			 }
		 }
	 }
	 
	 printf("assending order of first element is :");
	 for(i=0;i<n2;i++)
	 {
	 
	 printf("%d",a2[i]);
}
 
 }
 
 
 

}
