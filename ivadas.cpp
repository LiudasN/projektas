#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct uzduotis{
    string vardas, pavarde;
    int egzaminas;
    float mediana;
    float galutinis_1;
    float galutinis_2;
    int pazym[];

    
};

int main()
{

    uzduotis dim;
    vector<int> v;
    int n = 0, sum = 0;
    int t;
    int studentai;

    cout << "Kiek yra studentu? ";
        cin >> studentai;

    v.resize(studentai - 1);


    for (vector<double>::size_type i = 0; i < studentai; i++){

        cout << "Koks vardas? ";
            cin >> dim.vardas;
        cout << "Kokia pavarde? ";
            cin >> dim.pavarde;
        cout << "Kiek gavo is egzamino? ";
            cin >> dim.egzaminas;
        
        cout << "Kai busite tikri, kad suvedete visus pazymius, tai iveskite 0 " <<"\n";

        cout << "Iveskite namu darba numeriu " << n+1 << ": ";

    }
        while  (cin >> dim.pazym[n] && dim.pazym[n] != 0){

            if(isdigit(dim.pazym[n]) == false){
                cout << "Iveskite namu darba numeriu " << n+2 << ": ";
                    v.push_back(dim.pazym[n]);
                sum += dim.pazym[n];
                n += 1;
            }
            else{
                cout << "man reikejo else'o, tai jei gavai sia zinute sveikinu! Stai tau laimes ,,XD''  ";
            }
        }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++)
            if (dim.pazym[j] < dim.pazym[j + 1])
            {
                t = dim.pazym[j];
                dim.pazym[j] = dim.pazym[j + 1];
                dim.pazym[j + 1] = t;
            }
        if (n%2 == 0)  
        {dim.mediana = (dim.pazym[n/2] + dim.pazym[n/2-1])/2.0;}
        else
            dim.mediana = dim.pazym[n/2];
    }

    dim.galutinis_1 = double(sum) / double(n)*0.4 + dim.egzaminas*0.6;
    dim.galutinis_2 = dim.mediana*0.4 + dim.egzaminas*0.6;


    cout << setw(10) << left << "Vardelis";
    cout << setw(10) << left << "Pavardelis";
    cout << setw(20) << left << "Galutinis(vid.) ";
    cout << setw(10) << left << "/ Galutinis(med.)" << "\n";
    cout << "----------------------------------------------------"<< "\n";

    {cout << fixed << setprecision(2)
        << left << setw(10) << dim.vardas
        << left << setw(10) << dim.pavarde
        << left << setw(20) << dim.galutinis_1
        << left << setw(10) << dim.galutinis_2;}
    cout << "\n\n";


}
