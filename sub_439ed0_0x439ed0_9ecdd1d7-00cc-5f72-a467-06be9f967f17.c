// ============================================================
// 函数名称: sub_439ed0
// 虚拟地址: 0x439ed0
// WARP GUID: 9ecdd1d7-00cc-5f72-a467-06be9f967f17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_439f30
// [被调用的父级函数]: sub_439ab4, sub_43d890, sub_43d874
// ============================================================

void __convention("regparm")sub_439ed0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* ecx = arg1[0x17]
    void* ecx = arg1[0x17]
    
    if (arg2 == ecx)
        return 
    
    if (ecx != 0)
        *(ecx + 0x60) = 0
    
    arg1[0x17] = arg2
    
    if (arg2 != 0)
        *(arg2 + 0x60) = arg1
    
    sub_439f30(arg1)
}
