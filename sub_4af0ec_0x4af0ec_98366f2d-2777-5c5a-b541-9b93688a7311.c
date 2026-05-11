// ============================================================
// 函数名称: sub_4af0ec
// 虚拟地址: 0x4af0ec
// WARP GUID: 98366f2d-2777-5c5a-b541-9b93688a7311
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4af0ec(char* arg1, char* arg2, int32_t* arg3, uint16_t arg4 @ ebp, char* arg5 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    *arg1 += arg1.b
    char temp1 = *arg5
    *arg5 += arg3.b
    bool c = temp1 + arg3.b u< temp1
    int16_t var_2 = arg1.w
    char* var_4
    void* esp = &var_4:2
    bool o_1
    
    if (c)
        *arg1 = *arg1
        char temp2_1 = arg1[0x5207001a]
        arg1[0x5207001a] += arg1.b
        c = temp2_1 + arg1.b u< temp2_1
        o_1 = add_overflow(temp2_1, arg1.b)
    label_4af179:
        
        if (not(o_1))
            TEB* fsbase
            *(fsbase + arg2 + 0x65)
            *arg1 += arg1:1.b
            *arg1 = &arg1[*arg1]
            jump(*arg1)
        
        if (c)
            *(esp - 4) = esp
            undefined
    else
        int32_t var_6
        
        if (temp1 == neg.b(arg3.b))
            char temp3_1 = *arg1
            *arg1 += arg1.b
            *arg2 = sbb.b(*arg2, 0, temp3_1 + arg1.b u< temp3_1)
            c = unimplemented  {sbb byte [edx], 0x0}
            o_1 = unimplemented  {sbb byte [edx], 0x0}
            var_4 = arg2
            esp = &var_6:2
            goto label_4af179
        
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg5 + 0x6c), arg4)
        *(arg5 + 0x6c) = temp0_1
        int32_t esi
        var_6 = esi
        esp = &var_6
        
        if (not(c))
            *(arg5 + 0x6e)
            *arg1 += arg1.b
            undefined
        
        if (c)
            *(esp - 4) = esp
            undefined
    
    if (c)
        jump(0x4af25a)
    
    jump(0x4af1f5)
}
