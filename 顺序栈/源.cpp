#include <iostream>
using namespace std;
typedef char dataType;  
#define maxSize 100  
  
/*
[ʵ�����ݼ�Ҫ��] 
1�� ����˳��ջ�ࡣ 
2�� ʵ�������㷨�� 1������˳��ջ�� 2�������������ջ��ѹ��ֵΪ x ��Ԫ�أ� 3��ɾ������������ջ��Ԫ�أ��������������Ļ�ϣ� 4����ȡ��������ȡջ��Ԫ�أ��������������Ļ�ϣ��� 
3�� Ϊ����ǿ����Ŀɶ��ԣ�������Ҫ���ʵ���ע�͡� 
4�� �ɽ�ʦ�������ջ����ָ�����У���ɳ�����֤�����磺��ѹջ a��ѹջ b��ѹջ c��ѹջ d����ջ���� ջ����ջ��ѹջ e����ջ����ջ������ջ����ĻӦ��� d,c,b,e,a,a��
*/
class stack  
{  
public:  
    stack();  
    //~stack();  
    void push(dataType var);    //ѹջ  
    void pop();                 //��ջ,ʲô��������  
    dataType stackTop();        //����ջ������,ջ�����仯  
    bool isEmpty();             //���򷵻�true,���򷵻�false  
    bool isFull();              //���򷵻�true,���򷵻�false  
  
private:  
    dataType s[maxSize];  //˳�����ɵ�ջ�ռ�  
    int top;              //ջ��ָ��  
};

stack::stack()  
{  
    top = -1;               //��ʾջΪ��  
}  
  
void stack::push(dataType var)  
{  
    s[++top] = var;         //��ջ  
}  
  
void stack::pop()  
{  
    --top;                   //��ջֻҪ��ָ��������  
}  
  
dataType stack::stackTop()  
{  
    return s[top];           //s[top]Ϊջ������  
}  
  
bool stack::isEmpty()  
{  
    return top == -1;         //topΪ-1ʱջΪ��  
}  
  
bool stack::isFull()  
{  
    return top == maxSize-1;  //topΪmaxSizeʱջΪ��  
}  

int main()  
{  
    stack exp;  
      
    //ֻ��ջδ������ѹջ  
    if(!exp.isFull())  
    {  
        exp.push('a');  
    }  
    if(!exp.isFull())  
    {  
        exp.push('3');  
    } 
    //ֻ��ջ�ǿղ���ȡջ��Ԫ�غͳ�ջ  
    if(!exp.isEmpty())  
    {  
        cout<<"ջ��������1: "<<exp.stackTop()<<endl;  
        exp.pop();  
    } 
	cout << exp.stackTop();
	if(!exp.isEmpty())  
    {  
        cout<<"ջ��������2: "<<exp.stackTop()<<endl;  
        exp.pop();  
    }
  
    if(exp.isEmpty())  
    {  
        cout<<"ջΪ��!"<<endl;  
    }  
  
    return 0;  
}  