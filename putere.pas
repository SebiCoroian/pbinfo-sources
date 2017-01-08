var m,n,s,p,i,a,b:longint;
    f:text;
begin
 assign(f,'putere.in');
 reset(f);
 read(f,m,n);
 close(f);
 a:=m mod 10; b:=n mod 10;
 p:=1;
 for i:=1 to b do
  p:=p*a;
 assign(f,'putere.out');
 rewrite(f);
 writeln(f,p);
 s:=0;
 while m>0 do
  begin
   a:=m mod 10; m:=m div 10;
   b:=n mod 10; n:=n div 10;
   p:=1;
   for i:=1 to b do
    p:=p*a;
   s:=s+p;
  end;
 write(f,s);
 close(f);
end.