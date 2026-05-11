// ============================================================
// 函数名称: sub_52adb0
// 虚拟地址: 0x52adb0
// WARP GUID: a95943bb-e848-5769-86fd-2b05fb059323
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_5223e8, sub_52add4
// ============================================================

void __convention("regparm")sub_52adb0(void* arg1)
{
    // 第一条实际指令: int32_t temp0 = *(arg1 + 8)
    int32_t temp0 = *(arg1 + 8)
    *(arg1 + 8) += 1
    
    if (not(add_overflow(temp0, 1)))
        return 
    
    sub_403010()
    noreturn
}
