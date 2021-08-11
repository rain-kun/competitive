#include<bits/stdc++.h>
#include <sstream>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box
class Box{

    int l,b,h;
// The class should have the following functions :
    public:
// Constructors:
         Box(){
             l = b = h = 0;
         }
         Box(int len,int bre,int hei){
            l = len;
            b = bre;
            h = hei;
         }
         Box(const Box&B){
             l = B.l;
             b = B.b;
             h = B.h;
         }


        int getLength(){
            return l;
        } // Return box's length
        int getBreadth (){
            return b;
        } // Return box's breadth
        int getHeight (){
            return h;
        }  //Return box's height
        long long CalculateVolume(){
            return (l*b*h);
        } // Return the volume of the box

//Overload operator < as specified
        friend bool operator<(Box& A, Box& B)
        {
            if(A.l<B.l){
                if(A.b<B.b and A.l==B.l){
                    if(A.h <B.h and A.b==B.b and A.l==B.l){
                        return 1;}}}
            return 0;
        }
//Overload operator << as specified
        friend ostream& operator<<(ostream& output,const Box& B)
        {
            output<<B.l<<" "<<B.b<<" "<<B.h<<endl;
            return output;
        }

};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
