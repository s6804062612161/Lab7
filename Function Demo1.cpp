double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
     functionM();

	a)  functionM(); //no error
	b)  a = functionM(); //no error but might get warning because of implicit conversion.
	c)  b = functionN(a, b); //error -> b is not double wrong argument type
	d)  r = functionO(r,a,s,b); //no error
	e)  s = functionP(a,b,c,d,e); //error -> argument exceeded
	f)  u = functionM(); //no error
	g)  c = d + functionN(r,s); //error -> wrong argument type
	h)  t = s * functionO(r, a, r, a); //no error
	i)  a = v + functionP(r, s, t, t); //error -> Wrong argument type
	j)  functionP(functionN(a, a), s, t, t+r); //error -> Wrong argument type
	k)  v = functionP(functionN(a, a), s, t, t+r); //error -> Wrong argument type

}


