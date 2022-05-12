
#include<iostream>
using namespace std;
int main()
{
	
int choice;
int numOfRows;


do{

cout<<"Please select an option or press 0 to exit: \n1. Full Star Pyramid.\n";
cout<<"2. Inverfted Full Star Pyramid\n";
cout<<"3. Half Star Pyramid\n";
cout<<"4. Inverfted Half Star Pyramid\n";
cout<<"5. Empty Rectangle\n";
cout<<"6. Reverse Numbe\n";
cout<<"7. Empty Triangle\n";
cout<<"8. Empty Lozenge\n";
cout<<"9. Vending Machien Simulation\n";
cout<<"10. Class Average Calculator\n";
cout<<"11. Net Salaries Calculator\n";
cout<<"12. Print First and Last Digits of a given number\n";
cout<<"13. Time Calculator\n";
cout<<"14. Greatest Common Divisor\n";


cout<<"\nYour Choice is: ";//cin>>choice;
cin>>choice;	
switch(choice){
	
case 1: {
	cout<<"\nPlease enter the number of rows\n";cin>>numOfRows;
		for(int i=1;i<=numOfRows;i++)
		{
				for(int j=i;j<=numOfRows;j++)
	{
		cout<<" ";
	}
	for(int k=1;k<=2*i-1;k++)
	{
		cout<<"*";
	}
	cout<<"\n";
		}
	break;
}

case 2:
	{
		cout<<"Please enter the number of rows\n";cin>>numOfRows;
		for(int i=1;i<=numOfRows;i++)
		{
				for(int j=1;j<i;j++)
	{
		cout<<" ";
	}
	for(int k=i;k<=2*numOfRows-i;k++)
	{
		cout<<"*";
	}
	
	cout<<"\n";
		}
	break;
}

case 3: {
	cout<<"\nPlease enter the number of rows\n";cin>>numOfRows;
		for(int i=1;i<=numOfRows;i++)
		{
				for(int j=1;j<=i;j++)
	{
		cout<<"*";
	}

	cout<<"\n";
		}
	break;
}

case 4: {
	cout<<"\nPlease enter the number of rows\n";cin>>numOfRows;
		for(int i=1;i<=numOfRows;i++)
		{
				for(int j=i;j<=numOfRows;j++)
	{
		cout<<"*";
	}

	cout<<"\n";
		}
	break;
}

case 5: {
	cout<<"\nPlease enter the number of rows\n";cin>>numOfRows;
        for(int i=1; i<=numOfRows; i++)
        {
            for(int j=1; j<=numOfRows; j++)
            {
                if(i==1 || i==numOfRows || j==1 || j==numOfRows)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
	break;
}

case 6: {
		int rn=0,n;

        cout<<"\nEnter a number\n ";cin>>n;

        while(n>0)
        {
            rn = rn *10 + (n%10) ;
            n=n/10;
        }

        cout<<"The reverse of the integer is: "<< rn<<"\n\n";
        break;
}
        


case 7: {
	cout<<"\nPlease enter the number of rows\n";cin>>numOfRows;
	int index=1;
        for(int i=1; i<=numOfRows; i++)
        {
            for(int j=i; j<=numOfRows; j++)
            {
            	cout<<" ";
            }
            cout<<"*";
            if(i!=1)
            {
            	
            for(int k=1;k<=index;k++)
            {
            	cout<<" ";
            }
            cout<<"*";
			
			index+=2;
            }
              
            cout<<endl;
        }
         for (int i=1; i<=index+2; i++)
	 	 {
	 	 	
	 	 	cout<<"*";	
	 	 				 
		 }
		 cout<<endl<<endl;
	break;
}


case 8: {
	cout<<"\nPlease enter the number of rows\n";cin>>numOfRows;
	int index=1;
        for(int i=1; i<=numOfRows; i++)
        {
            for(int j=i; j<=numOfRows; j++)
            {
            	cout<<" ";
            }
            cout<<"*";
            if(i!=1)
            {
            	
            for(int k=1;k<=index;k++)
            {
            	cout<<" ";
            }
            cout<<"*";
			
			index+=2;
            }
              
            cout<<endl;
        
        if(i==numOfRows)
        {
        	cout<<"*";
        for (int i=1; i<=numOfRows*2-1; i++)
	 	 {
	 	 	
	 	 	cout<<" ";	
	 	 				 
		 }
		 cout<<"*";
		 cout<<"\n";
		 for(int k=1;k<=numOfRows;k++)
		 {
		 	for(int b=1;b<k;b++)
		 	{
	 		cout<<" ";	
	 		}
 			cout<<"*";
 			for(int j=k;j<=numOfRows*2-k;j++)
 			{
			 	cout<<" ";
			 }
			 cout<<"*";
			 cout<<"\n";
 		}
 		for(int i=1;i<=numOfRows;i++)
 		{
		 	cout<<" ";
		 }
		 cout<<"*";

        }
        }
 
		 cout<<endl<<endl;
	break;
}

case 9:
{
	
		int coins, drink, cont,newCoins;
	
	cout<<"Please enter coins, or or press \'0\' to exit\n";
	cin>>coins;
			
	while(coins>0)
		{
			cout<<"Please select a drink (1, 2 or 3), or press \'0\' to exit\n";
			cout<<"1 coffee ( 1$ ) \n2 Tea ( 2$ ) \n3 Milk ( 3$ )\n\n";
			cout<<"Drink: ";cin>>drink;
			if(drink==1 && coins>=1)
			{
				cout<<"You drink is ready\n";
				coins-=1;

			}
			else if(drink==2 && coins>=2)
			{
				cout<<"You drink is ready\n";
				coins-=2;

			}
			else if(drink==3 && coins>=3)
			{
				cout<<"You drink is ready\n";
				coins-=3;

			}
			else if(drink==0)
			{
				
				cout<<"\nThanks for using our vending machine ...:)\n";
				break;
			}
			
			else if(drink>3)
			{
				continue;
			}

			else{
				cout<<"Not Enoug Coins\nYou only have: "<<coins<<"\n";
				cout<<"Do you want to insert coins\n1 Yes \n2 No: "<<"\n";
				cin>>cont;
				if(cont==1)
				{
					cout<<"Please enter coins:\n";cin>>newCoins;
					coins+=newCoins;
					cout<<"You have: "<<coins<<"  coins\n";
				}
				else
				{
					continue;
				}
				
				
				
			}
			
	}
	if(coins==0)
	{
		cout<<"\nThanks for using our vending machine ...:)\n";
		break;
	}

break;	
}




case 10:
{
	
	int nOfStudents;
	int nOfMarks,fail=0,pass=0;
	int c1=1;
	float mark,avg1=0,sum1=0,avg2=0,classavg=0;
	cout<<"Please enter the number of Students \n";
	cin>>nOfStudents;
	for(int i=1;i<=nOfStudents;i++)
	{
	cout<<"Please enter the number of marks for Student "<<i<<"\n";
	cin>>nOfMarks;
	
	while(c1<=nOfMarks)
	{
		cout<<"Please enter Mark "<<c1<<"\n";
		cin>>mark;
		sum1+=mark;
		c1++;
	}
	c1=1;

	avg1=sum1/nOfMarks;
	sum1=0;

	
	cout<<"\nAverage for student "<<i<< " is "<<avg1<<"\n\n";
	if(avg1<50)
	{
		fail+=1;
	}
	if(avg1>=50)
	{
		pass+=1;
	}
	avg2=avg2+avg1;
	}
	classavg=avg2/nOfStudents;
	cout<<"\n--------------------------------------------\n";
	cout<<"Average for the Whole Class is "<<classavg<<"\n";
	cout<<"Number of Pass Students is  "<<pass<<"\n";
	cout<<"Number of Fail Students is  "<<fail<<"\n";

break;	

}

case 11:
{
	
	int nOfEmployees;

	float salary, netSalary;
	cout<<"Please enter the number of Employees \n";
	cin>>nOfEmployees;
	for(int i=1;i<=nOfEmployees;i++)
	{
	cout<<"Please enter the Salary for Employee "<<i<<"\n";
	cin>>salary;
	
	if(salary>=2000)
	netSalary=salary - (salary*0.06);
	
	if(salary<2000 && salary>=1000 )
	netSalary=salary - (salary*0.04);
	
	if(salary<1000)
	netSalary=salary - (salary*0.02);
		
	cout<<"\nNet Salary for Employee  "<<i<<" is "<<netSalary<<"\n\n";
	}

break;	
}

case 12: {
		int fDigit, lDigit,a=0,n;

        cout<<"\nEnter a number\n";cin>>n;
        a=n;
        lDigit=n%10;
        if(n>0)
        {

        while(n!=0)
        {
            fDigit = n%10 ;
            n=n/10;
        }
        cout<<"\nThe first digit in the number "<<a<<" is "<< fDigit<<"\n";
        cout<<"\nThe last digit in the number "<<a<<" is "<< lDigit<<"\n\n";
        }
        else
        {
        	cout<<"\nThis number is invalid\n";
        }

        
        break;

}

case 13: {
int nSeconds, h,m,s,temp;
        cout<<"\nEnter the number of Seconds:\n";
        cin>>nSeconds;

        h=nSeconds/3600;
        temp=nSeconds - h*3600;
        m=temp/60;
        temp=temp - m*60;
        s=temp;
        cout<<"\n"<<h<<" : " <<m<<" : "<<s<<endl;
        
        break;
}

case 14:
{
	
	        int fNumber, sNumber, gcd;
        cout<<"\nEnter First Number:\n";
        cin>>fNumber;
        if(fNumber<0)
        {
            cout<<"\nPlease enter a positive number: \n";
            cin>>fNumber;

        }
        cout<<"\nEnter Second Number:\n";
        cin>>sNumber;
        if(sNumber<0)
        {
            cout<<"\nPlease enter a positive number: \n";
            cin>>sNumber;
        }

        if(fNumber ==0 || sNumber==0)
        {
            gcd=0;
            cout<<"\nThe Greatest Common Divisor between " <<fNumber << "  and  " << sNumber << " is: \t"<<gcd;
            return 0;
        }
        else
        {

            for(int i=1; i<=fNumber && i<=sNumber; i++)
            {
                if(fNumber%i==0 && sNumber%i==0)
                {
                    gcd=i;
                }
            }

            cout<<"\nThe Greatest Common Divisor between " <<fNumber << "  and  " << sNumber << " is: \t"<<gcd<<"\n";
        }
break;
}
}

}while(choice!=0);

cout<<"\n\nThank You\n\n";
return 0;
}