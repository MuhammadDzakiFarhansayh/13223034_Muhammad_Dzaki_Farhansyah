#include <iostream>
using namespace std;

class rekeningBank {
private: 
    double saldo;

public: 
    rekeningBank(double saldo_awal){
        saldo = saldo_awal;
        cout << "Saldo awal:  " << saldo << endl;
    }

    int setor (double jumlah) {
        saldo += jumlah;
        cout << "Saldo saat ini: " << saldo << endl;
        return 0;
    }

    int tarik (double jumlah){
        if (jumlah <= saldo){
            saldo -= jumlah;
            cout <<"Sisa saldo: " << saldo << endl;
    
        } else {
            cout << "Penarikan gagal" << endl;
        }
        return 0;
    }
};

int main(){
    double saldo_setor, saldo_tarik;
    rekeningBank rekening(5000);

    cout << "Masukkan saldo yang ingin disetor: ";
    cin >> saldo_setor;
    rekening.setor(saldo_setor);

    cout << "Masukkan saldo yang ingin ditarik: ";
    cin >> saldo_tarik;
    rekening.tarik(saldo_tarik);

    return 0;
}

