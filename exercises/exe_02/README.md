# Übung 2: Kombination aller Städte mit verschachtelten `while`-Schleifen

## Worum geht es?

Das Ziel dieser Aufgabe ist es, zwei `while`-Schleifen derart ineinander zu verschachteln, dass die kürzeste Fahrstrecke zwischen jeder möglichen Städtekombination berechnet und auf der Konsole ausgegeben wird. 

```
while (Bedingung1) 
{
  // Anweisungen 

  while (Bedingung2) 
  {
      // Anweisungen 
  }
}
```

Derartige Doppelschleifen kommen in der Praxis sehr häufig vor und die Herausforderung besteht oft darin, die jeweiligen Schleifenvariablen richtig zu initialisieren und passende Schleifenbedingungen festzulegen.

Unter [go.tfe.academy/2008271](https://go.tfe.academy/2008271) findest du das zugehörige Video sowie ein Begleit-PDF zur `while`-Schleife.

**Hinweis** : Lass dich nicht von der Komplexität des Programms abschrecken! Es geht in dieser Aufgabe vor allem darum,  einige kleine Änderungen in der Datei `exercises/exe_01/main.cpp` durchzuführen. Der deutlich anspruchsvollere Code in den Dateien `shortest_path.h` und `shortest_path.cpp` wird hier nicht thematisiert. 

<br>

## Aufgabenstellung

In einer äußeren Schleife werden nacheinander alle Städte vom ersten bis zum vorletzten Eintrag in der Textdatei ausgelesen und in einer inneren Schleife wird von der aktuellen Stadt in der äußeren Schleife bis zur letzten Stadt in der Textdatei gelaufen. 

Für jedes Städtepaar wird dann die kürzeste Route berechnet und das Ergebnis auf der Konsole ausgegeben. Beachte dabei, dass nicht versehentlich die Entfernung einer Stadt zu sich selbst berechnet wird.
 
- **Schritt 1** : Passe die Bedingung der `while`-Schleife so an, dass diese vom ersten Eintrag in der Textdatei bis zum vorletzten läuft.

- **Schritt 2** : Benenne die bereits existierende Variable `city` in `city_outer` um.

- **Schritt 3** : Füge den Code für eine innere `while`-Schleife ein, deren Zählvariable von der aktuellen Städteposition der äußeren Schleife + 1 startet und die bis zum letzten Eintrag der Textdatei läuft. 

- **Schritt 4** : Speichere den Namen der aktuellen Stadt in der inneren Schleife in einer Variable namens `city_inner`.

- **Schritt 5** : Berechne den kürzesten Weg zwischen beiden Städten mit dem Befehl `sp.FindPathBetweenCities(city_outer, city_inner)`.

- **Schritt 6** : Gib das Ergebnis der Pfadsuche mit dem Befehl `sp.PrintTotalDistance()` auf der Konsole aus.

- **Schritt 7** : Erhöhe am Ende des inneren Schleifenkörpers die passende Zählvariable.

- **Schritt 8** : Kompiliere den Code und führe ihn aus. Dies geht am einfachsten in der Online-Entwicklungsumgebung `repl.it`, den Link findest du hier --> [go.tfe.academy/2008276](https://go.tfe.academy/2008276) <br><br> Alternativ kannst du den Code auch lokal auf deinem Rechner ausführen. Eine detaillierte Beschreibung, wie das funktioniert, ist hier zu finden --> [`README.md`](./../../README.md#)

- **Schritt 9** : Überprüfe die Ausgabe. Diese sollte folgendermaßen aussehen: 

```
Oldenburg - Mainz = 540km
Oldenburg - Hannover = 181km
Oldenburg - Emden = 84km
Oldenburg - Köln = 305km
Oldenburg - Frankfurt = 496km
Mainz - Hannover = 379km
Mainz - Emden = 624km
Mainz - Köln = 235km
Mainz - Frankfurt = 44km
Hannover - Emden = 265km
Hannover - Köln = 486km
Hannover - Frankfurt = 423km
Emden - Köln = 389km
Emden - Frankfurt = 580km
Köln - Frankfurt = 191km
```

**Hinweis** : Falls du nicht mehr weiterkommst und dir die Lösung ansehen möchtest, dann öffne die Datei `exercises/exe_02/solution/main.cpp`, dort findest du die Musterlösung für diese Aufgabe.


<br>

## Wie geht es nach dieser Übung weiter? 

Wenn du mit dieser Übung fertig bist, kannst du z.B. hier weitermachen: 

1. **Beispiel 1** (`examples/exa_01/main.cpp`) : Routenplanung zwischen mehreren Städten mit einer `while`-Schleife --> [go.tfe.academy/2008273](https://go.tfe.academy/2008273)
   
2. **Beispiel 2** (`examples/exa_02/main.cpp`) : Ablaufsteuerung mit einer Zählvariable in der `while`-Schleife --> [go.tfe.academy/2008274](https://go.tfe.academy/2008274)

3. **Übung 1** (`exercises/exe_01/main.cpp`) : Ausgabe aller Städte mit einer `while`-Schleife --> [go.tfe.academy/2008275](https://go.tfe.academy/2008275)


Wenn du Lust auf ein anderes Thema zu C++ hast, dann schau gerne hier nach --> [go.tfe.academy/2008271](https://go.tfe.academy/2008271) 

<br><br>
Copyright 2020, Dr. Andreas Haja 
<br>
www.thefearlessengineer.com