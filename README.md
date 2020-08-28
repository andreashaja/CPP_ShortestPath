# Projekt: Suche des kürzesten Pfades zwischen zwei Städten in C++

## Worum geht es?
Dieses Projekt ist Teil eines Online-Kurses zur Programmiersprache C++. Mit dem Code lässt sich die kürzeste Route zwischen zwei Städten mit dem bekannten A* / Dijkstra-Algorithmus suchen.

Du hast verschiedene Möglichkeiten, dieses Projekt für dich zu nutzen: 
1. Du ignorierst die eigentliche Umsetzung der Pfadsuche und konzentrierst dich auf die Unterordner `examples` und `exercises`. Dort findest du derzeit vor allem Beispiele und Übungen zur Benutzung der `while`-Schleife in C++.  ( *Skill-Level*: `ANFÄNGER` )
   
2. Du beschäftigst dich mit den Details der eigentlichen Pfadsuche. Dazu siehst du dir am besten zuerst die Datei `shortest_path.h` an und verschaffst dir einen Überblick über die Klassen, Methoden und Attribute darin. Kern der Suche ist der bekannte A* / Dijkstra-Algorithmus, der in ähnlicher Form auch in Google Maps genutzt wird. (*Achtung* : Hierzu gibt es derzeit noch keine Übungen). ( *Skill-Level*: `FORTGESCHRITTENE` )

**Hinweis**: Unter [go.tfe.academy/2008271](https://go.tfe.academy/2008271) findest du alle Videos sowie Begleit-PDFs zu diesem Projekt.

<br>

## Welche Dateien und Ordner sind wichtig?
- `README.md` : Diese Datei. Enthält die Projektbeschreibung und weitere wichtige Infos.

- `main.cpp` : Enthält das Hauptprogramm mit einer beispielhaften Pfadsuche zwischen zwei Städten

- `examples/`: Unterordner mit Beispielcode

- `exercises/`: Unterordner mit Übungen und Startercode

<br>

## Wie kann ich den Code im Projekt nutzen?

###  **Variante A (empfohlen)** : Online-Enwicklungsumgebung repl.it

Der einfachste Weg, den Code auszuführen und zu verändern, ist über die Online-IDE `repl.it`. Mit den folgenden Links kommst du direkt zum Editor und über den `Run`-Button kann das jeweilige Programm kompiliert und ausgeführt werden. 

1. **Haupt-Programm** (`main.cpp`) : Suche des kürzesten Pfades zwischen zwei Städten --> [go.tfe.academy/2008272](https://go.tfe.academy/2008272)

2. **Beispiele**
   1. **Beispiel 1** (`examples/exa_01/main.cpp`) : Routenplanung zwischen mehreren Städten mit einer `while`-Schleife --> [go.tfe.academy/2008273](https://go.tfe.academy/2008273)

   2. **Beispiel 2** (`examples/exa_02/main.cpp`) : Ablaufsteuerung mit einer Zählvariable in der `while`-Schleife --> [go.tfe.academy/2008274](https://go.tfe.academy/2008274)

3. **Übungen**
   1. **Übung 1** (`exercises/exe_01/main.cpp`) : Ausgabe aller Städte mit einer `while`-Schleife --> [go.tfe.academy/2008275](https://go.tfe.academy/2008275)
   
   2. **Übung 2** (`exercises/exe_02/main.cpp`) : Kombination aller Städte mit verschachtelten `while`-Schleifen --> [go.tfe.academy/2008276](https://go.tfe.academy/2008276)

<br> 

###  **Variante B** : Das Projekt auf der eigenen Festplatte starten

Es besteht natürlich auch die Möglichkeit, das Projekt in einem lokalen Verzeichnis von GitHub zu klonen oder als zip-Datei herunterzuladen. 

Dazu sind die folgenden Schritte erforderlich:

0. Nur für Windows: Installation des "Windows Terminal" --> [go.tfe.academy/2008278](https://go.tfe.academy/2008278)

1. Klonen des GitHub-Repos oder Download als ZIP (`master` branch)--> [go.tfe.academy/2008277](https://go.tfe.academy/2008277)

2. Installation von Entwicklerwerkzeugen : Die Anleitungen für die erforderlichen Tools `cmake`, `make` und `gcc` findest du unter [Tools für die lokale Installation](#Tools-für-die-lokale-Installation).
   
3. Ein Build-Verzeichnis im lokalen Stammverzeichnis des Projekts erstellen und hinein wechseln :  `mkdir build && cd build`

4. Das gewünschte Programm auswählen und das Makefile konfigurieren : `cmake .. -DCODE_ID=Programm-Name && make`. Als Programm-Name können z.B. `main`, `exa_01`, `exa_02`, `exe_01` oder `exe_02` gewählt werden. Der Programmcode wird nun kompiliert. 

5. Ausführen des fertigen Programms vom `build`-Ordner aus mit dem Befehl `./Programm-Name ./../../citymap.txt`, wobei für Programm-Name eine der unter 4. aufgeführten Optionen eingesetzt werden muss.

**Hinweis:** Da die lokale Installation schnell zu Fehlern führen kann, wird Einsteigern die Variante A empfohlen. 

<br>

## Tools für die lokale Installation

Im folgenden ist eine Liste der erforderlichen Entwicklungswerkzeuge aufgeführt, die zum lokalen Ausführen des Codes wie in **Variante B** beschrieben erforderlich sind. 

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



<br><br>
Copyright 2020, Dr. Andreas Haja
<br>
www.thefearlessengineer.com