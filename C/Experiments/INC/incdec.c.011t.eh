
;; Function main (main, funcdef_no=0, decl_uid=1824, cgraph_uid=0)

main ()
{
  int b;
  int a;
  int D.1831;
  int a.1;
  int a.0;

  a = 10;
  a.0 = a;
  a = a.0 + 1;
  a = a.0;
  a.1 = a;
  a = a.1 + 1;
  b = a.1;
  printf ("%d %d\n", a, b);
  D.1831 = 0;
  goto <D.1832>;
  <D.1832>:
  return D.1831;
}


