#include <iostream>
using namespace std;



int main()
{
    string item = "";
    int stat = 0;
    char jawab = 'y';
    while (jawab =='y')
    
    string item_sebelum = "tidak ada";
    int stat_sebelum = 0;
    
    string terhebat = "";
    int stat_terhebat = 0;
    
    string terlemah = "";
    int stat_terlemah = 0;
    
    bool first = true;
   
    {
    cout <<"Masukkan nama item: ";
    cin >> item;
    cout <<"Masukkan stat: ";
    cin >> stat;
    
    cout <<"item kamu: "<<item<<endl;
    cout <<"stat item kamu: "<<stat<<endl;
    if (first==true){
        item_sebelum = "tidak ada";
        stat_sebelum = 0;
        item_terhebat = item;
        stat_terhebat = stat;
        item_terlemah = item;
        stat_terlemah = stat;
        first = false;
        } else{
            if(stat >= stat_terhebat){
                stat_terhebat = stat;
                item_terhebat = item;
            } else if (stat <= stat_terlemah){
                stat_terlemah = stat;
                item_terlemah = item;
                
            }
        }
    
   
    cout >> "item sebelumnya: "<<item_sebelum<<endl;
    cout >>"stat sebelumya: "<<stat_sebelum<<endl;
    cout <<"item terhebat: "<<terhebat<<"( stat ;)"<<stat_terhebat<<")"<<endl;
    
    cout <<"item terlemah: "<<terlemah<<"(stat ;)"<<stat_terlemah<<")"<<endl;
    
    item_sebelum = item;
    stat_sebelum = stat;
    cout << "input lagi (y/n) ? = ";
    cin >> jawab; 
    }
   
  
    
  
    return 0;
}
