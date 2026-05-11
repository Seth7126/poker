// ============================================================
// 函数名称: sub_40345c
// 虚拟地址: 0x40345c
// WARP GUID: c719da4b-7821-5659-a750-181c9b201670
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RaiseException
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40353c, sub_403668
// ============================================================

void __fastcallsub_40345c(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: if (data_52e008 == 0)
    if (data_52e008 == 0)
        return 
    
    int32_t eax
    int32_t var_4 = eax
    int32_t var_8 = eax
    uint32_t arguments = arg2
    RaiseException(0xeedfae4, 0, 2, &arguments)
    noreturn
}
