// ============================================================
// 函数名称: sub_40ad08
// 虚拟地址: 0x40ad08
// WARP GUID: 9c97c368-5b67-53f1-8d39-ee6a29dab106
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetLocaleInfoA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40c310
// ============================================================

int32_t __convention("regparm")sub_40ad08(uint32_t arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t lCData = arg3
    int32_t lCData = arg3
    
    if (GetLocaleInfoA(arg1, arg2, &lCData, 2) s<= 0)
        return arg3
    
    int32_t eax
    eax.b = lCData.b
    return eax
}
