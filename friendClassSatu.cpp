#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setnama(string pNama);
    friend class;
};

class siswa
{
private:
    int id;

public:
    void setid(int pId);
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << id << endl
         << a.nama;
}
void orang ::setnama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setNama("joko Susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
}