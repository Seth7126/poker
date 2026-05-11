// ============================================================
// 函数名称: sub_4128f8
// 虚拟地址: 0x4128f8
// WARP GUID: ce2899e4-75df-5ebe-ac19-f521e244bc8e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403828
// [被调用的父级函数]: sub_41c438, sub_41f7e0, sub_437e28, sub_41e6c8, sub_41f6b4, sub_412968, sub_49ffc4, sub_4545b0, sub_41ebd8
// ============================================================

void __convention("regparm")sub_4128f8(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    int32_t edx
    arg1, edx = (*(*arg1 + 4))()
    
    if (arg3 == arg1)
        return 
    
    edx.b = 1
    sub_40b56c(sub_40e812+6, edx, data_5308f0)
    sub_403828()
    noreturn
}
