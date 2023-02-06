#ifndef FUNCTION
#define FUNCTION
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <chrono>
#include <list>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::left;
using std::right;
using std::setw;
using std::fixed;
using std::streamsize;
using std::ifstream;
using std::ofstream;
using std::setprecision;
using std::milli;
using std::list;

//inline ifstream infile("studentai10000.txt");
//inline ofstream offile("res.txt");

class mokinys {
public:
    string vardas;
    string pavarde;
    double egzaminas;
    vector<double> nd;
    double vidurkis;
    double mediana;

    // Default Konstruktorius
    mokinys() = default;

    // Copy Konstruktorius
    mokinys(const mokinys &obj)
    {
        vardas = obj.vardas;
        pavarde = obj.pavarde;
        egzaminas = obj.egzaminas;
        nd = obj.nd;
        vidurkis = obj.vidurkis;
        mediana = obj.mediana;
    }

    // Copy assignment operatorius
    mokinys & operator=(const mokinys &obj)
    {
        if (this != &obj)
        {
            vardas = obj.vardas;
            pavarde = obj.pavarde;
            egzaminas = obj.egzaminas;
            nd = obj.nd;
            vidurkis = obj.vidurkis;
            mediana = obj.mediana;
        }

        return *this;
    }

    // Destructorius
    ~mokinys() = default;

    void getAverages(vector<mokinys> &p);
    void getMedians(vector<mokinys> &p);
    void sortByCool(vector<mokinys> &k, vector<mokinys> &l, vector<mokinys> &p);
    void writeEverything(vector<mokinys> k, vector<mokinys> l);
    void readFromFile(vector<mokinys> &p, string inputFileName);
};




bool compare(const mokinys& first, const mokinys& second);
int numOfDigits(int number);
void generateInputFile(int nOfNd, int nOfStudents);

#endif
