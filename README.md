# projekt #1
Napíšte program, ktorý bude pracovať so záznamami zapísanými v súbore
priestupky.txt obsahujúci záznamy o priestupkoch vodičov áut.
Záznamy o priestupkoch v súbore budú vyzerať takto:
meno priezvisko:(medzera) meno vodiča (max. 50znakový reťazec, ktorý obsahuje
písmená a medzery)
pohlavie:(medzera) pohlavie vodiča (M – muž, Z – žena)
rok narodenia:(medzera) celé číslo
SPZ: (medzera) štátna poznávacia značka, sedemmiestny znakový reťazec tvaru AACCCBB,
kde AA sú dva abecedné znaky reprezentujúce skratku okresu, CCC sú tri číselné znaky a BB
sú dva abecedné znaky (napr. BA354SC)
typ priestupku: (medzera) booleovská hodnota (1 pre malý priestupok (pokuta), 0
veľký priestupok (odňatie VP))
vyska pokuty: (medzera) celé číslo z intervalu <10, 2000>
datum priestupku: (medzera) osemmiestne celé číslo v tvare rrrrmmdd 20181024
(24.10.2018)
(prázdny riadok)
Súbor bude obsahovať iba hodnoty, nie typy (názvy) položiek. Za každým záznamom bude
prázdny riadok.
Predpokladajte, že záznamy sú v súbore usporiadané podľa položky meno priezvisko.
Program bude vykonávať príkazy načítané zo štandardného vstupu. Každý príkaz bude
predstavovať malé písmeno nasledované koncom riadku.
 o – po aktivovaní otvorí súbor, spočíta počet záznamov v súbore a vytvorí dynamické
jednorozmerné pole štruktúr. Vytvorené dynamické pole naplní údajmi postupne
tak, ako sú zapísané v súbore Ak už bolo pole predtým vytvorené, je najprv
dealokované a potom sa vytvorí nové. V prípade úspešnej alokácie program
negeneruje žiaden výstup, inak vypíše správu Pole nie je naplnené.
 v – po aktivovaní program vypíše obsah poľa na obrazovku. Jednotlivé záznamy budú
oddelené prázdnym riadkom, jednotlivé položky záznamu budú pomenované (pred
hodnoty je potrebné pridať názvy položiek) a každá bude umiestnená v samostatnom
riadku. Ak pole nie je naplnené (t.j. ešte nebol vykonaný príkaz o), táto voľba nič
nezmení.
 x – po aktivovaní program načíta aktuálny dátum vo formáte rrrrmmdd. Následne
vypíše na obrazovku zoznam vodičov, ktorým bol odňatý VP v aktuálnom roku.
Zoznam bude pozostávať z mena a priezviska vodiča, SPZ a dátumu odňatia VP.
Zoznam bude vypísaný podobne ako v príkaze v (vypíšu sa iba vybrané položky). Ak
pole nie je vytvorené a naplnené (t.j. ešte nebol vykonaný príkaz o), alebo ak
neexistuje žiaden vodič ktorému bol odňatý VP v poslednom roku, táto voľba
negeneruje žiaden výstup.
 r – po aktivovaní program načíta aktuálny dátum vo formáte rrrrmmdd a vypočíta
odmenu za aktuálny mesiac pre policajta, ktorý priestupky odhalil. Predpokladajte, že 
Procedurálne programovanie, ZS201819, FIIT STU Bratislava
pole obsahuje záznamy jedného policajta. Výška odmeny sa určuje podľa typu
priestupku takto: 5.2% z výšky pokuty pre malý priestupok, alebo 3.8% z výšky
pokuty pre veľký priestupok. Odmenu vypisujte na dve desatinné miesta. Ak pole nie
je vytvorené a naplnené (t.j. ešte nebol vykonaný príkazy o), alebo ak neexistuje
žiaden vodič ktorému bola udelená pokuta v aktuálnom mesiaci, táto voľba negeneruje
žiaden výstup.
 p – po aktivovaní program vypíše na obrazovku meno a priezvisko vodiča a SPZ
v prípade ak SPZ je palindróm. Výpis bude napríklad v tvare:
Janko Mrkvicka(medzera)BA151AB
Maria Lujza Mala(medzera)BL484LB
Ak pole nie je vytvorené a naplnené (t.j. ešte nebol vykonaný príkaz o), alebo v súbore
neexistuje SPZ v tvare palinómu, táto voľba negeneruje žiaden výstup.
 a – po aktivovaní program vloží do dynamického poľa štruktúr záznam o novom
priestupku. Po zadaní tohto príkazu používateľ načíta z klávesnice položky záznamu
postupne v poradí v akom sú v súbore, každú v novom riadku (bez názvov položiek)
a načítaný záznam uloží do poľa. Pri pridávaní je potrebné vytvoriť väčšie pole
a pôvodné pole uvolniť. Nový záznam pridáme do poľa tak, aby záznamy v súbore
zostali usporiadané podľa položky meno priezvisko. V prípade, ak pole nebolo
predtým vytvorené, (prípadne vstupný súbor je prázdny) vytvorí sa dynamické pole
s jedným záznamom.
 k – po aktivovaní program zatvorí súbor, uvolní pole a ukončí program.
