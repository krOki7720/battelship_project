# battelship_project
we programm battelship with n.curses for our first semester

genereller Plan:
Physiks (Fabian)
- Spielfeld verwalten, erstellen und Speicher allocieren
- Schiffe verwalten, erstellen und Speicher allocieren
- rechnet
- Schnittstelle zwischen Regeln und Graphics
- header

Regeln (Melih)
- Wie gespielt wird / Spielablauf
	- wie viele Schiffe
	- wie groß ist das Spielfeld
	- wie viele Schüsse darf man schießen
	- wer ist wann dran

graphics (Leon)
- pdcuses / graphische Umsetzung in ASCII
- Eingabe sinnvoll überprüfen

main
-start funktion oder ruft regeln

Schiffe versenken
- ist gestartet
- keine Ai 
- es sitzten 2 Leute vor dem Spiel
- Regeln startet und sagt Phisiks wir brauchen Spielfelder für 2 Spieler
- Physiks allociert Speicher für 4 Felder und sagt Regeln ob es geklappt hat
- Regeln legt fest mit wievielen Schiffen gespielt wird
- Regeln sagt Phisiks wir brauchen x Schiffe
- Physiks allociert Speicher für die Schiffe und sagt Regeln ob es geklappt hat
- Regeln ruft Physiks zum Schiffe setzen auf
- Physiks ruft Graphics auf zum Schiffe setzen -> Feldgröße, "Aussehen des zu setzenden Schiffs"
- Graphics stellt das Feld dar und evtl. wo das Schiff gesetzt wird
	- Graphics gibt Physiks die X,Y,Richtung des zu setzenden Schiffs
	- Physiks "setzt" die Schiffe auf das entsprechende Feld
- Physiks sagt Regeln das die Schiffe gesetzt sind
- das eigentliche Spiel wird von Regeln gestartet
- Regeln sagt Physiks das Graphics die "Schießfelder" darstellen soll
ab hier beginnt Schleife bei Regeln
- Regeln sagt Physiks "Wir erwarten eine Eingabe für die Schüße von Spieler X"
- Physiks sagt Graphiks "Gib mir ne Eingabe"
- Graphics gibt Physiks die X,Y Koordinaten des Schußes
- Physiks trägt den Schuß in das dazugehörige Feld ein -> als Treffer oder als Wasser
- Physiks gibt Graphics das "aktualisierte" Feld
- Physiks sagt Regeln "es wurde geschoßen" "es war ein Treffer" Oder "es war kein Treffer"
- Regeln sagt welcher Spieler als nächstes dran ist
Schleife zuende

- Regeln schaut ob die Siegesbedingung erfüllt ist
- beendet gegebenenfalls das Spiel mit einer "Siegerehrung"

