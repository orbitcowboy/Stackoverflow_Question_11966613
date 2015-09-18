void f(int c) { 
    char *p = new char[10]; 
    p[c] = 42; 
} 

void g() { 
    f(100); 
} 
