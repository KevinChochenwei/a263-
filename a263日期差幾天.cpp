#include <iostream>
#include <math.h>
#include <ctype.h>
#include <string.h>


using namespace std;

int Calculate(int a,int b, int c){
	int sum=0;
	
		for(int i=1;i<a;i++)
			{
					if(i%4==0)
						{
							if(i%100!=0)
								sum=sum+366;
							else if(i%100==0&&i%400==0)
								sum=sum+366;
							else
								sum=sum+365;
						}
					else
						sum=sum+365;
				}
				
		for(int i=1;i<b;i++)
			{
				if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
					sum=sum+31;
				else if(i==4||i==6||i==9||i==11) 
					sum=sum+30;
				else
					{
				if(a%4==0)
							{
								if(a%100!=0)
									sum=sum+29;
								else if(a%100==0&&a%400==0)
									sum=sum+29;
								else
									sum=sum+28;
							}
						else
							sum=sum+28;						
										}					

					}
		for(int i=1;i<=c;i++)
			{
				sum=sum+1;	
				}
			return sum;
}

int main(){
	int Y1,M1,D1,Y2,M2,D2;
	
	while(cin>>Y1>>M1>>D1>>Y2>>M2>>D2){
		int temp1,temp2;
		
		temp1=Calculate(Y1,M1,D1);
		temp2=Calculate(Y2,M2,D2);
		cout<<abs(temp1-temp2)<<endl;
	}
			
	return 0;

}
