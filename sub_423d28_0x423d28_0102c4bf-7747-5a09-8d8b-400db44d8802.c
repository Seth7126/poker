// ============================================================
// 函数名称: sub_423d28
// 虚拟地址: 0x423d28
// WARP GUID: 0102c4bf-7747-5a09-8d8b-400db44d8802
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_44c778
// ============================================================

void __convention("regparm")sub_423d28(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x12f))
    if (arg2 == *(arg1 + 0x12f))
        return 
    
    *(arg1 + 0x12f) = arg2
    int32_t ebx
    ebx.w = 0xffcd
    sub_4032ac(arg1)
    (*(*arg1 + 0x74))()
}
