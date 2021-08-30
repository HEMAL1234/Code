
/* MD.NAHIDUL HASAN HIMEL
 DEPT.OF.COMPUTER SCIENCE AND ENGINEERING
 COMILLA UNIVERSITY,COMILLA
 EMAIL:nahidulhemal123@gmail.com
*/






#include <bits/stdc++.h>

using namespace std;




int main()
{
	double distance , traffic , speed , green , red;            //5 4 3 1 1
	cin >>  distance >> traffic >> speed >> green >> red;
	double time = 0.0;

	time= time+( traffic / speed);

	double temp1 = time;
	double temp2 = ((distance - traffic)/speed);


	double cnt = 0.0;

	for(int i = 0 ;  ; i++)
	{
		if(i % 2 == 0) cnt+=green;
		 if(i%2 !=0) cnt+=red;
		if(cnt > time && i %2 == 0 ){cout<<fixed<<setprecision(8)<<temp1+temp2;return 0 ;}
		if(cnt > time && i % 2 == 1){	cout<<fixed<<setprecision(8)<<( temp1+(cnt - time) + temp2	); return 0;	}

	}


}

