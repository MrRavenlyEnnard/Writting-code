#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<string> item {"Judge","pentungan"};
    vector<string>::iterator iter1;
    
    item.push_back("Nugget");
    item.push_back("Brokoli");
    
    item.erase(item.begin()+ 3);
    
    
    for(iter1 =item.begin(); iter1 != item.end(); ++iter1){
        cout<< *iter1 <<endl;
        
    }
    cout <<"jumlah item: "<<item.size()<<endl;
    
    
    return 0;
}


