// ============================================================
// 函数名称: sub_463b5c
// 虚拟地址: 0x463b5c
// WARP GUID: d588f994-cd54-50d0-80df-933048cd9ca5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_464168, sub_463d8c, sub_463c30, sub_463ed8, sub_463d40, sub_463e20
// ============================================================

void __fastcallsub_463b5c(int32_t arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: int32_t i_1 = arg4 - arg1
    int32_t i_1 = arg4 - arg1
    
    if (i_1 s<= 0)
        return 
    
    int32_t ecx = 0
    int32_t* edi_1 = arg3
    
    if (0 s>= arg2)
        return 
    
    do
        int32_t i = i_1
        arg3 = *edi_1 + arg1
        int32_t edx_1
        edx_1.b = *(arg3 - 1)
        
        for (; i s> 0; i -= 1)
            *arg3 = edx_1.b
            arg3 += 1
        
        ecx += 1
        edi_1 = &edi_1[1]
    while (ecx s< arg2)
}
