// ============================================================
// 函数名称: sub_4a8bd0
// 虚拟地址: 0x4a8bd0
// WARP GUID: 6c5a7b88-061e-5e7d-80aa-b0e608e11f26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_4128c0, sub_403010
// [被调用的父级函数]: sub_4a8c14
// ============================================================

void __convention("regparm")sub_4a8bd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t esi = arg1[9]
    int32_t esi = arg1[9]
    
    if (esi s<= 0)
        return 
    
    int32_t eax_1 = sub_4128c0(arg1)
    int32_t eax_2 = arg1[1]
    
    if (add_overflow(eax_2, esi))
        sub_403010()
        noreturn
    
    sub_402980(eax_2 + esi, arg1[1], eax_1)
    sub_4128c0(arg1)
    (**arg1)()
    arg1[9] = 0
}
