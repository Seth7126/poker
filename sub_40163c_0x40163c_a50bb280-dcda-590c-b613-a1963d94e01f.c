// ============================================================
// 函数名称: sub_40163c
// 虚拟地址: 0x40163c
// WARP GUID: a50bb280-dcda-590c-b613-a1963d94e01f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualFree, VirtualAlloc
// [内部子函数调用]: sub_40148c
// [被调用的父级函数]: sub_401910
// ============================================================

int32_t* __convention("regparm")sub_40163c(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: arg3[1] = 0x100000
    arg3[1] = 0x100000
    int32_t* result = VirtualAlloc(arg1, 0x100000, MEM_RESERVE, PAGE_READWRITE)
    *arg3 = result
    
    if (result == 0)
        uint32_t dwSize = (arg2 + 0xffff) & 0xffff0000
        arg3[1] = dwSize
        result = VirtualAlloc(arg1, dwSize, MEM_RESERVE, PAGE_READWRITE)
        *arg3 = result
    
    if (*arg3 != 0)
        result = sub_40148c(&data_531458, arg3)
        
        if (result.b == 0)
            VirtualFree(*arg3, 0, MEM_RELEASE)
            result = nullptr
            *arg3 = 0
    
    return result
}
