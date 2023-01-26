// Projektname: Wassermann
// Release: 1 (Release Candidate)

#include <iostream>
//using namespace std;                                                      // CR10.01: 'using namespace' nicht an dieser Stelle

bool testIfDayAndMonthIsAquarius(int day, int month)                         // function definition (Funktionsdefinition) & function head (Funktionskörper) & formal parameters (Formale Parameter) & return type (Rückgabetyp)
{                                                                            // function body (Funktionskörper)
    bool isAquariusInJanuary = (month == 1 && day >= 21);
    bool isAquariusInFebuary = (month == 2 && day <= 18);
    bool isAquarius = (isAquariusInJanuary || isAquariusInFebuary);
    return isAquarius;
}

void outputIsAquarius(bool isAquarius) 
{
    if (isAquarius)
    {                                                                       // block (Block)
        std::cout << "Sie sind ein Wassermann";
    }
    else
    {
        std::cout << "Sie sind kein Wassermann";
    }
}

void inputDayAndMonthByUserAndReturnAsParam(int& day, int& month)            // int& sind In- Outparameter
{
    std::cout << "Bitte Tag eingeben" << std::endl;
    std::cin >> day;
    std::cout << "Bitte Monat eingeben" << std::endl;
    std::cin >> month;
}

int main()
{
    // Variablen Definitionen & Initialisierung                             // CR10.01: Style Guide überdenken
    int day = 0;                                                            // CR10.01: 'i_' nicht erwünscht
    int month = 0;

    inputDayAndMonthByUserAndReturnAsParam(day,month);                      // actual parameter (Aktueller Parameter)

    bool isAquarius = testIfDayAndMonthIsAquarius(day , month);             // return value (Rückgabewert)
    //isAquarius = false;                                                   // assignment (Zuweisung)
    outputIsAquarius(isAquarius);                     

    return 0;
}



// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
