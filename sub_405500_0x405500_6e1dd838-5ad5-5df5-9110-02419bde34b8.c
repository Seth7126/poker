// ============================================================
// 函数名称: sub_405500
// 虚拟地址: 0x405500
// WARP GUID: 6e1dd838-5ad5-5df5-9110-02419bde34b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40276c, sub_404780
// [被调用的父级函数]: sub_4a7e8d, sub_405360, sub_49c303, sub_4a7cd8, sub_404780, sub_49eb18, sub_40553c, sub_49c237
// ============================================================

void __convention("regparm")sub_405500(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ecx_2 = *arg1
    int32_t* ecx_2 = *arg1
    
    if (ecx_2 == 0)
        return 
    
    *arg1 = 0
    int32_t temp0_1 = ecx_2[-2]
    ecx_2[-2] -= 1
    
    if (temp0_1 != 1)
        return 
    
    int32_t* var_4_1 = arg1
    int32_t ecx
    ecx.b = *(arg2 + 1)
    char** edx = *(arg2 + ecx + 6)
    
    if (edx != 0)
        int32_t ecx_1 = ecx_2[-1]
        
        if (ecx_1 != 0)
            sub_404780(ecx_2, *edx, ecx_1)
    
    sub_40276c(ecx_2 - 8)
}
