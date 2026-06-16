#include<iostream>
using namespace std;
class base{
    private:
    int privateint;
    protected:
    int protectedint;
    public:
    int publicint;
    //setters
    void setpri(int x){
        privateint=x;
    }
    void setpro(int y){
        protectedint=y;
    }
    void setpub(int z){
        publicint=z;
    }
    //getters
    int getpri(){
        return privateint;
    }
    int getpro(){
        return protectedint;
    }
    int getpub(){
        return publicint;
    }
};
    class publicChild: public base{
        public:
        void show(){
            cout<<".....PublicChild Class....."<<endl;
            publicint=10;//can be accessed directly
            cout<<"Public member accessed: "<<publicint<<endl;
            protectedint=20;//can be accessed directly
            cout<<"Protected member accessed: "<<protectedint<<endl;
            //privateint=30; can't access directly
            setpri(30);//accessed through mutator
            cout<<"Priavte member accessed through mutator: "<<getpri()<<endl;
        }
    };
    class protectedChild: protected base{
        public:
        void show(){
            publicint=10;//can be accessed directly
            cout<<".....ProtectedChild Class....."<<endl;
            cout<<"Public member accessed: "<<publicint<<endl;
            protectedint=20; //can be accessed directly
            cout<<"Protected member accessed: "<<protectedint<<endl;
            //privateint=30 can't access directly
            setpri(30);//accessed through mutator
            cout<<"Private member accessed through mutator: "<<getpri()<<endl;
        }
    };
    class privateChild: private base{
        public:
        void show(){
            cout<<".....PrivateChild Class....."<<endl;
            publicint=10;//can be accessed directly
            cout<<"Public member accessed: "<<publicint<<endl;
            protectedint=20;//can be accessed directly
            cout<<"Protected member accessed: "<<protectedint<<endl;
            //privateint=30; can't be accessed directly
            setpri(30);//accessed through mutator
            cout<<"Private member accessed through mutator: "<<getpri()<<endl;
        }
    };
int main(){
    publicChild p1;
    p1.show();
    protectedChild p2;
    p2.setpro(40);
    p2.show();
    privateChild p3;
    p3.show();
    return 0;
}




