// ============================================================
// 函数名称: sub_4122ec
// 虚拟地址: 0x4122ec
// WARP GUID: a48dc65b-a805-5803-93d1-9a01583537e2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_411458, sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4122ec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0
    int32_t edx
    edx.b = arg2.b & 0xfc
    sub_411458(arg1, edx)
    int32_t eax_1 = arg1[4]
    
    if (eax_1 != 0)
        sub_404780(arg1[3], sub_40f068, eax_1)
    
    arg1[4] = 0
    int32_t result = (*(*arg1 + 0x28))()
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
