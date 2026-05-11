// ============================================================
// 函数名称: sub_443f04
// 虚拟地址: 0x443f04
// WARP GUID: fc950db3-8500-59be-9bc8-bdaf93d99303
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_443ef0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_443f04(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = sub_443ef0(arg1)
    int32_t result = sub_443ef0(arg1)
    
    if (arg2 != result && (arg2 == 0 || arg2 s>= 0x24)
            && ((*(arg1 + 0x20) & 1) == 0 || *(arg1 + 0x244) != 0))
        *(arg1 + 0x244) = arg2
    
    return result
}
