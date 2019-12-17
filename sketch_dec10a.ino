int ledpin=13;//定义数字接口13
char var;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); //初始化串口并设置波特率为9600
   pinMode(ledpin,OUTPUT);//设置数字13 口为输出接口
}

void loop() {
  // put your main code here, to run repeatedly:
   int a[2]={0,1};
   int b[4]={1,0,0,0};
   int c[4]={1,0,1,0};
   int d[3]={1,0,0};
   int f[4]={0,0,1,0};
   int g[3]={1,1,0};
   int h[4]={0,0,0,0};
   int i[2]={0,0};
   int j[4]={0,1,1,1};
   int k[4]={1,0,1,0};
   int m[2]={1,1};
   int n[2]={1,0};
   int p[4]={0,1,1,0};
   int q[4]={1,1,0,1};
   int r[3]={0,1,0};
   int s[3]={0,0,0};
   int t[1]={1};
   int u[3]={0,0,1};
   int v[4]={0,0,0,1};
   int w[3]={0,1,1};
   int x[4]={1,0,1,0};
   int y[4]={1,0,1,1};
   int z[4]={1,1,0,0};
   int e[1]={0};
   int l[4]={0,1,0,0};
   int o[3]={1,1,1};
   //h,104;e,101;l,108;o,111;
   if(Serial.available()>0)
   {
    var=Serial.read();
    }
if(var=='h')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(h[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(h[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("hellohh");
   }
   if(var=='e')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<1;i++)
   {
    if(e[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(e[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("helloee");
   }
   if(var=='l')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(l[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(l[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
   
        Serial.println("helloll");
   }
   if(var=='o')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(o[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(o[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
     Serial.println("hellooo");
   }



   if(var=='b')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(b[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(b[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("bb");
   }
if(var=='c')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(c[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(c[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("cc");
   }
if(var=='f')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(f[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(f[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("ff");
   }
if(var=='j')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(j[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(j[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("jj");
   }
if(var=='k')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(k[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(k[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("kk");
   }
if(var=='p')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(p[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(p[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("pp");
   }
if(var=='q')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(q[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(q[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("qq");
   }
if(var=='v')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(v[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(v[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("vv");
   }
if(var=='x')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(x[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(x[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("xx");
   }
if(var=='y')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(y[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(y[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("yy");
   }
if(var=='z')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<4;i++)
   {
    if(z[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(z[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("zz");
   }
if(var=='d')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(d[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(d[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("dd");
   }
 if(var=='g')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(g[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(g[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("gg");
   }  
   if(var=='r')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(r[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(r[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("rr");
   }
if(var=='s')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(s[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(s[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("ss");
   }
if(var=='u')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(u[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(u[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("uu");
   }
if(var=='w')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<3;i++)
   {
    if(w[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(w[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("ww");
   }
if(var=='a')
   {
    Serial.println(var, DEC) ;
        for(int i=0;i<2;i++)
   {
    if(a[i]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(a[i]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("aa");
   }
if(var=='i')
   {
    Serial.println(var, DEC) ;
        for(int j=0;j<2;j++)
   {
    if(i[j]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(i[j]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("ii");
   }
if(var=='n')
   {
    Serial.println(var, DEC) ;
        for(int j=0;j<2;j++)
   {
    if(n[j]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(n[j]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("nn");
   }
if(var=='m')
   {
    Serial.println(var, DEC) ;
        for(int j=0;j<2;j++)
   {
    if(m[j]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(m[j]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("mm");
   }

   if(var=='t')
   {
    Serial.println(var, DEC) ;
        for(int j=0;j<1;j++)
   {
    if(t[j]==1){
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(5000);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
    if(t[j]==0)
    {
      digitalWrite(ledpin,HIGH);//点亮数字13 口LED。
        delay(500);
        digitalWrite(ledpin,LOW);//熄灭数字13 口LED
        delay(500);
    }
   }
        Serial.println("tt");
   }
   }
   
