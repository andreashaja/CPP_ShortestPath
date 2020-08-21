# Zweck des Programms
Berechnet den kürzesten Weg zwischen zwei Städten basierend auf dem Dijkstra / A*-Algorithmus

## Online-Vorlesung C++
Dieses Tutorial ist Teil der Online-Vorlesung "C++". Die Kursinhalte inkl. aller Erklär-Videos können unter www.thefearlessengineer.com/cpp-kurs abgerufen werden.

----

## Inhalt

Im folgenden sind alle Code-Beispiele des Tutorials aufgelistet. Die Kennung vor jedem Code-Beispiel (z.B. *MS-1-1-L1*) dient dazu, beim Kompilieren das richtige Listing auszuwählen (siehe Abschnitt *Build-Anweisungen*). 

* **Die while-Schleife**
	* CPP_WHILE_1 : Übung 1 zur while-Schleife
	* CPP_WHILE_2 : Übung 2 zur while-Schleife

---

## Vorbereitungen

Im folgenden ist eine Liste der erforderlichen Entwicklungswerkzeuge aufgeführt, die zum Ausführen des Codes erforderlich sind. 

* **cmake** >= 2.8 
	* Alle Betriebssysteme:  [klicken Sie hier für Installationsanweisungen](https://cmake.org/install/) 
* **make** >= 4.1 (Linux, Mac), 3.81 (Windows) 
	* Linux: *make* ist auf den meisten Linux-Distributionen standardmäßig installiert. 
	* Mac:  [Xcode-Befehlszeilen-Tools installieren (enthalten make)](https://developer.apple.com/xcode/features/) 
	* Windows: [Klicken Sie hier für die Installationsanleitung](http://gnuwin32.sourceforge.net/packages/make.htm) 
* **gcc/g++** >= 5.4 
	* Linux: gcc / g++ ist standardmäßig auf den meisten Linux-Distributionen installiert. 
	* Mac: [Xcode-Befehlszeilen-Tools installieren (enthalten make)](https://developer.apple.com/xcode/features/) 
	* Windows: empfohlen wird die Installation von [MinGW](http://www.mingw.org/) 
	
-----

## Build-Anweisungen 

Die Code-Listings lassen sich sehr einfach individuell kompilieren. Um ein bestimmtes Listing auszuwählen, wird die im folgenden aufgeführte Schrittfolge empfohlen. 

1.  Dieses Repository klonen. 
2.  Ein Build-Verzeichnis auf der obersten Ebene erstellen: `mkdir build && cd build` 
3.  Kompilieren:  `cmake .. -DLISTING_ID=CPP_xyz && make` (für 'xyz' siehe Abschnitt "Inhalt")
4.  Ausführen: ./CPP_xyz

