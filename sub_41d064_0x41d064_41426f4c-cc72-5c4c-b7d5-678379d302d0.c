// ============================================================
// 函数名称: sub_41d064
// 虚拟地址: 0x41d064
// WARP GUID: 41426f4c-cc72-5c4c-b7d5-678379d302d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteObject, CloseHandle
// [内部子函数调用]: sub_403420, sub_41cdd0, sub_40cc98, sub_403430, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41d064(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t eax = arg1[5]
    
    if (eax != 0)
        sub_41cdd0(eax)
        DeleteObject(arg1[5])
        arg1[5] = 0
    
    (**arg1)()
    HANDLE hObject = arg1[0x19]
    
    if (hObject != 0)
        CloseHandle(hObject)
    
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(sub_40cc98(&arg1[0x1b]), edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
