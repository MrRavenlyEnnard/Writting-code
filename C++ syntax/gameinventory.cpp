#include <iostream>
#include <string>
using namespace std;

int main()
{
    string item = "";
    int stat = 0;
    char jawab = 'y';
    string item_sebelum = "tidak ada"; // Initialize outside the loop
    int stat_sebelum = 0;
    string terhebat = "";
    int stat_terhebat = 0;
    string terlemah = "";
    int stat_terlemah = 0;
    bool first = true;

    while (jawab == 'y')
    {
        cout << "Masukkan nama item: ";
        cin >> item;
        cout << "Masukkan stat: ";
        cin >> stat;

        cout << "item kamu: " << item << endl;
        cout << "stat item kamu: " << stat << endl;
        if (first)
        {
            item_sebelum = "tidak ada";
            stat_sebelum = 0;
            terhebat = item; // Corrected variable name
            stat_terhebat = stat;
            terlemah = item; // Corrected variable name
            stat_terlemah = stat;
            first = false;
        }
        else
        {
            if (stat >= stat_terhebat)
            {
                stat_terhebat = stat;
                terhebat = item; // Corrected variable name
            }
            else if (stat <= stat_terlemah)
            {
                stat_terlemah = stat;
                terlemah = item; // Corrected variable name
            }
        }

        cout << "item sebelumnya: " << item_sebelum << endl;
        cout << "stat sebelumnya: " << stat_sebelum << endl;
        cout << "item terhebat: " << terhebat << " (stat: " << stat_terhebat << ")" << endl;
        cout << "item terlemah: " << terlemah << " (stat: " << stat_terlemah << ")" << endl;

        item_sebelum = item;
        stat_sebelum = stat;
        cout << "input lagi (y/n) ? = ";
        cin >> jawab;
    }

    return 0;
}