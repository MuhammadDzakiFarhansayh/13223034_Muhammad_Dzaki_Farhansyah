#include <iostream>
#include <fstream>
#include <vector>

int main(){
    std::vector<double> sensor;

    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    for(int i = 0; i < sensor.size(); i++){
        sensor[i] *= 1.1;
    }

    std::ofstream fileOutput("hasil_kalibrasi.txt");

    if (fileOutput.is_open()){
        for(int i = 0; i < sensor.size(); i++){
            fileOutput << sensor[i] << std::endl;
        }

        fileOutput.close();
        std::cout << "Data berhasil disimpan di hasil_kalibrasi.txt" <<std::endl;

    } else {
        std::cout << "Gagal memuat file";
    }
    return 0;
}

