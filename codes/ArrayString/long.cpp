
#include<bits/stdc++.h>


using namespace std;

int func1(string dow)
{
	 if(dow=="Monday")
          {
          	   return 8;
		  }
		  else if(dow=="Tuesday")
		  {
		  	return 9;
		  }
		  else if(dow=="Wednesday")
		  {
		  	return 10;
		  }
		  else if(dow=="Thursday")
		  {
		  	  return 11;
		  }
		  else if(dow=="Friday")
		  {
		  	return 12;
		  }
		  else if(dow=="Saturday")
		  {
		  	return 13;
		  }
		  else if(dow=="Sunday")
		  {
		  	return 14;
		  }
}
int func(string dow)
{
	 if(dow=="Monday")
          {
          	   return 4;
		  }
		  else if(dow=="Tuesday")
		  {
		  	return 3;
		  }
		  else if(dow=="Wednesday")
		  {
		  	return 2;
		  }
		  else if(dow=="Thursday")
		  {
		  	  return 1;
		  }
		  else if(dow=="Friday")
		  {
		  	return 0;
		  }
		  else if(dow=="Saturday")
		  {
		  	return 6;
		  }
		  else if(dow=="Sunday")
		  {
		  	return 5;
		  }
}

int  getNumberOfDays(int month, int year)
{

	if( month == 2)
	{
		if((year%400==0) || (year%4==0 && year%100!=0))	
			return 29;
		else	
			return 28;
	}

	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
	||month == 10 || month==12)	
		return 31;
	else 		
		return 30;
}


int   CalcDayNumFromDate(int  y, int m,int  d)
{
  m = (m + 9) % 12;
  y -= m / 10;
  int   dn = 365*y + y/4 - y/100 + y/400 + (m*306 + 5)/10 + (d - 1);

  return dn;
}


std::string CalcDayOfWeek(int y, int  m, int  d)
{
  std::string day[] = {
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday"
  };

  int  dn = CalcDayNumFromDate(y, m, d);

  return day[dn % 7];
}


int main()
{
	
	
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	 long long  m1,y1,m2,y2;
	 	 cin>>m1>>y1>>m2>>y2;
	 	 if(m1>2)
	 	 {
	 	 	 y1=y1+1;
	 	 	 m1=2;
	 	 }
	 	 else 
	 	 {
	 	 	 m1=2;
	 	 }

	 	 if(m2>2)
	 	 {
	 	 	 m2=2;
	 	 }
	 	 else
	 	 {
	 	 	m2=2;
	 	 	y2=y2-1;
	 	 }
	 	 int count=0;
	 	 while(m1!=m2||y1!=y2)
	 	 {
	 	 	   string dow=CalcDayOfWeek(m1,y1,1);
	 	 	   int l1=func(dow);
	 	 	   l1++;
	 	 	   int u1=getNumberOfDays(m1,y1);
	 	 	   string dow1=CalcDayOfWeek(m2,y2,u1);
	 	 	   int l2=func(dow1);
	 	 	   l2=u1-l2;
	 	 	   if(l1>=l2)
	 	 	   {
                     count++;
	 	 	   }
	 	 }
	 	  string dow=CalcDayOfWeek(m1,y1,1);
	 	 	   int l1=func(dow);
	 	 	   l1++;
	 	 	   int u1=getNumberOfDays(m1,y1);
	 	 	   string dow1=CalcDayOfWeek(m2,y2,u1);
	 	 	   int l2=func(dow1);
	 	 	   l2=u1-l2;
	 	 	   if(l1>=l2)
	 	 	   {
                     count++;
	 	 	   }
	 	 	   cout<<count<<endl;
	 }

     
}