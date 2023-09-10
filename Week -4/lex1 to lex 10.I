//Recognize strings ending with 00


%%
[0-9]*00 {printf("string accepted");}
[0-9]* {printf("string rejected");}
%%


int main()
{
  yylex();
}
int yywrap()
{
  return 1;
}

// Count the number of Lines in given input

%{
int num_lines=0;
%}


%%
\n ++num_lines;
.  
%%


int main()
{
  yylex();
  printf("no of lines=%d\n",num_lines);
}
int yywrap()
{
  return 1;
}

// Count number of vowels and consonants


%{
int vowel_count = 0;
int consonant_count = 0;
%}

%%
[aAeEiIoOuU] { vowel_count++; }
[A-Za-z]      { consonant_count++; }
.             { /* Ignore all other characters */ }
%%

int main() 
{
    yylex();
    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonants: %d\n", consonant_count);
    return 0;
}


// Count the number of Lines in given input

%{
int num_lines=0;
%}


%%
\n ++num_lines;
.  
%%


int main()
{
  yylex();
  printf("no of lines=%d\n",num_lines);
}
int yywrap()
{
  return 1;
}

// Identification of Vowels and Consonants

%%
[aeiouAEIOU] 	{ printf("%s is vowel\n",yytext); }
[a-zA-Z] 	{printf("%s is consonant\n",yytext);}
. 		{printf("%s is invalid lexeme\n",yytext);}
%%


int main()
{
  yylex();
}
int yywrap()
{
  return 1;
}
