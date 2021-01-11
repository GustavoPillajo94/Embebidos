int x=20;           // Moverse derecha, izquierda
int y=20;           // Moverse arriba,abajo
void setup() {
  size(500, 500);   // Tamaño de la interfaz
}

void draw() {
  background(0);               // Color de la interfaz (negro)
  noStroke();                 
  fill(255, 255, 0);           // Color de la elipse (amarilla)
  ellipse(x, y, 40, 40);       // Dibujar la elipse
  comparar();                  // Método comparar
}

void keyPressed() {
  switch(keyCode) {
  case 37:
    x=x-5;
    break;
  case 39:
    x=x+5;
    break;
  case 38:
    y=y-5;
    break;
  case 40:
    y=y+5;
    break;
  }
}

void comparar() {
  
  if ( x > width-20 ) {
    x=width-20;
  }
  if ( y > height-20 ) { 
    y=height-20;
  }
  if ( x < 0 +20 ) {
    x=20;
  }
  if ( y < 0+20 ) {
    y=20;
  }
}
