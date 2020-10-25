#include <iostream>

using namespace std;

int main()
{
    int umur_ayah, umur_ibu, umur_anak1, umur_anak2;
    int total_bantuan1, total_bantuan2, total_bantuan3, total_bantuan4;
    int total;

    cout << "Bantuan Pemerintah" << endl;
    cout << "Masukan Umur Ayah   = ";
    cin >> umur_ayah;
    cout << "Masukan Umur ibu    = ";
    cin >> umur_ibu;
    cout << "Masukan Umur Anak 1 = ";
    cin >> umur_anak1;
    cout << "Masukan Umur Anak 2 = ";
    cin >> umur_anak2;

    if (umur_ayah>20){
        total_bantuan1 = 30000; }
    else if (umur_ayah>12 && umur_ayah<=20) {
            total_bantuan1 = 20000;}
    else if (umur_ayah<=12){
        total_bantuan1 = 15000;}
    //----------------------------------------------------
    if (umur_ibu>20){
        total_bantuan2 = 30000; }
    else if (umur_ibu>12 && umur_ibu<=20) {
            total_bantuan2 = 20000;}
    else if (umur_ibu<=12){
        total_bantuan2=15000;}
    //----------------------------------------------------
    if (umur_anak1 >20){
        total_bantuan3 = 30000;}
    else if ( umur_anak1 <=12){
            total_bantuan3 = 15000;}
    else if ( umur_anak1 >12 && umur_anak1 <=20){
        total_bantuan3 = 20000;}
    //-----------------------------------------------------
    if (umur_anak2>20){
        total_bantuan4 = 30000;}
    else if (umur_anak2<=12){
        total_bantuan4  = 15000;}
    else if (umur_anak2>12 && umur_anak2<=20){
        total_bantuan4 = 20000;}

    total = (total_bantuan1+total_bantuan2+total_bantuan3+total_bantuan4)*30;
    cout << "Total bantuan = Rp."<<total;
    return 0;
}
