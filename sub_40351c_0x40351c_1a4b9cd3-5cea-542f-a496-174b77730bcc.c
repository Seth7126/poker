// ============================================================
// 函数名称: sub_40351c
// 虚拟地址: 0x40351c
// WARP GUID: 1a4b9cd3-5cea-542f-a496-174b77730bcc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RaiseException
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40351c(int32_t arg1)
{
    // 第一条实际指令: if (data_52e008 u<= 1)
    if (data_52e008 u<= 1)
        return arg1
    
    uint32_t __saved_edx
    RaiseException(0xeedfae3, 0, 2, &__saved_edx)
    noreturn
}
