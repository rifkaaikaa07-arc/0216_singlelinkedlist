#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    long long noMhs;
    Node *next;
};

class LikedList
{
    Node *START;

public:
    LikedList ()
    {
        START = NULL;
    
    }

    
    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START != NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
            }
            nodeBaru->next = START;
            START = nodeBaru;
            return;
        }
    }

};