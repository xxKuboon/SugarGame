#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

class Klient {
public:
    string imie;
    string nazwisko;
    string reakcja;
    string historyjka;
    string dobra_reakcja;
    string srednia_reakcja;
    string zla_reakcja;
    string dramatyczna_reakcja;

    void losuj() {
        string imiona[] = { "Włodzimierz", "Jerzy", "Saul", "Henryk", "Gustaw", "Michał", "Konrad", "Amelia", "Miki", "Józef", "Franciszek", "Tosiek", "Paweł", "Kajtek", "Bartek", "Stefan", "Tatiana"' "Józia", "Magda", "Kasia"};
        string nazwiska[] = { "Biały", "Różowy", "Dobrzak", "Krawiec", "Frędzel", "Zaufalski", "Kobajn", "Białodom", "Tysiewicz", "Damerski", "Zamkowski", "Górski", "Miotłowski", "Zachód", "Pitta", "Praca", "Wymach", "Łopatka", "Lisica", "Perycka"};
        string historyjki[] = {
            "Hej, słyszałem o Tobie od mojego kolegi! Podobno masz najlepsze cukierki w mieście! To prawda, że pierwszy za darmo?",
            "Wiem, że wiszę Ci trochę kasy za ostatnie cukierki, ale co powiesz na wymianę. Mogę oddać Ci moją mamę…",
            "Mój chłopak to prawdziwy romantyk. Poznaliśmy się na spotkaniu anonimowych miłośników cukierków! Siedzieliśmy w kółku i opowiadaliśmy o naszych ulubionych smakach! To nasza druga randka. Możesz coś dla nas przygotować?",
            "No siema. Potrzebuję małej pomocy. Mój przyjaciel nie je cukierków już od kilku tygodni. Wiem, że strasznie je lubi, ale chyba wstydzi się tego przyznać. Na pewno będzie mu miło po małym prezencie!",
            "Potrzebuję wsparcia. Jutro mam zawody sportowe i myślę, że mały cukierek mógłby okazać się nieocenioną pomocą! Nie, nie nazywam się Karaś!",
            "Przyśnił mi się sen. Beata Kozidrak przybiła mi piątkę, a potem podwiozła mnie na przystanek tramwajowy. Po drodze mieliśmy wypadek – patrzę, a jestem w szpitalu… Co? Oj, faktycznie mam wenflon w łapie…",
            "Zamknąłem brata w lodówce, bo zabrał mi ostatniego cukierka. Swoją drogą – nie potrzebujesz może nerki?",
            "Moja babcia biega po mieszkaniu i krzyczy, że jest beretem. Nie do końca rozumiem co to znaczy. Zawsze wydawało mi się, że jest moherem. ",
            "Nie uwierzysz w tę historię! Wychodzę wczoraj po chleb, a wracam z taczką pełną Rumunów. I co ja teraz z nimi zrobię? Przecież nie hoduję na balkonie żadnych róż, a poza tym mam za daleko do Wrocławia!",
            "Ej, słyszałeś ten huk? A, w takim razie musiało mi się tylko przesłyszeć…",
            "Ręce trzęsą mi się od dziecka, a teraz i tak jest dużo lepiej! Kiedyś złamałem nos nauczycielowi. Nie, te historie nie są powiązane…",
            "Próbowałeś kiedyś przykręcić koło bananem? To znacznie łatwiejsze niż się wydaje. Potrzeba tylko dużo cierpliwości i dwa słoiki masła orzechowego!",
            "To koniec! Nie przyjęli mnie na ASP. To chyba znak od losu, że pora zająć się polityką…",
            "Zawsze mam przy sobie łyżeczkę, bo piję dużo kawy i brzydzę się cudzych sztućców. A zapalniczka leżała na drodze.",
            "Oglądałeś Matrixa? Którą tabletkę byś wybrał? Ja obie."
        };

        string dobra_reakcje[] = {
    "Smakuje jak wakacje w Radomiu z 2003!",
    "O kurde, jakby mi ktos wlal szczescie do ust.",
    "To lepsze niz darmowe próbki w Biedrze!",
    "Jakbym jadla watę cukrową posypaną dźwiękiem techno.",
    "Mniam jak pierwsze piwo na klatce schodowej!",
    "Jeszcze! I jeszcze! I moze byc z plastikiem nawet!",
    "Cukierek jak sen na dopalaczach – ale legalny.",
    "Czuję, że wraca mi wiara w ludzkość. I w słodycze.",
    "9",
    "10"
};
        string srednia_reakcje[] = {
    "No nie wiem, jakby miętowa pasta do zębów udawala lizaka.",
    "Jest okej... ale bez dreszczy.",
    "Smakuje jak herbata u cioci: ani zła, ani dobra, po prostu jest.",
    "To chyba z tych cukierków, co się je z grzeczności.",
    "Jakby ktoś rozpuścił marzenie w chlorowanej wodzie.",
    "Taki smak 'meh', ale przynajmniej nie kopie jak gaz z kaloryfera.",
    "Jakbym jadla watę, co leżała za szafą, ale z cukrem.",
     "9",
    "10"
};
        string zla_reakcje[] = {
    "Fuj! Smakuje jak sen o zepsutym jogurcie!",
    "To jest przestepstwo przeciwko kubkom smakowym.",
    "Czy to... guma do zucia po babci?",
    "Mam wrazenie, że zjadlam zapach klatki schodowej.",
    "To nie jest cukierek, to trauma w folii.",
    "Smak jak z autobusu linii 145 w lipcu – bez klimy.",
    "Wypluj mnie, blagam – krzyczy moj jezyk.",
    "Czuje sie jakbym zdradziła swoją diete i swoja godnosc.",
     "9",
    "10"
};
        string dramatyczna_reakcje[] = {
        "ajajajaja",
         "9",
        "10"
        };

        //losowanie imienia, nazwiska i historyjki
        imie = imiona[rand() % 5];
        nazwisko = nazwiska[rand() % 5];
        historyjka = historyjki[rand() % 5];
        historyjka = historyjki[rand() % 5];
        dobra_reakcja = dobra_reakcje[rand() % 5];
        srednia_reakcja = srednia_reakcje[rand() % 5];
        zla_reakcja = zla_reakcje[rand() % 5];
        dramatyczna_reakcja = dramatyczna_reakcje[rand() % 5];
    }

    void zareaguj(bool poprawne) {
        if (poprawne)
            cout << dobra_reakcja << endl;
        else
             cout << zla_reakcja << reakcja << endl;
    }

    void pokaz() {
        cout << "Klient: " << imie << " " << nazwisko << endl;
        cout << "Historyjka: " << historyjka << endl;
    }
};

class Skladnik {
public:
    string nazwa;
    string ilosc; // "malo" lub "duzo"

