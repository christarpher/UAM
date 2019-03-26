void set_color(short int a)
{
     HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute( handle, a);
}
