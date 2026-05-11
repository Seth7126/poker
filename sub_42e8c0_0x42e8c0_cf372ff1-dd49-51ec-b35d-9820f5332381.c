// ============================================================
// 函数名称: sub_42e8c0
// 虚拟地址: 0x42e8c0
// WARP GUID: cf372ff1-dd49-51ec-b35d-9820f5332381
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetClassInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_424338, sub_425d70, sub_4251a0, sub_4b2840
// ============================================================

void __fastcallsub_42e8c0(PSTR arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t edi_1 = *(arg2 + 0x34)
    
    if (GetClassInfoA(data_5314dc, arg1, arg2 + 0x24) == 0
            && GetClassInfoA(nullptr, arg1, arg2 + 0x24) == 0
            && GetClassInfoA(*data_53027c, arg1, arg2 + 0x24) == 0)
        GetClassInfoA(*(arg2 + 0x34), arg1, arg2 + 0x24)
    
    *(arg2 + 0x34) = edi_1
    *(arg2 + 0x24) = (*(arg2 + 0x24) & 0xffffbf1f) | 3
}