     static void wyswietlSklep() {

        string listaSkladnikow[] = {
    "cukier puder",
    "susz owocowy",
    "tęczowy barwnik",
    "miód waniliowy",
    "switamina C",
    "cynamon"
     };
        cout << "=== SKLADNIKI DO WYBORU ===" << endl;
        for (int i = 0; i < 6; ++i) {
            cout << "- " << listaSkladnikow[i] << " (malo / duzo)" << endl;
        }
        cout << "=======================" << endl;
    }
};

class Receptura {
public:
    string nazwa;
    Skladnik skladniki[3];

    void ustawMojito() {
        nazwa = "Mojito";
        skladniki[0] = { "woda", "duzo" };
        skladniki[1] = { "rum", "duzo" };
        skladniki[2] = { "mieta", "malo" };
    }

    void pokaz() {
        cout << "Zamowienie: " << nazwa << endl;
        for (int i = 0; i < 3; ++i) {
            cout << "- " << skladniki[i].nazwa << ": " << skladniki[i].ilosc << endl;
        }
    }
};

class Gra {
public:
    Klient klient;
    Receptura receptura;
    Skladnik wybor[3];

    void start() {
        srand(time(0)); //funkcja potrzebna do losowania

        klient.losuj();
        receptura.ustawMojito();

        cout << "--------------------------------\n";

        klient.pokaz();
        cout << "Zamowienie do wykonania: ";
        receptura.pokaz(); //f do wystwietlania receptury ktora sie wylosowala - odkomentuj zeby zobaczyc czy program działa dobrze
        cout << "--------------------------------\n";
        Skladnik::wyswietlSklep(); // to jest funkcja statyczna wiec mozna ją wywołać poprzez "::" klasa::nazwa_funkcji
        cout << "--------------------------------\n";
        cout << "\nDodaj 3 skladniki (nazwa + malo/duzo):\n";
        for (int i = 0; i < 3; ++i) {
            cout << "Skladnik #" << (i + 1) << ": ";
            getline(cin, wybor[i].nazwa);
            cout << endl;
            cout << "  Ilosc (malo/duzo): ";
            getline(cin, wybor[i].ilosc);
        }

        bool trafione = porownaj(); // tu trzeba jakos zrobic ten scoring? póki co sprawdza tylko czy receptura git czy nie. Może w klasie jakas funkcje z scoringiem trzeba?
        klient.zareaguj(trafione);
    }

    bool porownaj() {
        for (int i = 0; i < 3; ++i) {
            if (
                wybor[i].nazwa != receptura.skladniki[i].nazwa ||
                wybor[i].ilosc != receptura.skladniki[i].ilosc
            ) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Gra gra;
    gra.start();
    return 0;
}
