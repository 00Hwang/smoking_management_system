#define MQ2pin A0

float sensorValue;  //센서값 저장용 변수     

void setup()
{
  Serial.begin(9600); // 9600bps의 속도로 시리얼 통신 개
  Serial.println("히터 가열");
  delay(20000); // 히터 가열 시간 동안 대기   
}

void loop()
{
  sensorValue = analogRead(MQ2pin); // 아날로그 값을 읽어들
  
  Serial.print("센서입력: ");        //센서값 출력
  Serial.print(sensorValue);
  
  if(sensorValue > 300)          // 값이 300을 넘으면 
  {
    Serial.print(" |연기감지!");      //연기감지라고 표시하기
  }
  
  Serial.println("");
  delay(2000); // 2초 후 다시 읽어들임    
}