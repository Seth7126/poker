// ============================================================
// 函数名称: sub_497d17
// 虚拟地址: 0x497d17
// WARP GUID: e8b915e4-86c3-52f5-865b-3049fb15b515
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402c90, sub_497a44, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_497d17(char* arg1, int16_t arg2, int32_t* arg3, int32_t* arg4 @ ebp, int32_t arg5 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    char* entry_ebx
    *entry_ebx += arg1:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    char* var_80 = entry_ebx
    int32_t var_84 = arg5
    void* var_8c = &arg4[-0x1f]
    int32_t result = sub_497a44(&arg1[0x3394], *(*(arg1 + 4) + 0x80))
    
    if (arg5 != 2)
        int32_t ecx_1
        ecx_1.b = arg4[-0x16].b
        sub_402c90(&arg4[-0x16], sub_497db8, ecx_1 + 1)
        
        if (ecx_1 != 0xffffffff)
            *(arg1 + 0x31f8)
            result = *(arg1 + 0x31f8) * 0x1f
            bool o_1 = unimplemented  {imul eax, dword [ebx+0x31f8], 0x1f}
            
            if (o_1)
                sub_403010()
                noreturn
            
            __builtin_memcpy(&arg1[(result << 2) + 0x10c], &arg4[-0x1f], 0x7c)
            int32_t temp2_1 = *(arg1 + 0x31f8)
            *(arg1 + 0x31f8) += 1
            
            if (add_overflow(temp2_1, 1))
                sub_403010()
                noreturn
        else
            result = sx.d(*(arg4 - 0x75))
            *(arg1 + 0x3200) = result
            arg1[0x339c] = 1
    else
        arg1[0x339d] = 1
    
    *arg4
    return result
}
