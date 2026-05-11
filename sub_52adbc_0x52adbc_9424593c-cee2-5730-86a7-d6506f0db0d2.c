// ============================================================
// 函数名称: sub_52adbc
// 虚拟地址: 0x52adbc
// WARP GUID: 9424593c-cee2-5730-86a7-d6506f0db0d2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_5223e8, sub_52add4
// ============================================================

void __convention("regparm")sub_52adbc(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x34) = *data_5300d0
    *(arg1 + 0x34) = *data_5300d0
    int32_t temp0 = *(arg1 + 0xc)
    *(arg1 + 0xc) += 1
    
    if (not(add_overflow(temp0, 1)))
        return 
    
    sub_403010()
    noreturn
}
