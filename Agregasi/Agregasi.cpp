#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main (){
    ibu* varibu = new ibu ("dini");
    ibu* varibu2 = new ibu ("novi");
    anak* varAnak = new anak ("tono");
    anak* varAnak2 = new anak ("rini");
    anak* varAnak3 = new anak ("dewi");

    varibu-> tambah_Anak (varAnak);
    varibu-> tambah_Anak (varAnak2);
    varibu2-> tambah_Anak (varAnak3);
    varibu-> tambah_Anak (varAnak);

    varibu->cetakAnak();
    varibu2->cetakAnak();

    delete varibu;
    delete varibu2;
    delete varAnak;
    delete varAnak2;
    delete varAnak3;

}

