使用 flexc++ /bisonc++

flexc++ 
  生成的功能都被class 包含
  会生成多个文件
  xx.ih 是接口文件，你可以自己定义lex, 或其他的东西

flexc++ 和flex
lex 	flexc++ 	flexc++ alternative
yylex() 	lex()
YYText() 	matched()
YYLeng() 	length()
ECHO 	echo()
yymore() 	more()
yyless() 	redo() 	accept()
BEGIN startcondition 	begin(StartCondition__::startcondition)
YY_AT_BOL 	n.a.
yy_set_bol(at_bol) 	n.a.

flexc++ 的导出class提供了从文件读入和输出到文件的structor
     Scanner s("InFileName", "OutFileName")
     和改变instream 的方法

在生成的Parser.ih 中间中加入
Parser::Parser(const std::string &inFile) 
     :d_scanner(inFile, "") // out file is stdout
{}

flexc++
bisonc++ 配合

格式和flex 和bison 不同

bisionc++

Directives
%%
Rules




bisionc++ 使用int作为默认的语义值
申明语义值类型 bison 使用 %type xxxx
bisonc++ 使用 %stype xxx 定义语义默认值

l 中的token 需要使用Parser::Token

Scanner.ih 需要加入#include "Parserbase.h"


yytext 在 flexc++ 中用什么???
Ans. matched()
//  while (int token = scanner.lex()) // get all tokens
//  {
//    std::string const &text = scanner.matched();

yyvale 在flexc++ 中用什么??
   直接在y 的action 中使用 $$ = d_scanner.matched();

bisonc++ 也包含一个error token
 用了做错误恢复
