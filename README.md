
# arduino_l476  Arduino编程语句参考

总体结构
setup()
loop()

控制结构
if
if…else
for
switch case
while
do… while
break
continue
return

进阶语法
; (分号)
{} (大括号)
// (单行注释)
/* */ (多行注释)
#define
#include

算术运算符
= (赋值运算符 )
+ (加法运算)
– (减法运算)
* (乘法运算)
/ (除法运算)
% (取模运算)

关系运算符
== (等于)
!= (不等于)
< (小于)
> (大于)
<= (小于等于)
>= (大于等于)

布尔运算符
&& (与)
|| (或)
! (非)

指针
指针的概念
指针变量

位运算符
& (位与)
| (位或)
^ (位异或)
~ (位非)
<< (位左移)
>> (位右移)

复合运算符
++ (自加)
— (自减)
+= (复合加)
-= (复合减)
*= (复合乘)
/= (复合除)
&= (复合与)
|= (复合或)

数值
常量
HIGH | LOW
INPUT | OUTPUT| INPUT_PULLUP
true | false
整数常量
浮点数常量

数据类型(简介)
void
boolean 布尔型
char 字符型
unsigned char 无符号字符型
byte 字节型
int 整型
word 字型
long 长整型
unsigned long 无符号长整型
float 浮点型
double 双精度浮点型
string 字符串 字符串型
array 数组

转换
char()
byte()
int()
word()
long()
float()

变量范围与限定符
变量作用域
static – 静态变量
volatile – 易变变量
const – 常量

工具
sizeof()

函数
通信
Stream
Serial/串行通讯
ASCII字符代码表

数字 I/O
pinMode()
digitalWrite()
digitalRead()

模拟 I/O
analogRead()
analogWrite() – PWM

高级 I/O
tone()
noTone()
shiftOut()
shiftIn()
pulseIn()

时间
millis()
micros()
delay()
delayMicroseconds()

数学
min() 最小值
max() 最大值
abs() 绝对值
constrain() 数值限制
map() 映射函数
pow() 指数函数
sqrt() 开方函数

三角函数
sin() -正弦函数
cos() -余弦函数
tan() -正切函数

随机数
random()
randomSeed()

位与字节
lowByte()
highByte()
bitRead()
bitWrite()
bitSet()
bitClear()
bit()

外部中断
attachInterrupt() – 设置中断
detachInterrupt() – 取消中断

各语句具体的中文解释：http://www.taichi-maker.com/homepage/reference-index/arduino-code-reference/

