
** HINTERGRUND
Der Code in dieser Aufgabe ist in der Lage, die kürzeste Route zwischen zwei Städten zu berechnen. 
Der Algorithmus arbeitet ähnlich wie Google Maps und ist in der Literatur unter "Dijkstra-Algorithmus" zu finden. 
In dieser Aufgabe geht es aber nicht darum, den Dijkstra-Algorithmus zu verstehen, sondern darum, ihn zu benutzen.
-------------

** HINWEIS
Hinweis: Lass dich nicht von der Komplexität des Programms abschrecken! 
Es geht in dieser und in den nächsten Aufgaben vor allem darum,  
einige kleine Änderungen in "main.cpp" durchzuführen. 
Der Code in "shortest_path.h / .cpp" wird hier nicht thematisiert. 
-------------

** LERNZIEL
Das Ziel dieser Aufgabe ist es, dir die Funktionsweise der while-Schleife zu vermitteln. 
Schleifen können einen Codeblock so lange ausführen, wie eine bestimmte Bedingung erreicht ist. 
Schleifen sind praktisch, weil sie Zeit sparen, Fehler reduzieren und den Code lesbarer machen.

Die while-Schleife durchläuft einen Codeblock, solange eine vorgegebene Bedingung wahr ist:

while (condition) {
  // code block to be executed
}

Weitere Hintergründe zur while-Schleife findest du in diesem Video: LINK FEHLT
-------------

** AUFGABE
Die Aufgabe besteht darin, alle in der Textdatei "citymap.txt" enthaltenen Städtenamen auf der Konsole auszugeben. 
Dazu soll eine while-Schleife benutzt werden. 
Du arbeitest in dieser Aufgabe ausschließlich in der Datei "main.txt".
 
- Schritt 1
Definiere eine Zählvariable und initialisiere sie mit dem Wert 0.

- Schritt 2
Schreibe den Rumpf einer while-Schleife.

- Schritt 3
Gestalte die Schleifenbedingung so, dass die Schleife so lange ausgeführt wird, wie die Zählvariable kleiner ist als die Anzahl der Städte in der Textdatei. Letztere kann mit der Funktion sp.GetNumberOfCities() abgefragt werden.

- Schritt 4
Im Schleifenkörper sollst du den Namen der aktuellen Stadt in einer Variablen vom Typ string speichern. Dieser kann mit dem Befehl sp.GetCityAtPosition(int) abgefragt werden. 

- Schritt 5
Gib den Namen der Stadt gefolgt von einem Zeilenumbruch auf der Konsole aus. Hierzu kannst du die Befehle cout und endl nutzen.

- Schritt 6
Denke daran, am Ende die Schleifenvariable zu inkrementieren. Überlege auch, was passiert, wenn du diesen Schritt vergessen solltest. 

- Schritt 7
Führe den Code aus und überprüfe die Ausgabe.
-------------

** COMPILIEREN UND AUSFÜHREN
Wenn du nicht die Online-IDE repl.it benutzt, dann befolge diese Schritte, 
um den Code für diese Aufgabe mit den richtigen Dateien zu kompilieren und auszuführen. 

- Schritt 1 : Ein Verzeichnis für die Ausgabedateien anlegen
Öffne das Terminal im Verzeichnis CPP_ShortestPath und gebe den Befehl `mkdir build; cd build` ein

- Schritt 2 : Den Code der Aufgabe kompilieren
Um sicherzustellen, dass alle Pfade und Compiler-Optionen richtig eingestellt sind, wird hier ein Makefile verwendet.
Um diese Aufgabe zu kompilieren, gib den Befehl `cmake .. -DCODE_ID=ex_02; make;` auf der Konsole ein.

- Schritt 3 : Den Code der Aufgabe ausführen
Um den Code auszuführen, gib den Befehl `./ex_02 ./../citymap.txt` ein.
