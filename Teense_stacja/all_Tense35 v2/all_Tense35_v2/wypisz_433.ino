void wypisz_433(all danel)
{
  Serial4.println(dane.report);
  Serial4.println(dane.report_mag);
  Serial4.print(dane.serial_n1);
  Serial4.print('\t');
  Serial4.print(dane.conc1);
  Serial4.print('\t');
  Serial4.print(dane.temp1);
  Serial4.print('\t');
  Serial4.print(dane.hum1);
  Serial4.print('\t');
  Serial4.println(dane.time1);
  Serial4.print(dane.serial_n2);
  Serial4.print('\t');
  Serial4.print(dane.conc2);
  Serial4.print('\t');
  Serial4.print(dane.temp2);
  Serial4.print('\t');
  Serial4.print(dane.hum2);
  Serial4.print('\t');
  Serial4.println(dane.time2);
  Serial4.print(dane.serial_n3);
  Serial4.print('\t');
  Serial4.print(dane.conc3);
  Serial4.print('\t');
  Serial4.print(dane.temp3);
  Serial4.print('\t');
  Serial4.print(dane.hum3);
  Serial4.print('\t');
  Serial4.println(dane.time3);
  Serial4.print("651081167785");
  Serial4.print('\t');
  Serial4.print(dane.temperature);
  Serial4.print('\t');
  Serial4.print(dane.pressure);
  Serial4.print('\t');
  Serial4.println(dane.altitude);
  Serial4.print("667769");
  Serial4.print('\t');
  Serial4.print(dane.temp);
  Serial4.print('\t');
  Serial4.print(dane.hum);
  Serial4.print('\t');
  Serial4.print(dane.pa);
  Serial4.print('\t');
  Serial4.print(dane.alt);
  Serial4.println();
}