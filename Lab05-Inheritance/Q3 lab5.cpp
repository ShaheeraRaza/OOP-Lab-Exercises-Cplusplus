#include<iostream>
using namespace std;
class Weapons{
	public:
		void WeaponDescription(){
			cout<<"...Weapon Description"<<endl;
			cout<<"1.device that is used to deter, threaten, inflict physical damage, harm, or kill"<<endl;
		}
};
class hotWeapons: public Weapons{
	public:
		void HotWeaponsDescription(){
			cout<<"...Hot Weapon Description..."<<endl;
			cout<<"1.It uses gun powder"<<endl;
			cout<<"2.It explodes"<<endl;
		}
};
class bomb: public hotWeapons{
	public:
		void bombDescription(){
			cout<<"...Bomb Description..."<<endl;
			cout<<"1.It blows up"<<endl;
			cout<<"2.An explosive weapon that can cause destruction"<<endl;
		}
};
class nuclearBombs: public bomb{
	public:
		void NuclearbombDescription(){
			cout<<"...Nuclear Bomb Description..."<<endl;
			cout<<"It blows up."<<endl;
			cout<<"2.It follows fission and fusion reaction "<<endl;
		}
};
int main(){
	nuclearBombs w1;
	w1.WeaponDescription();
	w1.HotWeaponsDescription();
	w1.bombDescription();
	w1.NuclearbombDescription();
	return 0;
}




