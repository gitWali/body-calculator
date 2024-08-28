#include <iostream>
#include <cstdlib> //F�r die Verwendung von ("CLS") = Bildschirm leeren

using namespace std;	//Namensraum

// Funktionsblock zur Berechnung des Volumens der Kugel
float berechneKugelVolumen(float radius)
{
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

// Funktionsblock zur Berechnung der Oberfl�che der Kugel
float berechneKugelOberflaeche(float radius)
{
    return 4.0 * 3.14 * radius * radius;
}

// Funktionsblock zur Berechnung des Volumens eines Quaders
float berechneQuaderVolumen(float a, float b, float c)
{
    return a * b * c;
}

// Funktionsblock zur Berechnung der Oberfl�che eines Quaders
float berechneQuaderOberflaeche(float a, float b, float c)
{
    return 2.0 * (a * b + a * c + b * c);
}

// Funktionsblock zur Berechnung des Volumens des Zylinders
float berechneZylinderVolumen(float radius, float hoehe)
{
    return 3.14 * radius * radius * hoehe;
}

// Funktionsblock zur Berechnung der Oberfl�che des Zylinders
float berechneZylinderOberflaeche(float radius, float hoehe)
{
    return 2.0 * 3.14 * radius * (radius + hoehe);
}

// Funktionsblock zur Berechnung des Volumens eines Kreiskegels
float berechneKreiskegelVolumen(float radius, float hoehe)
{
    return (3.14 * radius * radius * hoehe) / 3.0;
}

// Funktionsblock zur Berechnung der Oberfl�che eines Kreiskegels
float berechneKreiskegelOberflaeche(float radius, float s)
{
    return 3.14 * radius * (radius + s);
}

int main()	//Hauptfunktion
{
    char fortfahren;	//F�r die Schleife, wenn man eine erneute berechnung durchf�hren m�chte
    do 
    {

        int choice;
        cout << "Welchen Koerper moechten Sie berechnen: 1. Kugel, 2. Quader, 3. Zylinder, 4. Kreiskegel?" << endl;	//Ausgabe, welche k�rper berechnet werden k�nnen
        	cin >> choice;	//Einlesen der K�rperwahl

        switch (choice)	//switch f�r die Auswahl der K�rper
        {
        case 1:	//Switchblock 1 f�r die Kugel
        {
            float R;	//Variable deklarieren
            char Wahl;	//Variable deklarieren
            float result;	//Variable deklarieren
            cout << "Sie haben die Berechnung einer Kugel gewaehlt." << endl;	//Ausgabe, was man zuvor gew�hlt hat
            cout << "Bitte geben Sie den Radius in cm ein: ";	//Eingabeaufforderung f�r den Radius in cm
            	cin >> R;	//Eingabe einlesen
            cout << "Wollen Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgabe, was berechnet werden soll von der Kugel
            	cin >> Wahl;	//Einhabe der Wahl einlesen
            //Switchblock f�r die Wahl des Volumens oder der Oberfl�che
            switch (Wahl)
            {
            case '1':	//Berechnung des K�rpers Kugel
                result = berechneKugelVolumen(R); //Das Ergebnis = der Formel mit der Eingabe des Radius
                cout << "Das Volumen betraegt: " << result << endl;	//Ausgabe des Ergebnisses
                break;
            case '2':	//Berechnung der Oberfl�che
                result = berechneKugelOberflaeche(R);	//Das Ergebnis = der Formel mit der Eingabe des Radius
                cout << "Die Oberflaeche betraegt: " << result << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts �bereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        case 2:	//Switchblock f�r den Quader
        {
            float a, b, c;	//Variable deklarieren
            char Auswahl;	//Variable deklarieren
            float Ergebnis;	//Variable deklarieren
            cout << "Sie haben die Berechnung eines Quaders gewaehlt." << endl;	//Ausgabe, was man zuvor gew�hlt hat
            cout << "Bitte geben Sie die Laenge a in cm ein: ";	//Eingabeaufforderung f�r die l�nge des Quaders
            	cin >> a;	//Die eingabe einlesen
            cout << "Bitte geben Sie die Breite b in cm ein: ";	//Eingabeaufforderung f�r die breite des Quaders
            	cin >> b;	//Die eingabe einlesen
            cout << "Bitte geben Sie die Hoehe c in cm ein: ";	//Eingabeaufforderung f�r die h�he des Quaders
            	cin >> c;	//Die eingabe einlesen
            cout << "Moechten Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgaabe, was man berechnen m�chte, das Volumen oder die Oberfl�che
            	cin >> Auswahl;	//Einlesen der Eingabe
            //Switchblock f�r die Berchnung vom Volumen oder der Oberfl�che
            switch (Auswahl)
            {
            case '1':	//Volumenberechnung
                Ergebnis = berechneQuaderVolumen(a, b, c);	//Das Ergebnis = der Formel mit der Eingabe von H�he, Breite und L�nge (a,b,c)
                cout << "Das Volumen betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            case '2':	//Oberfl�chenberechnung
                Ergebnis = berechneQuaderOberflaeche(a, b, c);	//Das Ergebnis = der Formel mit der Eingabe von H�he, Breite und L�nge (a,b,c)
                cout << "Die Oberflaeche betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts �bereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        case 3:	//Switchblock f�r die Berechnung des Zylinders
        {
            float radius, hoehe;	//Variable deklarieren
            char Auswahl;	//Variable deklarieren
            float Ergebnis;	//Variable deklarieren
            cout << "Sie haben die Berechnung eines Zylinders gewaehlt." << endl;	//Ausgabe, was man zuvor gew�hlt hat
            cout << "Bitte geben Sie den Radius in cm ein: ";	//Eingabeaufforderung f�r den Radius in cm
            	cin >> radius;	//Einlesen der Eingabe
            cout << "Bitte geben Sie die Hoehe in cm ein: ";	//Eingabeaufforderung f�r die H�he des K�rpers in cm
            	cin >> hoehe;	//Einlesen der Eingabe
            cout << "Moechten Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgabe, was man von dem Zylinder berechnen m�chte
            	cin >> Auswahl;	//Einlesen der Wahl
            //Switchblock f�r die Berehcnung Volumen oder Oberfl�che
            switch (Auswahl)
            {
            case '1':	//Volumenberechnung
                Ergebnis = berechneZylinderVolumen(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der H�he
                cout << "Das Volumen betraegt: " << Ergebnis << endl;	//Ausgabe des ergebnisses
                break;
            case '2':	//Oberfl�chenberechnung
                Ergebnis = berechneZylinderOberflaeche(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der H�he
                cout << "Die Oberflaeche betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts �bereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        case 4:	//Switchblock f�r die berechnung des Kreiskegels
        {
            float radius, hoehe;	//Variable deklarieren
            char Auswahl;	//Variable deklarieren
            float Ergebnis;	//Variable deklarieren
            cout << "Sie haben die Berechnung eines Kreiskegels gewaehlt." << endl;	//Ausgabe, was man zuvor gew�hlt hat
            cout << "Bitte geben Sie den Radius in cm ein: ";	//Eingabeaufforderung f�r den Radius
            	cin >> radius;	//Eingabe einlesen
            cout << "Bitte geben Sie die Hoehe in cm ein: ";	//Eingabeaufforderung f�r die H�he
            	cin >> hoehe;	//Eingabe einlesen
            cout << "Moechten Sie das 1. Volumen oder die 2. Oberflaeche berechnen? ";	//Ausgaabe, was man berechnen m�chte, das Volumen oder die Oberfl�che
            	cin >> Auswahl;	//Eingabe einlesen
        //Switchblock f�r die Berchnung vom Volumen oder der Oberfl�che
            switch (Auswahl)
            {
            case '1':	//Berechnung des Volumens
                Ergebnis = berechneKreiskegelVolumen(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der H�he
                cout << "Das Volumen betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            case '2':	//Berechnung der Oberfl�che
                Ergebnis = berechneKreiskegelOberflaeche(radius, hoehe);	//Das Ergebnis = der Formel mit der Eingabe des Radius und der H�he
                cout << "Die Oberflaeche betraegt: " << Ergebnis << endl;	//Ausgabe des Ergebnisses
                break;
            default:	//Wenn nichts �bereinstimmt, dann:
                cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe einer Fehlermeldung
                break;
            }
            break;
        }
        default:
            cout << "Bitte ueberpruefen Sie Ihre Eingabe! Es liegt ein Fehler vor!" << endl;	//Ausgabe eienr Fehlermeldung
            break;
        }
        cout << "Moechten Sie eine erneute Berechnung durchfuehren? (j, n) \n";	//Ausgabe, ob man eine erneute berechnung durchf�hren m�chte
        	cin >> fortfahren;	//einlesen der Eingabe

        system("cls"); //Den Bildschirm leeren

    } while (fortfahren == 'j' || fortfahren == 'J'); //�berpr�fen, ob die Wahl j oder J entspricht und das Programm erneut starten

    if (fortfahren == 'n' || fortfahren == 'N') //�berpr�fen, ob die Wahl n oder N entspricht und das Programm mit der nachfolgenden Ausgabe beenden
    {
        cout << "Einen schoenen Tag Ihnen noch!\n"; //Ausgabe, wenn man nicht mehr rechnen m�chte
    }

    return 0;	//Programm beenden
}

