// ============================================================
// 函数名称: sub_454bbc
// 虚拟地址: 0x454bbc
// WARP GUID: 5e0ead15-d37d-5e16-8d1f-5ac48816628e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_454c28, sub_4602c8
// [被调用的父级函数]: sub_453830, sub_4545b0
// ============================================================

int32_t __convention("regparm")sub_454bbc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    
    if (eax != 0xc8 && eax != 0xc9)
        void* eax_1 = *arg1
        *(eax_1 + 0x14) = 0x12
        *(eax_1 + 0x18) = arg1[4]
        (**arg1)()
    
    int32_t result = sub_454c28(arg1)
    
    if (result == 1)
        return 1
    
    if (result == 2)
        if (arg2 != 0)
            *(*arg1 + 0x14) = 0x32
            (**arg1)()
        
        sub_4602c8(arg1)
        return 2
    
    return result
}
