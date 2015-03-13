

//hi, how can i convert any code to ascii code , i need the unsigned char,
//im using OIS library which returns a text and a key when any keyboard key is pressed
//key contains KC Codes and text holds the character
//for example after pressing "s" key , arg.text returns a char which is 115 and holds 's' and arg.key returns something like 32
//everything is ok until i press alt + shift in my application ! when i do it changes my language to secondary language
// now when i press "s" key , arg.text returns 1585 ! and arg.key is still 32
// now my application might run on lots of pcs which might have different secondary keyboard language
// how can i convert the 1585 to the same 115 that english returns ?
//i tried using both below function but none of them works
//thanks and sry if i wrote too much
 
int ATTextBox::scan2ascii2(DWORD scancode, unsigned short* result)
{
        static HKL layout=GetKeyboardLayout(0);
        static unsigned char State[256];
 
        if (GetKeyboardState(State)==FALSE)
                return 0;
        UINT vk=MapVirtualKeyEx(scancode,1,layout);
        return ToAsciiEx(vk,scancode,State,result,0,layout);
}
 
int ATTextBox::scan2ascii(DWORD scancode)
{
        BYTE ks[256];
        GetKeyboardState(ks);
        WORD w;
        UINT scan;
        scan=0;
        ToAscii(scancode,scan,ks,&w,0);
        char ch =char(w);
        return ch;

}
