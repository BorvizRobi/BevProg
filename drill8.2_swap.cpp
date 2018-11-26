#include "std_lib_facilities.h"


double swap_v(int a,int b)
{

	int temp;
	temp=a;
	a=b;
	b=temp;

}

double swap_r(int& a,int& b)
{

	int temp;
	temp=a;
	a=b;
	b=temp;
}

// nem lehett lefordítani ezt a funkciót mert konstans értékét nem lehet megváltoztatni.
//
//double swap_cr(const int& a,const int& b)
//{
//
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}




int main(){

int x=7;
int y=9;

//le lehet fordítani de nem cseréli meg az értékeket mert 
//az értékekről készült másolatot kapott a funkció
swap_v(x,y);
cout<<"swap_v(x,y)= "<<x<<" "<<y<<"\n";

//lefut és meg is cseréli az értékeket mert referenciát adtunk át.
swap_r(x,y);
cout<<"swap_r(x,y)= "<<x<<" "<<y<<"\n";

//swap_v(7,9);  lefut de nem csinál semmit mert az ideiglenes 
//		változok a funkción belul a funkció lefutása után megsemmisülnek.

//swap_r(7,9);  nem fordul le int& vár és nem fogad el lvalue-t.

const int cx = 7;
const int cy = 9;



//swap_v(cx,cy);le lehet fordítani de nem cseréli meg az értékeket mert 
//		az értékekről készült másolatot kapott a funkció


//swap_r(cx,cy);nem lehet leforditani: konstans értéke nem változhat.

//swap_v(7.7,9.9);le lehet fordítani de nem cseréli meg az értékeket mert 
//		  az értékekről készült másolatot kapott a funkció
//swap_r(7.7,9.9);nem fordul le int& vár és nem fogad el lvalue-t.

double dx = 7.7;
double dy = 9.9;

//swap_v(dx,dy); le lehet fordítani de nem cseréli meg az értékeket mert 
//az értékekről készült másolatot kapott a funkció mivel double-k az értékek ezért kerekít intre.
//swap_r(dx,dy); nem fordul le int& vár és nem fogad el lvalue-t.
};
