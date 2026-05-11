// ============================================================
// 函数名称: sub_48fb60
// 虚拟地址: 0x48fb60
// WARP GUID: a974b2de-69e0-5008-a94b-ecea5f58f2dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary
// [内部子函数调用]: sub_4030d0, sub_48fb3c, sub_403010
// [被调用的父级函数]: sub_48fbb4
// ============================================================

voidsub_48fb60()
{
    // 第一条实际指令: if (data_52f568 == 0)
    if (data_52f568 == 0)
        return 
    
    int32_t eax_2 = (*(*sub_48fb3c() + 0x14))()
    int32_t i = eax_2 - 1
    
    if (add_overflow(eax_2, 0xffffffff))
        sub_403010()
        noreturn
    
    if (i s>= 0)
        do
            FreeLibrary((*(*sub_48fb3c() + 0x18))())
            i -= 1
        while (i != 0xffffffff)
    
    sub_4030d0(data_52f568)
    data_52f568 = 0
}
