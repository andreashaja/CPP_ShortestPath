
# Aufgabe 1 : Erweitere die Städteliste für die Pfadsuche

## HINTERGRUND

Der Code in dieser Aufgabe ist in der Lage, die kürzeste Route zwischen zwei Städten zu berechnen. 
Der Algorithmus arbeitet ähnlich wie Google Maps und ist in der Literatur unter "Dijkstra-Algorithmus" zu finden. In dieser Aufgabe geht es aber nicht darum, den Dijkstra-Algorithmus zu verstehen, sondern darum, ihn zu benutzen.
<br><br>
***

## HINWEIS 
Lass dich nicht von der Komplexität des Programms abschrecken! Es geht in dieser und in den nächsten Aufgaben vor allem darum, einige kleine Änderungen in der Datenbasis `citymap.txt` durchzuführen. Der Code in `shortest_path.h`und `shortest_path.cpp` wird in dieser Aufgabe nicht thematisiert.
<br><br> 
***

## LERNZIEL
Das Ziel dieser Aufgabe ist es, dir ein Gefühl für den Aufbau von fremden Programmen und Datenstrukturen zu geben. Es geht hier nicht darum, sofort mit C++ einzusteigen, sondern du sollst eine bestehende Datenbasis erweitern und dir die Logik dahinter selbständig erschließen. 
<br><br> 
***

## AUFGABENSTELLUNG
Die Aufgabe besteht darin, die Textdatei "citymap.txt" um eine zusätzliche Stadt und eine zusätzliche Verbindung zwischen Städten zu erweitern. 
 
- Schritt 1 : Füge die Stadt "Wiesbaden" in die Liste ein, indem du das Format der bereits vorhandenen Städte übernimmst und wo nötig anpasst.

- Schritt 2 : Verbinde die Städte Frankfurt und Wiesbaden mit einer Straße, die 39km lang ist. Übernimm das Format der übrigen Verbindungen und passe an, wo nötig.

- Schritt 3 : Verbinde die Städte Wiesbaden und Mainz mit einer Straße, die 17km lang ist. 

- Schritt 4 : Entferne die direkte Verbindung zwischen Frankfurt und Mainz. 

- Schritt 5 : Führe den Code aus und überprüfe die Ausgabe.
<br><br> 
***

## COMPILIEREN UND AUSFÜHREN
Wenn du nicht die Online-IDE repl.it benutzt, dann befolge diese Schritte, 
um den Code für diese Aufgabe mit den richtigen Dateien zu kompilieren und auszuführen. 

- Schritt 1 : Ein Verzeichnis für die Ausgabedateien anlegen
Öffne das Terminal im Verzeichnis CPP_ShortestPath und gebe den Befehl `mkdir build; cd build` ein

- Schritt 2 : Den Code der Aufgabe kompilieren
Um sicherzustellen, dass alle Pfade und Compiler-Optionen richtig eingestellt sind, wird hier ein Makefile verwendet.
Um diese Aufgabe zu kompilieren, gib den Befehl `cmake .. -DCODE_ID=ex_01; make;` auf der Konsole ein.

- Schritt 3 : Den Code der Aufgabe ausführen
Um den Code auszuführen, gib den Befehl `./ex_01 ./../citymap.txt` ein. Der Befehl geht davon aus, dass dich immer noch im `build`-Ordner befindest.
<br><br> 
***

## MUSTERLÖSUNG