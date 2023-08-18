void setup() {
  //przyciski sterownicze
  pinMode(2, INPUT_PULLUP);//PRAWO
  pinMode(3, INPUT_PULLUP);//LEWO

  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);

  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  //przyciski sterownicze koniec
  //PRZEKAŹNIKI

  //OBRÓT PODSTAWY
  pinMode(12, OUTPUT);//załączenie
  pinMode(13, OUTPUT);//kierunek albo 1 albo 0
  pinMode(14, OUTPUT);//kierunek albo 0 albo 1 //nie może być 1 1 albo 0 0
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, LOW);
  //OBRÓT PODSTAWY

  //wysięg 1
  pinMode(15, OUTPUT);//załączenie
  pinMode(16, OUTPUT);//kierunek albo 1 albo 0
  pinMode(17, OUTPUT);//kierunek albo 0 albo 1 //nie może być 1 1 albo 0 0
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  //wysieg 1

  //wysięg 2
  pinMode(18, OUTPUT);//załączenie
  pinMode(19, OUTPUT);//kierunek albo 1 albo 0
  pinMode(20, OUTPUT);//kierunek albo 0 albo 1 //nie może być 1 1 albo 0 0
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  digitalWrite(20, LOW);
  //wysieg 2

  //arm
  pinMode(21, OUTPUT);//załączenie
  pinMode(22, OUTPUT);//kierunek albo 1 albo 0
  pinMode(23, OUTPUT);//kierunek albo 0 albo 1 //nie może być 1 1 albo 0 0
  digitalWrite(21, HIGH);
  digitalWrite(22, HIGH);
  digitalWrite(23, LOW);
  //arm

  //chwytak
  pinMode(24, OUTPUT);//załączenie
  pinMode(25, OUTPUT);//kierunek albo 1 albo 0
  pinMode(26, OUTPUT);//kierunek albo 0 albo 1 //nie może być 1 1 albo 0 0
  digitalWrite(24, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(26, LOW);
  //chwytak

}

void loop() {
  //obrót podstawą poczatek
  if (digitalRead(2) == 0 && digitalRead(3) == 1) //NP W LEWO
  {
    digitalWrite(13, LOW);
    digitalWrite(14, HIGH);
    delay(20);
    digitalWrite(12, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else if (digitalRead(3) == 0 && digitalRead(2) == 1)//NP W PRAWO
  {
    digitalWrite(13, HIGH);
    digitalWrite(14, LOW);
    delay(20);
    digitalWrite(12, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else //ZATRZYMAJ
  {
    digitalWrite(12, HIGH);
  }

  //wysiegnik1
  if (digitalRead(4) == 0 && digitalRead(5) == 1) //do przodu
  {
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
    delay(20);
    digitalWrite(15, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else if (digitalRead(5) == 0 && digitalRead(4) == 1)//do tył
  {
    digitalWrite(16, HIGH);
    digitalWrite(17, LOW);
    delay(20);
    digitalWrite(15, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else //ZATRZYMAJ
  {
    digitalWrite(15, HIGH);
  }
  //wysiegnik1

  //wysiegnik2
  if (digitalRead(6) == 0 && digitalRead(7) == 1) //do przodu
  {
    digitalWrite(19, LOW);
    digitalWrite(20, HIGH);
    delay(20);
    digitalWrite(18, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else if (digitalRead(7) == 0 && digitalRead(6) == 1)//do tył
  {
    digitalWrite(19, HIGH);
    digitalWrite(20, LOW);
    delay(20);
    digitalWrite(18, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else //ZATRZYMAJ
  {
    digitalWrite(18, HIGH);
  }
  //wysiegnik2

  //arm
  if (digitalRead(8) == 0 && digitalRead(9) == 1) //do przodu
  {
    digitalWrite(23, LOW);
    digitalWrite(22, HIGH);
    delay(20);
    digitalWrite(21, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else if (digitalRead(9) == 0 && digitalRead(8) == 1)//do tył
  {
    digitalWrite(23, HIGH);
    digitalWrite(22, LOW);
    delay(20);
    digitalWrite(21, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else //ZATRZYMAJ
  {
    digitalWrite(21, HIGH);
  }
  //arm

  //chwytak
  if (digitalRead(10) == 0 && digitalRead(11) == 1) //do przodu
  {
    digitalWrite(25, LOW);
    digitalWrite(26, HIGH);
    delay(20);
    digitalWrite(24, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else if (digitalRead(11) == 0 && digitalRead(10) == 1)//do tył
  {
    digitalWrite(25, HIGH);
    digitalWrite(26, LOW);
    delay(20);
    digitalWrite(24, LOW); //WAŻNE ZAŁĄCZAJ PO WYBRANIU KIERUNKU
  }
  else //ZATRZYMAJ
  {
    digitalWrite(24, HIGH);
  }
  //chwytak
}
