#include <iostream>
using namespace std;


void upgrade_attack(int&atk){

int upgrade =2;

atk= atk + upgrade;

}
int main()
{
    int attack = 1;
    upgrade_attack(attack);
    cout<<"Attack: "<<attack<<endl;

    return 0;
}
