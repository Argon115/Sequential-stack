#include <iostream>
using namespace std;
typedef char dataType;  
#define maxSize 100  
  
/*
[实验内容及要求] 
1、 定义顺序栈类。 
2、 实现如下算法： 1）创建顺序栈； 2）插入操作：向栈顶压入值为 x 的元素； 3）删除操作：弹出栈顶元素，将数据输出在屏幕上； 4）存取操作：读取栈顶元素，将数据输出在屏幕上；。 
3、 为了增强程序的可读性，程序中要有适当的注释。 
4、 由教师随机给出栈操作指令序列，完成程序验证。例如：（压栈 a，压栈 b，压栈 c，压栈 d，弹栈，弹 栈，弹栈，压栈 e，弹栈，读栈顶，弹栈。屏幕应输出 d,c,b,e,a,a）
*/
class stack  
{  
public:  
    stack();  
    //~stack();  
    void push(dataType var);    //压栈  
    void pop();                 //出栈,什么都不返回  
    dataType stackTop();        //返回栈顶数据,栈顶不变化  
    bool isEmpty();             //空则返回true,否则返回false  
    bool isFull();              //满则返回true,否则返回false  
  
private:  
    dataType s[maxSize];  //顺序表组成的栈空间  
    int top;              //栈顶指针  
};

stack::stack()  
{  
    top = -1;               //表示栈为空  
}  
  
void stack::push(dataType var)  
{  
    s[++top] = var;         //入栈  
}  
  
void stack::pop()  
{  
    --top;                   //出栈只要将指针向下移  
}  
  
dataType stack::stackTop()  
{  
    return s[top];           //s[top]为栈顶数据  
}  
  
bool stack::isEmpty()  
{  
    return top == -1;         //top为-1时栈为空  
}  
  
bool stack::isFull()  
{  
    return top == maxSize-1;  //top为maxSize时栈为满  
}  

int main()  
{  
    stack exp;  
      
    //只有栈未满才能压栈  
    if(!exp.isFull())  
    {  
        exp.push('a');  
    }  
    if(!exp.isFull())  
    {  
        exp.push('3');  
    } 
    //只有栈非空才能取栈顶元素和出栈  
    if(!exp.isEmpty())  
    {  
        cout<<"栈顶数据是1: "<<exp.stackTop()<<endl;  
        exp.pop();  
    } 
	cout << exp.stackTop();
	if(!exp.isEmpty())  
    {  
        cout<<"栈顶数据是2: "<<exp.stackTop()<<endl;  
        exp.pop();  
    }
  
    if(exp.isEmpty())  
    {  
        cout<<"栈为空!"<<endl;  
    }  
  
    return 0;  
}  