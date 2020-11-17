#include <iostream>
using namespace std;
int main(){
	int a,b,           t,x = 0,y = 0 ,          k =0; 
	cin >> t;
	cin >> x;

	for(int i =0 ; i<t ; i++){
		
		cin >> a;
		cin >> b;
		if(a-b >=0){
			k += a-b;	
		}
		else if((a-b <0) && (y<x)){			
			y++;
		}
		else if((a-b <0) && (y>=x)){
			k += a-b		;	
		}
	}
	cout << k << endl;
}
