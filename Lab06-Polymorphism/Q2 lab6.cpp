#include<iostream>
using namespace std;
class Calculator{
	private:
		float num1;
		float num2;
		float num3;
	public:
		void setnum1(float f1){
		    num1=f1;
		}
		void setnum2(float f2){
		    num2=f2;
		}
		void setnum3(float f3){
		    num3=f3;
		}
		float add(float x,float y){
		    return x+y;
		}
			float add(float x,float y,float z){
		    return (x+y)+z;
		}
			float sub(float x,float y){
		    return x-y;
		}
			float sub(float x,float y,float z){
		    return (x-y)-z;
		}
			float mul(float x,float y){
		    return x*y;
		}
			float mul(float x,float y,float z){
		    return (x*y)*z;
		}
			float divv(float x,float y){
			    if(y==0){
			        cout<<"Error"<<endl;
			        return 0;
			    }
			    else{
			        return x/y;
			    }
		}
			float divv(float x,float y,float z){
			    if(y==0 || z==0){
			        cout<<"Error"<<endl;
			        return 0;
			    }
			    else{
			        return (x/y)/z;
			    }
			}
};
int main(){
    float a,b,c;
    Calculator c1;
    int choice,count;
    cout<<"*****Calculator*****"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter your choice(1-4)"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"How many numbers do you want to enter(2 0r 3): "<<endl;
        cin>>count;
        if(count==2){
            cout<<"Enter 2 numbers: "<<endl;
            cin>>a>>b;
            cout<<"Result of 2 numbers addition is: "<<c1.add(a,b)<<endl;
        }
        else if(count == 3){
            cout<<"Enter 3 numbers: "<<endl;
            cin>>a>>b>>c;
             cout<<"Result of 3 numbers addition is: "<<c1.add(a,b,c)<<endl;
        }
        else{
            cout<<"Invalid count"<<endl;
        }
        break;
        case 2:
        cout<<"How many numbers do you want to enter(2 0r 3): "<<endl;
        cin>>count;
        if(count==2){
            cout<<"Enter 2 numbers: "<<endl;
            cin>>a>>b;
            cout<<"Result of 2 numbers subtraction is: "<<c1.sub(a,b)<<endl;
        }
        else if(count == 3){
            cout<<"Enter 3 numbers: "<<endl;
            cin>>a>>b>>c;
             cout<<"Result of 3 numbers subtraction is: "<<c1.sub(a,b,c)<<endl;
        }
        else{
            cout<<"Invalid count"<<endl;
        }
        break;
        case 3:
       cout<<"How many numbers do you want to enter(2 0r 3): "<<endl;
        cin>>count;
        if(count==2){
            cout<<"Enter 2 numbers: "<<endl;
            cin>>a>>b;
            cout<<"Result of 2 numbers multiplication is: "<<c1.mul(a,b)<<endl;
        }
        else if(count == 3){
            cout<<"Enter 3 numbers: "<<endl;
            cin>>a>>b>>c;
             cout<<"Result of 3 numbers multiplication is: "<<c1.mul(a,b,c)<<endl;
        }
        else{
            cout<<"Invalid count"<<endl;
        }
        case 4:
        cout<<"How many numbers do you want to enter(2 0r 3): "<<endl;
        cin>>count;
        if(count==2){
            cout<<"Enter 2 numbers: "<<endl;
            cin>>a>>b;
            cout<<"Result of 2 numbers division is: "<<c1.divv(a,b)<<endl;
        }
        else if(count == 3){
            cout<<"Enter 3 numbers: "<<endl;
            cin>>a>>b>>c;
             cout<<"Result of 3 numbers division is: "<<c1.divv(a,b,c)<<endl;
        }
        else{
            cout<<"Invalid count"<<endl;
        }
        break;
        
        default:
            cout<<"invalid choice"<<endl;
        
    }
    return 0;
}
