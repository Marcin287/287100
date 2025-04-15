# Kalkulator C++ z GUI

## Opis

Projekt kalkulatora stworzony w C++ z interfejsem graficznym w Qt.
Program obsługuje podstawowe działania matematyczne, pamięć (akumulator) oraz konwersję liczb do systemów o podstawie ≤ 10.
Rozmiar okienka jest zablokowany.
## Funkcje

- Operacje: dodawanie, odejmowanie, mnożenie, dzielenie, modulo
- Obsługa błędów (np. dzielenie przez zero)(wyświetlany jest message box z błędem)
- Akumulator do zapamiętywania wyniku
- Kalkulator obsługuje wpisywanie ujemnych liczb
- Konwersja liczb do systemów o podstawie ≤ 10(Wybranie bazy z ktorej konwertujemy odbywa się poprzez wybranie jej z menu "opcje". Baze na którą konwertujemy wpisujemy po nacisnieciu "KON")
- Konwerter nie sprawdza, czy wprowadzone liczby zawierają cyfry, które są większe niż dozwolone w danej bazie.
- Domyślną bazą wejściową jest 10
- Interfejs graficzny z przyciskami i wyświetlaczem
- Okienko "O autorze" w menu
- Dwa motywy kolorystyczne (Jasny i Ciemny)
- Przycisk "CE" usuwający ostatnią wpisaną cyfre

## Struktura

- `kalkulator.h/cpp` – klasa Kalkulator
- `mainwindow.ui/.cpp/.h`, `main.cpp` – wersja GUI (Qt)

## Autor

Marcin Dąbowski
287100