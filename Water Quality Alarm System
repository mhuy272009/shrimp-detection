// Khai báo các chân sẽ dùng
const int phPin = A0;
const int tempPin = A1;
const int tdsPin = A2;
const int buzzerPin = 12;

// Khai báo các biến lưu giá trị
int ph, tds, tempC;

void setup() {
  // Cấu hình chân đầu vào/đầu ra
  pinMode(phPin, INPUT);
  pinMode(tempPin, INPUT);
  pinMode(tdsPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  // Khởi tạo Serial để theo dõi giá trị trên máy tính
  Serial.begin(9600);
}

void loop() {
  getSensors();   // Đọc dữ liệu
  pushAlarm();    // Kiểm tra cảnh báo
  pushInternet(); // Gửi dữ liệu (nếu có)
  
  // In ra màn hình Serial để kiểm tra
  Serial.print("pH: "); Serial.print(ph);
  Serial.print(" | TDS: "); Serial.print(tds);
  Serial.print(" | Temp: "); Serial.println(tempC);
  
  delay(1000); // Đợi 1 giây trước khi lặp lại
}

// Hàm đọc giá trị TDS
int getTDS(){
  int value = analogRead(tdsPin);
  // min tds = 0, max tds = 1000 (Dựa trên thông số map của bạn)
  return map(value, 0, 876, 0, 1000);
}

// Hàm đọc giá trị PH
int getPH(){
  int value = analogRead(phPin);
  return map(value, 0, 1023, 0, 14);
}

// Hàm đọc giá trị nhiệt độ
int getTemp(){
  int value = analogRead(tempPin);
  return map(value, 20, 358, -40, 125);
}

// Hàm đọc tất cả cảm biến
void getSensors(){
  ph = getPH();
  tempC = getTemp();
  tds = getTDS();
}

// Hàm xử lý và đưa ra cảnh báo
void pushAlarm(){
  bool alarm = false;
  
  // Sử dụng || thay cho "or" (Cú pháp chuẩn C++)
  if(ph < 7 || ph > 8) alarm = true;
  if(tds > 40) alarm = true;
  if(tempC < 25 || tempC > 32) alarm = true;
  
  if(alarm){
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}

void pushInternet(){
  // Thêm code gửi dữ liệu lên ESP8266/Blynk ở đây
}
