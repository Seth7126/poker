// ============================================================
// 函数名称: sub_51682b
// 虚拟地址: 0x51682b
// WARP GUID: 59106f4e-4aeb-532b-bb54-1229c82a6c4d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_514cc4, sub_513ae4, sub_515d34
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_51682b(int32_t* arg1, void* arg2, char* arg3 @ eax, uint16_t arg4 @ esi, int32_t arg5, void* arg6, void* arg7, int16_t arg8, char arg9, void* arg10, int32_t arg11)
{
    // 第一条实际指令: *arg1 -= 1
    *arg1 -= 1
    *arg3 += arg3.b
    char temp1 = arg3[0x5f]
    arg3[0x5f] += arg1:1.b
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(arg2 + 0x65), arg4)
    *(arg2 + 0x65) = temp0
    
    if (temp1 == neg.b(arg1:1.b))
        void* ebx
        ebx:1.b = arg7:1.b s>> arg9
        return (*(ebx + 0x5d))()
    
    char* cs
    *(cs + arg10) += arg10.b
    *(arg6 - 0x75) += arg8.b
    void* eax
    eax.b = __in_al_dx(arg8, eflags)
    arg10 = arg7
    *(eax + 0x58) = 1
    *(eax + 0x5c) = 0
    sub_514cc4(eax, sub_5168a7+5)
    char result
    
    if (*(eax + 0x54) != 2)
        int32_t ecx_3
        result, ecx_3 = sub_515d34(eax, (*(eax + 0x350)).b, 0)
        
        if (result == 0)
            result = sub_513ae4(ecx_3, 0x65)
    else
        int32_t ecx_1
        ecx_1.b = 1
        int32_t ecx_2
        result, ecx_2 = sub_515d34(eax, (*(eax + 0x350)).b, ecx_1)
        
        if (result == 0)
            return sub_513ae4(ecx_2, 0x65)
    
    return result
}
