letter [a-zA-Z]
digit [0-9]
aop [+-*/%]
rop <|<=|>|>=|==|!=
lop &&|[||]{2}|!
bop &|<<|>>|[|]
idop [++]{2}|[--]{2}
%%
auto|break|if|else|int|char {printf("reserved word");}
{letter}({letter}|{digit})* {printf("identifier");}
{digit}({digit}|{letter})* {printf("not an identifier");}
{aop} {printf("airithamatic operator");}
{rop} {printf("relational operator");}
{lop} {printf("logical operator");}
{bop} {printf("bitwise operator");}
{idop} {printf("incerement or decerement operator");}
[=] {printf("assignment operator");}
%%
int yywrap(){
    return 0;
}
int main(){
    yylex();
    return 0;
}
