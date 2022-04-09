#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string lowercase(string n) { // pomocnicza funkcja, zamieniajaca wielkie litery w stringu na male, bo zarowno a i A to ta sama samogloska
    
    string napis = n;
    transform(napis.begin(), napis.end(), napis.begin(), [](unsigned char c){ return tolower(c); });

    return napis;
}


int ileSamoglosek(string s) {

    char samogloski[6] = {'a', 'e', 'o',  'i', 'y'}; // pomijamy polskie znaki, ąęó...
    int count = 0; // zmienna zliczajaca samogloski
    string napis = lowercase(s); // zmieniamy na wylacznie male litery uzywajac naszej pomocniczej funkcji

    for(size_t i = 0;i < napis.length(); i++) {
         for(size_t j = 0; j < sizeof(samogloski)/sizeof(char); j++) { /* taka konstrukcja petli iteruje sie przez wszystkie elementy "samogloski", nie musimy na sztywno wpisac liczby */
             if(napis[i] == samogloski[j]) {
                 count++; // za kazdym razem gdy litera z napisu == jedna z samoglosek inkrementujemy count
             }
         }
    }
    return count;
}


string zamienWielkoscLiter(string s) {

    string copy = s;
    for(size_t i=0;i<copy.length();i++) { // iterujemy po znakach kopii napisu
        if(islower(copy[i])) {
            copy[i] = toupper(copy[i]); // jesli jest mala to zamieniamy na wielka
        }
        else if(isupper(copy[i])) { // jesli jest wielka to zamieniamy na mala
            copy[i] = tolower(copy[i]);
        }
    }
    return copy;
}


bool czyAnagram(string s1, string s2) {
    if(s1.length() != s2.length()) {
        cout << "Napisy maja rozna dlugosc, wiec nie sa anagramami!\n";
        return false;
    }
    else {
        s1 = lowercase(s1); // ponownie uzywam mojej pomocniczej funkcji zeby rozwazac tylko male litery
        s2 = lowercase(s2);
        sort(s1.begin(), s1.end()); // sortujemy napisy w kolejnosci alfabetycznej..
        sort(s2.begin(), s2.end());
        if(s1 == s2) {
            return true; // jesli po posortowaniu napisy sa takie same to znaczy ze sa anagramami
        }
        else {
            return false;
        }
    }
    return false;
}

int main() {

    string n = "nApiS";
    cout << lowercase(n);
    cout << ileSamoglosek(n);
    cout << zamienWielkoscLiter(n);
    cout << "czy anna i naan sa anagramami? " << czyAnagram("anna", "naan");

    return 0;

}