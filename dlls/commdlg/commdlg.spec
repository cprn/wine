name	commdlg
type	win16

1   pascal16 GetOpenFileName(segptr) GetOpenFileName16
2   pascal16 GetSaveFileName(segptr) GetSaveFileName16
5   pascal16 ChooseColor(ptr) ChooseColor16
6   pascal   FileOpenDlgProc(word word word long) FileOpenDlgProc16
7   pascal   FileSaveDlgProc(word word word long) FileSaveDlgProc16
8   pascal   ColorDlgProc(word word word long) ColorDlgProc16
#9   pascal  LOADALTERBITMAP exported, shared data
11  pascal16 FindText(segptr) FindText16
12  pascal16 ReplaceText(segptr) ReplaceText16
13  pascal   FindTextDlgProc(word word word long) FindTextDlgProc16
14  pascal   ReplaceTextDlgProc(word word word long) ReplaceTextDlgProc16
15  pascal16 ChooseFont(ptr) ChooseFont16
16  pascal16 FormatCharDlgProc(word word word long) FormatCharDlgProc16
18  pascal16 FontStyleEnumProc(ptr ptr word long)   FontStyleEnumProc16
19  pascal16 FontFamilyEnumProc(ptr ptr word long)  FontFamilyEnumProc16
20  pascal16 PrintDlg(ptr) PrintDlg16
21  pascal   PrintDlgProc(word word word long) PrintDlgProc16
22  pascal   PrintSetupDlgProc(word word word long) PrintSetupDlgProc16
#23  pascal  EDITINTEGERONLY exported, shared data
#25  pascal  WANTARROWS exported, shared data
26  pascal   CommDlgExtendedError() CommDlgExtendedError
27  pascal16 GetFileTitle(str ptr word) GetFileTitle16
#28  pascal  WEP exported, shared data
#29  pascal  DWLBSUBCLASS exported, shared data
#30  pascal  DWUPARROWHACK exported, shared data
#31  pascal  DWOKSUBCLASS exported, shared data
32 pascal DllEntryPoint(long word word word long word) COMMDLG_DllEntryPoint
