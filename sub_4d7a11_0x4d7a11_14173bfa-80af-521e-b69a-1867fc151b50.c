// ============================================================
// 函数名称: sub_4d7a11
// 虚拟地址: 0x4d7a11
// WARP GUID: 14173bfa-80af-521e-b69a-1867fc151b50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_516ec0, sub_4d7a1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_4d7a11(char* arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    char temp1 = *arg5
    *arg5 += arg1.b
    bool z = temp1 == neg.b(arg1.b)
    void* const __return_addr_1 = __return_addr
    int32_t* arg_4
    int32_t* esp = &arg_4
    int16_t* entry_ebx
    
    if (z)
        int32_t eflags
        int16_t temp0
        temp0, eflags = __arpl_memw_gpr16(*entry_ebx, arg4.w)
        *entry_ebx = temp0
        return sub_4d7a1c(arg3, __return_addr_1) __tailcall
    
    int32_t ecx_1 = arg3 - 1
    bool cond:2_1
    
    if (not(z) && ecx_1 != 0)
        char temp2_1 = sbb.b(*__return_addr_1, entry_ebx:1.b, temp1 + arg1.b u< temp1)
        *__return_addr_1 = temp2_1
        cond:2_1 = temp2_1 != 0
        arg4 = arg_4
        void arg_8
        esp = &arg_8
        goto label_4d7a95
    
    while (true)
        cond:2_1 = entry_ebx.b != *(arg4 - 3)
    label_4d7a95:
        
        if (not(cond:2_1))
            entry_ebx.b = arg1[0xffffffff]
            
            if (entry_ebx.b == arg4[-1].b)
                arg4[-3] = arg5
                arg4[-4] = ecx_1
        
        entry_ebx.b = *arg1
        
        if (entry_ebx.b == *(arg4 - 7))
            entry_ebx.b = arg1[0xffffffff]
            
            if (entry_ebx.b == arg4[-2].b)
                arg4[-5] = arg5
                arg4[-6] = ecx_1
        
        ecx_1 += 1
        arg1 = &arg1[4]
        void* const __return_addr_2 = __return_addr_1
        __return_addr_1 -= 1
        
        if (__return_addr_2 == 1)
        label_4d7ac1:
            arg5 = &arg5[1]
            arg4[-8] += 0x8d14
            int32_t temp4_1 = arg4[-7]
            arg4[-7] -= 1
            
            if (temp4_1 == 1)
                break
            
            arg1 = arg4[-8]
            __return_addr_1 = sx.d(*arg1)
            
            if (__return_addr_1 s<= 0)
                break
            
            ecx_1 = 1
            arg1 = arg4[-8] - 0x297
        
        entry_ebx.b = *arg1
    
    if (arg4[-3] == 0 || arg4[-5] == 0 || arg4[-4] == 0 || arg4[-6] == 0)
    label_4d7b4d:
        *esp
        esp[1]
        *arg4
        return arg1
    
    arg4[-3]
    bool o_1 = unimplemented  {imul eax, dword [ebp-0xc], 0x2345}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(arg4[-3] * 0x8d14 + &data_61d714 + (arg4[-4] << 2) - 0x368) = arg4[-2]
    arg4[-5]
    bool o_2 = unimplemented  {imul eax, dword [ebp-0x14], 0x2345}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *(arg4[-5] * 0x8d14 + &data_61d714 + (arg4[-6] << 2) - 0x368) = arg4[-1]
    arg1 = data_77e234
    
    if (arg1 s<= 0)
        goto label_4d7b4d
    
    arg4[-7] = arg1
    label_4d7b3d:
    arg1 = sub_516ec0(&data_61d714)
    int32_t temp7_1 = arg4[-7]
    arg4[-7] -= 1
    
    if (temp7_1 == 1)
        goto label_4d7b4d
}
