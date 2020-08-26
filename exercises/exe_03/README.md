Hintergrund
Der Code in dieser Aufgabe ist in der Lage, die kürzeste Route zwischen zwei Städten zu berechnen. Der Algorithmus arbeitet ähnlich wie Google Maps und ist in der Literatur unter "Dijkstra-Algorithmus" zu finden. In dieser Aufgabe geht es aber nicht darum, den Dijkstra-Algorithmus zu verstehen, sondern darum, ihn zu benutzen.

Hinweis: Lass dich nicht von der Komplexität des Programms abschrecken! Es geht in dieser und in den nächsten Aufgaben vor allem darum,  einige kleine Änderungen in "main.cpp" durchzuführen. Der Code in "shortest_path.h / .cpp" wird hier nicht thematisiert. 


Lernziel
Das Ziel dieser Aufgabe ist es, zwei while-Schleifen derart ineinander zu verschachteln, dass die kürzeste Fahrstrecke zwischen jeder Städtekombination berechnet wird. 

Dabei müssen zwei verschiedene Schleifenvariablen deklariert und so miteinander verknüpft werden, dass die innere Schleife von der äußeren Schleife abhängt.

Weitere Hintergründe zu while-Schleifen findest du in diesem Video: LINK FEHLT


Aufgabe
In einer äußeren Schleife werden nacheinander alle Städte vom ersten bis zum vorletzten Eintrag in der Textdatei ausgelesen und in einer inneren Schleife wird von der aktuellen Stadt in der äußeren Schleife bis zur letzten Stadt in der Textdatei gelaufen. 

Für jedes Städtepaar wird dann die kürzeste Route berechnet und das Ergebnis auf der Konsole ausgegeben. Beachte dabei, dass nicht versehentlich die Entfernung einer Stadt zu sich selbst berechnet wird.
 
Schritt 1
Passe die Bedingung der while-Schleife so an, dass diese vom ersten Eintrag in der Textdatei bis zum vorletzten läuft.

Schritt 2
Benenne die bereits existierende Variable "city" in "city_outer" um.

Schritt 3
Füge den Code für eine innere while-Schleife ein, deren Zählvariable von der aktuellen Städteposition der äußeren Schleife + 1 startet und die bis zum letzten Eintrag der Textdatei läuft. 

Schritt 4
Speichere den Namen der aktuellen Stadt in der inneren Schleife in einer Variable namens "city_inner".

Schritt 5
Berechne den kürzesten Weg zwischen beiden Städten mit dem Befehl FindPathBetweenCities(city_outer, city_inner).

Schritt 6
Gib mittels cout das Ergebnis der Pfadsuche im Format "city_outer-->city_inner: xkm" auf der Konsole aus. Die Länge des Weges x kann mit dem Befehl sp.GetTotalDistance() abgefragt werden. Beachte dabei, dass die Leerzeichen an der richtigen Stelle sind.

Schritt 7
Erhöhe am Ende des inneren Schleifenkörpers die passende Zählvariable.

Schritt 8
Führe den Code aus und überprüfe die Ausgabe.

Wenn du fertig bist, dann reiche den Code ein und dein Ergebnis wird automatisch überprüft. Falls es noch Fehler in der Ausgabe gibt, erhältst du einen Hinweis.