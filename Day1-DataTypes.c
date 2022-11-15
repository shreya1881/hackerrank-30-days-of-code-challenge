
     int i1;
    double d1;
    char s1[100]; // this is not scalable for input of unknown size

// Read inputs from stdin
scanf("%d", &i1);
scanf("%lf", &d1);
scanf("%*[\n] %[^\n]",s1);// or gets(s2); 
//*[\n] this character is used to ignore the new line character entered after float input.

// Print outputs to stdout
printf("%d\n", i + i1);
printf("%.01lf\n", d + d1);

printf("%s%s", s, s1);