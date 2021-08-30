#include <iostream>
#include <string>
using namespace std;

int professor_id=0;// int  professor_id=0;
int student_id=0;// int student_id=0;
class Person{
public:
	string name;// string name;
	int age,publication,id;// int id,age,publication
	virtual void putdata()=0;// virtual void putdata()=0;
	virtual void getdata()=0;// virtual void getdata()=0;
};
class Professor : public Person{
	void putdata(){cout<<name<<' '<<age<<' '<<publication<<' '<<++professor_id<<endl;}
	void getdata(){cin>>name>>age>>publication;}
};
class Student : public Person{
	void putdata(){cout<<name<<' '<<age<<' '<<publication<<' '<<++student_id<<endl;}
	void getdata(){cin>>name>>age;publication=0;for(int i=0,x;i<7;i++)cin>>x,publication+=x;} // cin>> name>>age>>score=0;//for(int i=0;x<6;i++)cin>>x,score+-x;
};

int main(){
	int n, m;
	cin>>n;
	Person *arr[n];//

	for(int i = 0;i < n;i++){  // for(int i=0;i,n;i++)

		cin>>m;
		if(m == 1){   //
			arr[i] = new Professor;

		}
		else arr[i] = new Student;

		arr[i]->getdata();

	}

	for(int i=0;i<n;i++)
		arr[i]->putdata();

	return 0;
}
