#include <stdlib.h>
#include <string.h>


#define MAX 1028
#define MIN 0

#define LONG_DELAY 500
#define SHORT_DELAY 200
#define PAUSE_DELAY 300
#define DOT dot();
#define  DASH  dash();
#define PIN A1


void morseString(String a)
{
   int i = 0;
   while ( i < strlen( a.c_str() ) )
   {
      morseCharacter( a[i] );
      i += 1;  //i = i + 1; (increment the value of i) {or i++}
   }
}

void morseCharacter( char letter )
{
  switch ( letter ) {
  case ' ':
        pause();
        break;
  case 'a':
  	a();
  	break;
  
  case 'b':
  	b();
  	break;
  
  case 'c':
  	c();
  	break;
  
  case 'd':
  	d();
  	break;
  
  case 'e':
  	e();
  	break;
  
  case 'f':
  	f();
  	break;
  
  case 'g':
  	g();
  	break;
  
  case 'h':
  	h();
  	break;
  
  case 'i':
  	i();
  	break;
  
  case 'j':
  	j();
  	break;
  
  case 'k':
  	k();
  	break;
  
  case 'l':
  	l();
  	break;
  
  case 'm':
  	m();
  	break;
  
  case 'n':
  	n();
  	break;
  
  case 'o':
  	o();
  	break;
  
  case 'p':
  	p();
  	break;
  
  case 'q':
  	q();
  	break;
  
  case 'r':
  	r();
  	break;
  
  case 's':
  	s();
  	break;
  
  case 't':
  	t();
  	break;
  
  case 'u':
  	u();
  	break;
  
  case 'v':
  	v();
  	break;
  
  case 'w':
  	w();
  	break;
  
  case 'x':
  	x();
  	break;
  
  case 'y':
  	y();
  	break;
  
  case 'z':
  	z();
  	break;
  default:
    Serial.println("Unknown character: " + String(letter) );
  }
}

void on() { analogWrite(PIN, MAX); }
void off() { analogWrite(PIN, MIN); }

void dash()
{
  on();
  delay(LONG_DELAY);
  off();
  
}
void dot()
{
  on();
  delay(SHORT_DELAY);
  off();
  
}
void pause()
{
  delay(PAUSE_DELAY);
}

void a()
{
  DOT DASH
}
void b()
{
  DASH DOT DOT
}
void c()
{
   DASH DOT DASH DOT
}
void d()
{
  DASH DOT DOT 
}
void e()
{
  DOT
}
void f()
{
  DOT DOT DASH DOT
}

void g()
{
  DASH DASH DOT
}

void h()
{
   DOT DOT DOT DOT
}

void i()
{
  DOT DOT
}

void j()
{
  DOT DASH DASH DASH
}

void k()
{
  DASH DOT DASH
}

void l()
{
  DOT DASH DOT DOT
}

void m()
{
  DASH DASH
}

void n()
{
  DASH DOT
}

void o()
{
  DASH DASH DASH
}

void p()
{
  DOT DASH DASH DOT
}

void q()
{
  DASH DASH DOT DASH
}

void r()
{
  DOT DASH DOT
}

void s()
{
  DOT DOT DOT
}

void t()
{
  DASH
}

void u()
{
  DOT DOT DASH
}

void v()
{
  DOT DOT DOT DASH
}

void w()
{
  DOT DASH DASH
}

void x()
{
  DASH DOT DOT DASH
}

void y()
{
  DASH DOT DASH DASH
}

void z()
{
  DASH DASH DOT DOT 
}

void setup()
{
}

void loop()
{
}
