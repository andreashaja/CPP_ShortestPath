# Übung 1: Ausgabe aller Städte mit einer `while`-Schleife

## Worum geht es?

Das Ziel dieser Aufgabe ist es, dir die Funktionsweise der `while`-Schleife in C++ zu vermitteln. Schleifen können einen Codeblock so lange ausführen, bis eine bestimmte Bedingung erreicht ist. Schleifen sind sehr nützlich, weil sie Zeit sparen, Fehler reduzieren und deinen Code kürzer und verständlicher machen.

Die `while`-Schleife durchläuft einen Codeblock, solange eine vorgegebene Bedingung wahr ist:

```
while (Schleifenbedingung) 
{
  // Anweisungen im Schleifenkörper
}
```

Unter [go.tfe.academy/2008271](https://go.tfe.academy/2008271) findest du das zugehörige Video sowie ein Begleit-PDF zur `while`-Schleife.

**Hinweis** : Lass dich nicht von der Komplexität des Programms abschrecken! Es geht in dieser Aufgabe vor allem darum,  einige kleine Änderungen in der Datei `exercises/exe_01/main.cpp` durchzuführen. Der deutlich anspruchsvollere Code in den Dateien `shortest_path.h` und `shortest_path.cpp` wird hier nicht thematisiert. 

<br>

## Aufgabenstellung

Das Ziel dieser Übung besteht darin, alle in der Textdatei `citymap.txt` enthaltenen Städtenamen auf der Konsole auszugeben. Dazu soll eine `while`-Schleife benutzt werden, die so lange wiederholt wird, bis der letzte Eintrag abgearbeitet ist. 

- **Schritt 1** : Definiere eine Zählvariable und initialisiere sie mit dem Wert 0.

- **Schritt 2** : Schreibe den Rumpf einer `while`-Schleife.

- **Schritt 3** : Gestalte die Schleifenbedingung so, dass die Schleife so lange ausgeführt wird, wie die Zählvariable kleiner ist als die Anzahl der Städte in der Textdatei. Letztere kann mit der Funktion `sp.GetNumberOfCities()` abgefragt werden.

- **Schritt 4** : Im Schleifenkörper sollst du den Namen der aktuellen Stadt in einer Variablen vom Typ string speichern. Dieser kann mit dem Befehl `sp.GetCityAtPosition(int)` abgefragt werden. 

- **Schritt 5** : Gib den Namen der Stadt gefolgt von einem Zeilenumbruch auf der Konsole aus. Hierzu kannst du die Befehle `cout` und `endl` nutzen.

- **Schritt 6** : Denke daran, am Ende die Schleifenvariable zu inkrementieren. Überlege auch, was passiert, wenn du diesen Schritt vergessen solltest. 

- **Schritt 7** : Kompiliere den Code und führe ihn aus. Dies geht am einfachsten in der Online-Entwicklungsumgebung `repl.it`, den Link findest du hier --> [go.tfe.academy/2008273](https://go.tfe.academy/2008273) <br><br> Alternativ kannst du den Code auch lokal auf deinem Rechner ausführen. Eine detaillierte Beschreibung, wie das funktioniert, ist hier zu finden --> [`README.md`](./../../README.md#)

- **Schritt 8** : Überprüfe die Ausgabe. Diese sollte folgendermaßen aussehen: 

```
Oldenburg
Mainz
Hannover
Emden
Köln
Frankfurt
```

**Hinweis** : Falls du nicht mehr weiterkommst und dir die Lösung ansehen möchtest, dann öffne die Datei `exercises/exe_01/solution/main.cpp`, dort findest du die Musterlösung für diese Aufgabe. 

<br>

## Wie geht es nach dieser Übung weiter? 

Wenn du mit dieser Übung fertig bist, kannst du z.B. hier weitermachen: 

1. **Beispiel 1** (`examples/exa_01/main.cpp`) : Routenplanung zwischen mehreren Städten mit einer `while`-Schleife --> [go.tfe.academy/2008273](https://go.tfe.academy/2008273)
   
2. **Beispiel 2** (`examples/exa_02/main.cpp`) : Ablaufsteuerung mit einer Zählvariable in der `while`-Schleife --> [go.tfe.academy/2008274](https://go.tfe.academy/2008274)
   
3. **Übung 2** (`exercises/exe_02/main.cpp`) : Kombination aller Städte mit verschachtelten `while`-Schleifen --> [go.tfe.academy/2008276](https://go.tfe.academy/2008276)


Wenn du Lust auf ein anderes Thema zu C++ hast, dann schau gerne hier nach --> [go.tfe.academy/2008271](https://go.tfe.academy/2008271) 

<br><br>
Copyright 2020, Dr. Andreas Haja
<br>
www.thefearlessengineer.com