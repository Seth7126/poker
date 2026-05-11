// ============================================================
// 函数名称: sub_4b59d2
// 虚拟地址: 0x4b59d2
// WARP GUID: 97af9fc8-d300-5ce7-8c32-376c5e676ba9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_4043ac, sub_409180, sub_404078
// [被调用的父级函数]: sub_4b5934
// ============================================================

char* __convention("regparm")sub_4b59d2(void* arg1, char* arg2, int32_t arg3, int32_t arg4 @ ebp, char* arg5 @ esi, void* arg6 @ edi)
{
    // 第一条实际指令: char* result
    char* result
    result.b = (arg1 + 1).b * 2
    *result ^= result.b
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    *result += result.b
    *result += result.b
    *arg2 += result.b
    *result += result.b
    int32_t* entry_ebx
    *(result + arg2 + 0x100040) += entry_ebx:1.b
    *result += result.b
    *result += result.b
    *0x656c4f45 += arg3.b
    
    if (arg4 + 1 s< 0)
        jump(0x3d75a56)
    
    if (not(add_overflow(arg4, 1)))
        *(arg6 + 0x6e)
        *result |= result
        char temp2 = *result
        *result += result.b
        
        if (add_overflow(arg3, 1))
            arg2:1.b |= result:1.b
            trap(0xd)
        
        if (temp2 + result.b u< temp2)
            return sub_4b5a84(result, arg2, arg3 + 1) __tailcall
        
        int32_t eflags
        int16_t* edi
        int16_t temp0
        temp0, edi = __insd(arg6, arg2.w, eflags)
        *edi = temp0
        uint16_t* gsbase
        __outsb(arg2.w, *(gsbase + arg5), arg5, eflags)
        *result += result.b
        undefined
    
    arg5[0xa] s>>= 0x8a
    int16_t es
    *0x1400400c = zx.d(es)
    
    while (true)
        char temp4_1 = result.b
        result.b -= 0x21
        char temp5_1
        
        if (temp4_1 u>= 0x21)
            temp5_1 = result.b
            result.b -= 0xd
        
        if (temp4_1 u< 0x21 || temp5_1 == 0xd)
            sub_4043ac(entry_ebx, arg5 - sub_40423c(*entry_ebx))
            arg5 = sub_409180(*entry_ebx)
            result = sub_404078(*entry_ebx)
        
        if ((temp4_1 u>= 0x21 && temp5_1 != 0xd) || result s<= 0)
            *0x1400400c
            *0x14004010
            return result
        
        result.b = *arg5
}
