#include <iostream>
#include <iomanip>


using namespace std;

struct irasas {
  string vardas;
  string pavarde;
  int egzaminas;
  double galutinis_1;
  double galutinis_2;
  float mediana;
};

int *balai; 

int main()
{
  irasas *dim;
	int studentai;
    int n = 0, sum = 0;
    int t;
    string pasirinkimas;

		cout << "Studentu skaicius: ";
		    cin >> studentai;
	    dim = new irasas[studentai];


		while (studentai < 0)
		{
			cout << "Kazkas negerai su ivestimi\n";
			cout << "Studentu skaicius: ";
			    cin >> studentai; 
		}

		for (int kart = 0; kart < studentai; kart++)
		{
      cout << "\n";
      cout << "Studento nr" << (kart + 1) << " informacija: \n";
      cout<<"Iveskite varda: \n";
        cin>>dim[kart].vardas;
      cout<<"Iveskite pavarde: \n";
        cin>>dim[kart].pavarde;
      cout <<"Iveskite egzamino paz.: ";
        cin>>dim[kart].egzaminas;
      cout <<"Kiek turi paz. (1-10)? "; cin>>n;

  cout << "Patys ivesit pazymius(pasitikiu jumis paspausti ,,p''); Jei norite belekokiu pazymiu spauskite ,,r''" << endl;
  cin >> pasirinkimas;
  if (pasirinkimas !="p" && pasirinkimas != "r"){
     cout << "Neverta buvo pasitiketi jumis..." << endl;}
      
  if (pasirinkimas == "r"){
  int *nauj;
  nauj = new int [n];
  
  srand(time(0));
  for(int i=0; i<n; i++)
{
  int rnumber = rand()%10+1;
  nauj[i] = rnumber;
}
  for(int j = 0; j < n; j++) 
    {
    cout << nauj[j] << "\n";
    }
  }

  if (pasirinkimas == "p"){
  balai = new int[n];
  cout << "Iveskite studento pazymius. Kad eiti toliau, spauskite  E N T E R " << endl;
  for (int kart = 0; kart < n; kart++){
    cout << "Iveskite nr.  " << (kart + 1) << " pazymi: "; 
    cin >> balai[kart];
    sum += balai[kart];
    }
  }


for (int kart = 0; kart < n; kart++){
        for (int j = 0; j < n - kart - 1; j++)
          if (balai[j] < balai[j + 1])
			{
				t = balai[j];
				balai[j] = balai[j + 1];
				balai[j + 1] = t;
			}
  if (n%2 == 0)
	{dim[kart].mediana = (balai[n/2] + balai[n/2-1])/2.0;}
	else
    dim[kart].mediana = balai[n/2];
   }
  dim[kart].galutinis_2 = dim[kart].mediana*0.4 + dim[kart].egzaminas*0.6;
      }

	cout << "\n";
  cout << setw(20) << left << "Vardelis"
  << setw(20) << left << "Pavardelis"
  << setw(10) << left << "Galutinis(Med.) \n"
  << "-------------------------------------------------------";
  for (int kart = 0; kart < studentai; kart++)
  {
    cout << fixed << setprecision(2) << "\n"
    << left << setw(20) << dim[kart].vardas
    << left << setw(20) << dim[kart].pavarde
    << left << setw(10) << dim[kart].galutinis_2;
  }
  cout  << "\n";
		delete[] dim;
		dim = 0;


return 0;
}
