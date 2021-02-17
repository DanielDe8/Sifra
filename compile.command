cd ~/Sifra/C++

mkdir sifraOutput
cd sifraOutput

#mkdir Source_Code 

mkdir Mac
mkdir Windows


g++ ~/Sifra/C++/Sifra.cpp -o ~/Sifra/C++/sifraOutput/Mac/Sifra
g++ ~/Sifra/C++/DeSifra.cpp -o ~/Sifra/C++/sifraOutput/Mac/DeSifra
g++ ~/Sifra/C++/SifraKlic.cpp -o ~/Sifra/C++/sifraOutput/Mac/SifraKlic
g++ ~/Sifra/C++/DeSifraKlic.cpp -o ~/Sifra/C++/sifraOutput/Mac/DeSifraKlic

g++ ~/Sifra/C++/Sifra.cpp -o ~/Sifra/C++/sifraOutput/Windows/Sifra.exe
g++ ~/Sifra/C++/DeSifra.cpp -o ~/Sifra/C++/sifraOutput/Windows/DeSifra.exe
g++ ~/Sifra/C++/SifraKlic.cpp -o ~/Sifra/C++/sifraOutput/Windows/SifraKlic.exe
g++ ~/Sifra/C++/DeSifraKlic.cpp -o ~/Sifra/C++/sifraOutput/Windows/DeSifraKlic.exe
