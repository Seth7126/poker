// ============================================================
// 函数名称: sub_48e950
// 虚拟地址: 0x48e950
// WARP GUID: 336d86c6-9a32-5204-a423-21d4ec36c965
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008
// [被调用的父级函数]: sub_4702a8, sub_506f9c, sub_4727af, sub_472854, sub_527454, sub_4dad04
// ============================================================

int32_t __convention("regparm")sub_48e950(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    uint32_t eax = GetTickCount()
    
    if (eax s< 0)
        sub_403008()
        noreturn
    
    if (arg2 u<= 0x14)
        *(arg1 + 0x1234 + (arg2 << 2)) = eax
        return entry_result
    
    sub_403008()
    noreturn
}
