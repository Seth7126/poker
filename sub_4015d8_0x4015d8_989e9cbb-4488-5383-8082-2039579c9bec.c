// ============================================================
// 函数名称: sub_4015d8
// 虚拟地址: 0x4015d8
// WARP GUID: 989e9cbb-4488-5383-8082-2039579c9bec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualFree, VirtualAlloc
// [内部子函数调用]: sub_40148c
// [被调用的父级函数]: sub_401880
// ============================================================

int32_t* __convention("regparm")sub_4015d8(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t dwSize
    uint32_t dwSize
    
    if (arg1 s>= 0x100000)
        dwSize = (arg1 + 0xffff) & 0xffff0000
    else
        dwSize = 0x100000
    
    arg2[1] = dwSize
    int32_t* result = VirtualAlloc(nullptr, dwSize, MEM_RESERVE, PAGE_NOACCESS)
    *arg2 = result
    
    if (result != 0)
        result = sub_40148c(&data_531458, arg2)
        
        if (result.b == 0)
            VirtualFree(*arg2, 0, MEM_RELEASE)
            result = nullptr
            *arg2 = 0
    
    return result
}
