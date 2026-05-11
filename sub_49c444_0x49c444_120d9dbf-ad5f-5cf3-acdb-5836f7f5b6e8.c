// ============================================================
// 函数名称: sub_49c444
// 虚拟地址: 0x49c444
// WARP GUID: 120d9dbf-ad5f-5cf3-acdb-5836f7f5b6e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFileA, CloseHandle, GetFileSize
// [内部子函数调用]: sub_40423c, sub_40422c
// [被调用的父级函数]: sub_49c934
// ============================================================

BOOL __convention("regparm")sub_49c444(int32_t arg1, void* arg2)
{
    // 第一条实际指令: HANDLE hObject_1
    HANDLE hObject_1
    HANDLE hObject = hObject_1
    int32_t ebx
    int32_t var_14 = ebx
    sub_40422c(arg2)
    int32_t* var_18 = &hObject
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t var_c = 0
    HANDLE hTemplateFile = nullptr
    enum FILE_FLAGS_AND_ATTRIBUTES dwFlagsAndAttributes = 0x8000080
    enum FILE_CREATION_DISPOSITION ExceptionList = OPEN_EXISTING
    HANDLE hFile = CreateFileA(sub_40423c(arg2), 0x80000000, FILE_SHARE_READ, nullptr, ExceptionList, 
        dwFlagsAndAttributes, hTemplateFile)
    int32_t* var_24 = &hObject
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((*data_5304f4)(arg1, hFile, 0, 0, 0, 0, 0, ExceptionList, var_28, var_24, ExceptionList_1, 
            var_1c, var_18) != 0)
        uint32_t var_c_2 = GetFileSize(hFile, nullptr)
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_49c4e4
    hObject = hFile
    return CloseHandle(hObject)
}
