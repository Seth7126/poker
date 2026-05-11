// ============================================================
// 函数名称: sub_40553c
// 虚拟地址: 0x40553c
// WARP GUID: 927a2a57-4df8-57a1-9b4e-68f0b0cddff3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405500
// [被调用的父级函数]: sub_40496c, sub_404a88, sub_49c237
// ============================================================

void __convention("regparm")sub_40553c(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: void* ebx = *arg1
    void* ebx = *arg1
    
    if (arg2 != 0)
        *(arg2 - 8) += 1
    
    if (ebx != 0)
        int32_t temp0_1 = *(ebx - 8)
        *(ebx - 8) -= 1
        
        if (temp0_1 == 1)
            *(ebx - 8) += 1
            sub_405500(arg1, arg3)
    
    *arg1 = arg2
}
