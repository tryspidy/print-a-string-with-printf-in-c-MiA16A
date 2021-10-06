//can't print with printf, since string is a C++ class obj and print %s 
//doesn't recognize
//can do
printf("%s", str.c_str()) //converts string to c str (char array)
  
  //or just use cout<<str; 
  
  //string assignment 
  str1=str2; //or
str1.assign(str2) 