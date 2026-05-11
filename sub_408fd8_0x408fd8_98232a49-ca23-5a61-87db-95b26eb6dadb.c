// ============================================================
// 函数名称: sub_408fd8
// 虚拟地址: 0x408fd8
// WARP GUID: 98232a49-ca23-5a61-87db-95b26eb6dadb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FileTimeToDosDateTime, FindClose, FileTimeToLocalFileTime, FindFirstFileA
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_409040
// ============================================================

int32_t __convention("regparm")sub_408fd8(int32_t arg1)
{
    // 第一条实际指令: WIN32_FIND_DATAA findFileData
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(sub_40423c(arg1), &findFileData)
    int32_t fatTime
    
    if (hFindFile == 0xffffffff)
        fatTime = 0xffffffff
    else
        FindClose(hFindFile)
        
        if ((findFileData.dwFileAttributes.b & 0x10) != 0)
            fatTime = 0xffffffff
        else
            var_13c
            FILETIME var_10
            FileTimeToLocalFileTime(&var_13c, &var_10)
            
            if (FileTimeToDosDateTime(&var_10, &fatTime:2, &fatTime) == 0)
                fatTime = 0xffffffff
    
    return fatTime
}
