void wypisz_pc(all dane){
      Serial.println(dane.report);
      Serial.println(dane.report_mag);
      Serial.print(dane.serial_n1);
      Serial.print('\t');
      Serial.print(dane.conc1);
      Serial.print('\t');
      Serial.print(dane.temp1);
      Serial.print('\t');
      Serial.print(dane.hum1);
      Serial.print('\t');
      Serial.println(dane.time1);
      Serial.print(dane.serial_n2);
      Serial.print('\t');
      Serial.print(dane.conc2);
      Serial.print('\t');
      Serial.print(dane.temp2);
      Serial.print('\t');
      Serial.print(dane.hum2);
      Serial.print('\t');
      Serial.println(dane.time2);
      Serial.print(dane.serial_n3);
      Serial.print('\t');
      Serial.print(dane.conc3);
      Serial.print('\t');
      Serial.print(dane.temp3);
      Serial.print('\t');
      Serial.print(dane.hum3);
      Serial.print('\t');
      Serial.println(dane.time3);
      Serial.print("AltMU: ");
      Serial.print(dane.temperature);
      Serial.print(" C ");
      Serial.print(dane.pressure);
      Serial.print(" Pa ");
      Serial.print(dane.altitude);
      Serial.println(" m ");
      Serial.print("BME:   ");
      Serial.print(dane.temp);
      Serial.print(" C ");
      Serial.print(dane.pa);
      Serial.print(" Pa ");
      Serial.print(dane.alt);
      Serial.println(" m ");
}