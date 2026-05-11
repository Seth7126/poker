// ============================================================
// 函数名称: sub_4480dd
// 虚拟地址: 0x4480dd
// WARP GUID: 3b426258-5e2c-52f3-a435-66aeda7c2c8b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary, DestroyWindow, SendMessageA
// [内部子函数调用]: sub_4492b4, sub_403420, sub_449ec0, sub_4030d0, sub_440c94, sub_415d64, sub_403430, sub_4498a0, sub_449888
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4480dd(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 + 0x41) += arg3.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    int32_t var_4 = entry_ebx + 1
    int32_t var_8 = arg5 - 2
    sub_403430(arg1, arg2)
    HMODULE hLibModule = *(arg1 + 0x90)
    
    if (hLibModule u> 0x20)
        FreeLibrary(hLibModule)
    
    if (*(arg1 + 0x24) != 0 && arg1[0x94] != 0 && *(arg1 + 0x40) != 0)
        sub_449888()
    
    arg1[0x8d] = 0
    sub_449ec0(arg1)
    sub_4498a0(arg1, 0)
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    sub_415d64(arg1, edx_1)
    char* var_c_2 = arg1
    sub_4492b4(arg1, sub_448590)
    HWND hWnd = *(arg1 + 0x24)
    
    if (hWnd != 0 && arg1[0x94] != 0)
        if (*data_53040c != 0)
            SendMessageA(hWnd, 0x80, 1, 0)
        
        DestroyWindow(*(arg1 + 0x24))
    
    void* eax_6 = *(arg1 + 0x34)
    
    if (eax_6 != 0)
        sub_440c94(eax_6)
    
    sub_4030d0(*(arg1 + 0x98))
    sub_4030d0(*(arg1 + 0x80))
    int32_t result = sub_4030d0(*(arg1 + 0x88))
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
