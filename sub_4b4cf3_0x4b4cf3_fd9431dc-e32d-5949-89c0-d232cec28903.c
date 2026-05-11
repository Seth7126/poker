// ============================================================
// 函数名称: sub_4b4cf3
// 虚拟地址: 0x4b4cf3
// WARP GUID: fd9431dc-e32d-5949-89c0-d232cec28903
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_425af0, sub_42ca60
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_4b4cf3(int32_t* arg1, int16_t arg2)
{
    // 第一条实际指令: *(arg1 * 2) += 1
    *(arg1 * 2) += 1
    char temp0 = *arg1
    *arg1 += arg1.b
    int32_t entry_ebx
    
    if (add_overflow(temp0, arg1.b))
        entry_ebx.b = adc.b(entry_ebx.b, arg2:1.b, temp0 + arg1.b u< temp0)
        trap(0xd)
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    sub_42ca60(arg1)
    LRESULT result = sub_425af0(arg1)
    
    if (result == arg1[0x9a])
        return result
    
    return (*(*arg1 + 0xc0))(entry_ebx)
}
