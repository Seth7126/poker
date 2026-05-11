// ============================================================
// 函数名称: sub_406302
// 虚拟地址: 0x406302
// WARP GUID: 6c50e441-bf7d-53e5-80a6-82ca084297d9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CloseHandle
// [内部子函数调用]: sub_402854
// [被调用的父级函数]: sub_4061e0
// ============================================================

int32_t __convention("regparm")sub_406302(int32_t* arg1)
{
    // 第一条实际指令: HANDLE hObject = *arg1
    HANDLE hObject = *arg1
    arg1[1] = 0xd7b0
    BOOL eax = CloseHandle(hObject)
    
    if (eax != 1)
        return sub_402854() __tailcall
    
    return eax - 1
}
