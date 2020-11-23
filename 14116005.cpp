#include <iostream>
using namespace std;

int main(){
	int binner[6];
	int a, b, c, d, e, f, g, x, y, z;
	
	for(int i=0;i<7;i++){
		cout << "Binner Ke-" << i + 1 << " : ";
		cin >> binner[i];
	}
	
	a = binner[0];
	b = binner[1];
	c = binner[2];
	d = binner[3];
	e = binner[4];
	f = binner[5];
	g = binner[6];
	
	x = a ^ b ^ d;
	y = a ^ c ^ d;
	z = b ^ c ^ d;
	
	cout << "Pesan : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << endl;
	
	if(e==x&&f==y&&g==z){
		cout << "Pesan benar dan Parity benar" << endl;
	}
	else if(e!=x&&f==y&&g==z){
		cout << "X salah" << endl;
		if(e==0){
			e = 1;
		}
		else{
			e = 0;
		}
		cout << "X diubah menjadi : " << e << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	else if(e==x&&f!=y&&g==z){
		cout << "Y salah" << endl;
		if(f==0){
			f = 1;
		}
		else{
			f = 0;
		}
		cout << "Y diubah menjadi : " << f << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	else if(e==x&&f==y&&g!=z){
		cout << "Z salah" << endl;
		if(g==0){
			g = 1;
		}
		else{
			g = 0;
		}
		cout << "Z diubah menjadi : " << g << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	else if(e!=x&&f!=y&&g==z){
		cout << "A salah" << endl;
		if(a==0){
			a = 1;
		}
		else{
			a = 0;
		}
		cout << "A diubah menjadi : " << a << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	else if(e!=x&&f==y&&g!=z){
		cout << "B salah" << endl;
		if(b==0){
			b = 1;
		}
		else{
			b = 0;
		}
		cout << "B diubah menjadi : " << b << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	else if(e==x&&f!=y&&g!=z){
		cout << "C salah" << endl;
		if(c==0){
			c = 1;
		}
		else{
			c = 0;
		}
		cout << "C diubah menjadi : " << c << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	else if(e!=x&&f!=y&&g!=z){
		cout << "D salah" << endl;
		if(d==0){
			d = 1;
		}
		else{
			d = 0;
		}
		cout << "D diubah menjadi : " << d << endl;
		cout << "Pesan dan Parity yang benar : " << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g;
	}
	
	return 0;
}
