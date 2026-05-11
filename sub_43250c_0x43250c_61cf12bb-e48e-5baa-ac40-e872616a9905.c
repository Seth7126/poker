// ============================================================
// 函数名称: sub_43250c
// 虚拟地址: 0x43250c
// WARP GUID: 61cf12bb-e48e-5baa-ac40-e872616a9905
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_4323e0
// ============================================================

int32_t*sub_43250c(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* edx
    int32_t* edx
    edx.b = *(arg1[-1] + 0x4b)
    char eax = edx.b
    char temp0_1
    
    if (eax != 0)
        temp0_1 = eax - 3
    
    int32_t ebx
    
    if (eax == 0 || temp0_1 u< 2)
        int32_t eax_2 = arg1[-7] - arg1[-9]
        
        if (eax_2 s<= 0)
            *arg1[-2] = 0
        else
            *arg1[-2] = eax_2 + *(arg1[-1] + 0x38) - (arg1[-0xb] - arg1[-0xd])
            
            if (edx.b == 4)
                ebx.w = 0xffd5
                sub_4032ac(arg1[-1])
    
    edx.b = *(arg1[-1] + 0x4b)
    int32_t* result
    result.b = edx.b - 3
    
    if (edx.b u< 3)
        int32_t eax_9 = arg1[-6] - arg1[-8]
        
        if (eax_9 s<= 0)
            *arg1[-3] = 0
        else
            *arg1[-3] = eax_9 + *(arg1[-1] + 0x3c) - (arg1[-0xa] - arg1[-0xc])
            
            if (edx.b == 2)
                ebx.w = 0xffd5
                sub_4032ac(arg1[-1])
    
    result.b = *(arg1 - 0xd)
    *arg1
    return result
}
