const int microphonePin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
//  int mn = 1024;
//  int mx = 0;

  for (int i = 0; i < 10000; ++i) {
    int val = analogRead(microphonePin);
    
    /*arduino ide plotter*/
    Serial.println(val);

    /*or third-party plotter (custom format)*/
    Serial.print("$");
    Serial.print(val);
    Serial.print(";");
    
    /*mn = min(mn, val);
    mx = max(mx, val);*/
  }

  
/*
int delta = mx - mn;
  Serial.print("Min=");
  Serial.print(mn);
  Serial.print(" Max=");
  Serial.print(mx);
  Serial.print(" Delta=");
  Serial.println(delta);*/
}
