// ============================================================
// 函数名称: sub_49732c
// 虚拟地址: 0x49732c
// WARP GUID: 9ed8de3f-2245-5daf-b7bb-2b34a626317d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403828
// [被调用的父级函数]: sub_497dd4, sub_516544, sub_5166d8, sub_5082d0
// ============================================================

void __convention("regparm")sub_49732c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x28))
    if (arg2 == *(arg1 + 0x28))
        return 
    
    if ((*(arg1 + 0x20) & 1) == 0 && *(arg1 + 0x24) != 0)
        arg2.b = 1
        sub_40b56c(0x4940dc, arg2, data_5305c0)
        sub_403828()
        noreturn
    
    *(arg1 + 0x28) = arg2
}
