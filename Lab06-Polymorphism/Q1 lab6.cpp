#include<iostream>
using namespace std;
class shape{
	protected:
		int numberofsides;
		float area;
	public:
		shape(int x): numberofsides(x),area(0){}
		void setnumberofsides(int x){
			numberofsides = x;
		}
		void setarea(float y){
			area = y;
		}
		int getnumberofsides(){
			return numberofsides;
		}
		float getarea(){
			return area;
		} 
};
class rectangle: public shape{
	protected:
		float length;
		float width;
	public:
		rectangle(float x,float y): shape(4){
			length=x;
			width=y;
		}
		void generatearea(){
			area=length*width;
		
		}
};
class triangle: public shape{
	private:
		float height;
		float base;
	public:
		triangle(float x,float y): shape(3){
			height=x;
			base=y;
		}
		void generatearea(){
			area=(height*base)/2;
			cout<<"Area of Triangle: "<<area<<endl;
		}
};
class circle: public shape{
	private:
		float radius;
	public:
		circle(float x): shape(0){
			radius=x;
		}
		void generatearea(){
			area=3.4128*radius*radius;
			cout<<"Area of Circle: "<<area<<endl;
		}	
};
class square: public rectangle{
	public:
	square(float x): rectangle(x,x){}
	bool checksides(){
		return length==width;
	}	
    void generateArea() {
        area = length * width;       
    }
};	
int main(){
	double side;
    rectangle r(10, 5);
    r.generatearea();
     cout << "Area of Rectangle: " <<r.getarea()<< endl;

    circle c(7);
    c.generatearea();

    triangle t(8, 6);
    t.generatearea();

    cout << "Enter side of square: ";
    cin >> side;

    square s(side);   
    s.generatearea();
      cout << "Square Area: " <<s.getarea()<< endl;
    
    if (s.checksides())
        cout << "Both sides are equal. It is a valid square." << endl;
    else
        cout << "Sides are not equal." << endl;	
	return 0;
}



