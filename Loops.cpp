//                                            While

  int n = 9;
  while (n>-1) {
    cout << n << "\n";
    --n;
    }
  cout << "liftoff!\n";
 
 
 
 
//                                           Do

  string str;
  do {
    cout << "Enter text: ";
    getline (cin,str);
    cout << "You entered: " << str << '\n';
     }
  while (str != "goodbye"); 
  
  
  
  
 //                                           For
   int n;
//     ( initialization;  condition;     increase     ) 
//     ( n = Start;       n > End;       n = n + Step ) 
//     ( n = Start;       n > End;       n -= Step    ) 
//     ( n = Start;       n > End;       n++          ) 
   for ( n = 9;           n > -1;        n--          ) {
    cout << n << ", ";
  }
  cout << "liftoff!\n";
  
  
  Range-based for loop
  
  
  
  
  
  
  
   //                                             Range-based for loop
   
   for ( declaration : range ) statement;
   
     string str {"Hello!"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
  
  ===>  [H][e][l][l][o][!]
   
   
   
   
   //                                             GoTo loop   
   
     int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";
   
   
   
   
   
   
   