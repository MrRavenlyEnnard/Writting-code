#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));
	string senjata[4]={"pisau", "pedang", "pistol" , "meriam"};
    string senjata_terpilih = "";
	int acak = 0;
	int max_acak = 4;
	acak = rand()% 4;
	senjata_terpilih = senjata[acak];
	cout <<"senjata yang anda dapatkan: "<< senjata[acak] <<endl;
	return 0;
	
}
