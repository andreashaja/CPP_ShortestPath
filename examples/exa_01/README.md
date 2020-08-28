# Beispiel 1: Routenplanung zwischen mehreren Städten mit einer `while`-Schleife 

## Worum geht es?
Dieses Beispiel zeigt die grundsätzliche Benutzung der `while-Schleife`. 
Die aus dem Hauptprogramm `main.cpp` ggf. bereits bekannte Routenplanung zwischen zwei Städten wird so erweitert, dass die kürzeste Route zwischen *mehreren* Städten in einer Liste und einer gemeinsamen Zielstadt (Mainz) berechnet wird. 

Hierzu wird eine `while`-Schleife genutzt, in der bei jedem Durchlauf der hinterste Listeneintrag entfernt und die jeweilige Route berechnet wird. Die Schleifenbedingung prüft darauf, ob noch weitere Einträge in der Liste vorhanden sind. 

**Hinweis**: Unter [go.tfe.academy/2008271](https://go.tfe.academy/2008271) findest du das zugehörige Video sowie ein Begleit-PDF zur while-Schleife, in dem u.a. dieses Beispiel detailliert beschrieben wird.

<br>

## Welche Dateien und Ordner sind wichtig?
- `examples/exa_01/README.md` : Diese Datei. Enthält die Aufgabenbeschreibung und weitere wichtige Infos.

- `examples/exa_01/main.cpp` : Enthält die `main`-Funktion zu diesem Beispiel

- `README.md` : Enthält die Projektbeschreibung und eine Anleitung, wie sich dieses Beispiel lokal kompilieren und ausführen lässt (*Variante B*).
  

<br>

## Wie kann ich den Code im Projekt nutzen?

###  **Variante A (empfohlen)** : Online-Enwicklungsumgebung repl.it

Der einfachste Weg, den Code auszuführen und zu verändern, ist über die Online-IDE `repl.it`. 

Über den folgenden Link kommst du direkt zum Editor und über den `Run`-Button kann dieses Beispiel kompiliert und ausgeführt werden: --> [go.tfe.academy/2008273](https://go.tfe.academy/2008273)

<br> 

###  **Variante B** : Das Projekt auf der eigenen Festplatte starten

Es besteht natürlich auch die Möglichkeit, das Projekt in einem lokalen Verzeichnis von GitHub zu klonen oder als zip-Datei herunterzuladen. Eine detaillierte Beschreibung ist hier zu finden --> [`README.md`](./../../README.md#)

<br>

## Wie geht es nach diesem Beispiel weiter? 

Wenn du mit diesem Beispiel fertig bist, kannst du z.B. hier weitermachen: 

1. **Beispiel 2** (`examples/exa_02/main.cpp`) : Ablaufsteuerung mit einer Zählvariable in der `while`-Schleife --> [go.tfe.academy/2008274](https://go.tfe.academy/2008274)

2. **Übung 1** (`exercises/exe_01/main.cpp`) : Ausgabe aller Städte mit einer `while`-Schleife --> [go.tfe.academy/2008275](https://go.tfe.academy/2008275)
   
3. **Übung 2** (`exercises/exe_02/main.cpp`) : Kombination aller Städte mit verschachtelten `while`-Schleifen --> [go.tfe.academy/2008276](https://go.tfe.academy/2008276)


Wenn du Lust auf ein anderes Thema zu C++ hast, dann schau gerne hier nach --> [go.tfe.academy/2008271](https://go.tfe.academy/2008271) 

<br><br>
Copyright 2020, Dr. Andreas Haja
<br>
www.thefearlessengineer.com