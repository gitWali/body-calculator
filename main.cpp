#include <iostream>
#include <cstdlib> //Für die Verwendung von ("CLS") = Bildschirm leeren

using namespace std;	//Namensraum

// Funktionsblock zur Berechnung des Volumens der Kugel
float berechneKugelVolumen(float radius)
{
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

// Funktionsblock zur Berechnung der Oberfläche der Kugel
float berechneKugelOberflaeche(float radius)
{
    return 4.0 * 3.14 * radius * radius;
}

// Funktionsblock zur Berechnung des Volumens eines Quaders
float berechneQuaderVolumen(float a, float b, float c)
{
    return a * b * c;
}

// Funktionsblock zur Berechnung der Oberfläche eines Quaders
float berechneQuaderOberflaeche(float a, float b, float c)
{
    return 2.0 * (a * b + a * c + b * c);
}

// Funktionsblock zur Berechnung des Volumens des Zylinders
float berechneZylinderVolumen(float radius, float hoehe)
{
    return 3.14 * radius * radius * hoehe;
}

// Funktionsblock zur Berechnung der Oberfläche des Zylinders
float berechneZylinderOberflaeche(float radius, float hoehe)
{
    return 2.0 * 3.14 * radius * (radius + hoehe);
}

// Funktionsblock zur Berechnung des Volumens eines Kreiskegels
float berechneKreiskegelVolumen(float radius, float hoehe)
{
    return (3.14 * radius * radius * hoehe) / 3.0;
}

// Funktionsblock zur Berechnung der Oberfläche eines Kreiskegels
float berechneKreiskegelOberflaeche(float radius, float s)
{
    return 3.14 * radius * (radius + s);
}

int main()	//Hauptfunktion
{
    char fortfahren;	//Für die Schleife, wenn man eine erneute berechnung durchführen möchte
    do 
    {

        int choice;
        cout << "Welchen Koerper moechten Sie berechnen: 1. Kugel, 2. Quader, 3. Zylinder, 4. Kreiskegel?" << endl;	//Ausgabe, welche körper berechnet werden können
        	cin >> choice;	//Einlesen der Körperwahl

        switch (choice)	//switch für die Auswahl der Körper
        {
        case 1:	//Switchblock 1 für die Kugel
        {
            float R;	//Variable deklarieren
            char Wahl;	//Variable deklarieren
            float result;	//Variable deklarieren
            cout << "Sie haben die Berechnung einer Kugel gewaehlt." << endl;	//Ausgabe, was man zuvor gewählt hat
            cout << "Bitte geben Sie den Radius in cm ein: ";	//Eingabeaufforderung für den Radius in cm
            	cin >> R;	//Eingabe einlesen
            cout << "Wollen Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgabe, was berechnet werden soll von der Kugel
            	cin >> Wahl;	//Einhabe der Wahl einlesen
            //Switchblock für die Wahl des Volumens oder der Oberfläche
            switch (Wahl)
            {
            case '1':	//Berechnung des Körpers Kugel
                result = berechneKugelVolumen(R); //Das Ergebnis = der Formel mit der Eingabe des Radius
                cout << "Das Volumen betraegt: " << result << endl;	//Ausgabe des Ergebnisses
                break;
            case '2':	//Berechnung der Oberfläche
                result = berechneKugelOberflaeche(R);	//Das Ergebnis = der Formel mit der Eingabe des Radius
                cout << "Die Oberflaeche betraegt: " << result << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts übereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        case 2:	//Switchblock für den Quader
        {
            float a, b, c;	//Variable deklarieren
            char Auswahl;	//Variable deklarieren
            float Ergebnis;	//Variable deklarieren
            cout << "Sie haben die Berechnung eines Quaders gewaehlt." << endl;	//Ausgabe, was man zuvor gewählt hat
            cout << "Bitte geben Sie die Laenge a in cm ein: ";	//Eingabeaufforderung für die lönge des Quaders
            	cin >> a;	//Die eingabe einlesen
            cout << "Bitte geben Sie die Breite b in cm ein: ";	//Eingabeaufforderung für die breite des Quaders
            	cin >> b;	//Die eingabe einlesen
            cout << "Bitte geben Sie die Hoehe c in cm ein: ";	//Eingabeaufforderung für die höhe des Quaders
            	cin >> c;	//Die eingabe einlesen
            cout << "Moechten Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgaabe, was man berechnen möchte, das Volumen oder die Oberfläche
            	cin >> Auswahl;	//Einlesen der Eingabe
            //Switchblock für die Berchnung vom Volumen oder der Oberfläche
            switch (Auswahl)
            {
            case '1':	//Volumenberechnung
                Ergebnis = berechneQuaderVolumen(a, b, c);	//Das Ergebnis = der Formel mit der Eingabe von Höhe, Breite und Länge (a,b,c)
                cout << "Das Volumen betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            case '2':	//Oberflächenberechnung
                Ergebnis = berechneQuaderOberflaeche(a, b, c);	//Das Ergebnis = der Formel mit der Eingabe von Höhe, Breite und Länge (a,b,c)
                cout << "Die Oberflaeche betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts übereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        case 3:	//Switchblock für die Berechnung des Zylinders
        {
            float radius, hoehe;	//Variable deklarieren
            char Auswahl;	//Variable deklarieren
            float Ergebnis;	//Variable deklarieren
            cout << "Sie haben die Berechnung eines Zylinders gewaehlt." << endl;	//Ausgabe, was man zuvor gewählt hat
            cout << "Bitte geben Sie den Radius in cm ein: ";	//Eingabeaufforderung für den Radius in cm
            	cin >> radius;	//Einlesen der Eingabe
            cout << "Bitte geben Sie die Hoehe in cm ein: ";	//Eingabeaufforderung für die Höhe des Körpers in cm
            	cin >> hoehe;	//Einlesen der Eingabe
            cout << "Moechten Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgabe, was man von dem Zylinder berechnen möchte
            	cin >> Auswahl;	//Einlesen der Wahl
            //Switchblock für die Berehcnung Volumen oder Oberfläche
            switch (Auswahl)
            {
            case '1':	//Volumenberechnung
                Ergebnis = berechneZylinderVolumen(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der Höhe
                cout << "Das Volumen betraegt: " << Ergebnis << endl;	//Ausgabe des ergebnisses
                break;
            case '2':	//Oberflächenberechnung
                Ergebnis = berechneZylinderOberflaeche(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der Höhe
                cout << "Die Oberflaeche betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts übereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        case 4:	//Switchblock für die berechnung des Kreiskegels
        {
            float radius, hoehe;	//Variable deklarieren
            char Auswahl;	//Variable deklarieren
            float Ergebnis;	//Variable deklarieren
            cout << "Sie haben die Berechnung eines Kreiskegels gewaehlt." << endl;	//Ausgabe, was man zuvor gewählt hat
            cout << "Bitte geben Sie den Radius in cm ein: ";	//Eingabeaufforderung für den Radius
            	cin >> radius;	//Eingabe einlesen
            cout << "Bitte geben Sie die Hoehe in cm ein: ";	//Eingabeaufforderung für die Höhe
            	cin >> hoehe;	//Eingabe einlesen
            cout << "Moechten Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgaabe, was man berechnen möchte, das Volumen oder die Oberfläche
            	cin >> Auswahl;	//Eingabe einlesen
        //Switchblock für die Berchnung vom Volumen oder der Oberfläche
            switch (Auswahl)
            {
            case '1':	//Berechnung des Volumens
                Ergebnis = berechneKreiskegelVolumen(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der Höhe
                cout << "Das Volumen betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            case '2':	//Berechnung der Oberfläche
                Ergebnis = berechneKreiskegelOberflaeche(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der Höhe
                cout << "Die Oberflaeche betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts übereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        default:
            cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe eienr Fehlermeldung
            break;
        }
        cout << "Moechten Sie eine erneute Berechnung durchfuehren? (j, n) \n";	//Ausgabe, ob man eine erneute berechnung durchführen möchte
        	cin >> fortfahren;	//einlesen der Eingabe

        system("cls"); //Den Bildschirm leeren

    } while (fortfahren == 'j' || fortfahren == 'J'); //Überprüfen, ob die Wahl j oder J entspricht und das Programm erneut starten

    if (fortfahren == 'n' || fortfahren == 'N') //Überprüfen, ob die Wahl n oder N entspricht und das Programm mit der nachfolgenden Ausgabe beenden
    {
        cout << "Einen schoenen Tag Ihnen noch!\n"; //Ausgabe, wenn man nicht mehr rechnen möchte
    }

    return 0;	//Programm beenden
}

