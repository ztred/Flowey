#include<windows.h>
#include<iostream>
#include<stdio.h>
#include<time.h>
int main(){
system("mode con cols=90,lins=160");
MessageBox(m_hWnd,_T("你好，我是小花"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION );
MessageBox(m_hWnd,_T("一朵叫小花的花！"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION );
MessageBox(m_hWnd,_T("你为什么运行这个程序呢？"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION ); 
MessageBox(m_hWnd,_T("我知道为什么......"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION );
MessageBox(m_hWnd,_T("你只想看我们出洋相......对吧......"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION );
Sleep(2000);
MessageBox(m_hWnd,_T("你点了确定...是吗"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION );
Sleep(10000);
MessageBox(m_hWnd,_T("死吧。"),_T("Windows错误报告:433"), MB_ICONEXCLAMATION );

}
