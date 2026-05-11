// ============================================================
// 函数名称: sub_4118f4
// 虚拟地址: 0x4118f4
// WARP GUID: 1b335622-6d12-5bf4-b455-6bdd93fec3f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4043ac, sub_40c024
// [被调用的父级函数]: sub_4ad27c
// ============================================================

void* __convention("regparm")sub_4118f4(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: (*(*arg1 + 0xc))()
    (*(*arg1 + 0xc))()
    void* eax_1 = sub_40c024(sub_411937+5, *arg3)
    
    if (eax_1 == 0)
        return sub_4043ac(arg3, 0)
    
    return sub_4043ac(arg3, eax_1 - 1)
}
