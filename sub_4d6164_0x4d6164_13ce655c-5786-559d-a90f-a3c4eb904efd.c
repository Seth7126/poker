// ============================================================
// 函数名称: sub_4d6164
// 虚拟地址: 0x4d6164
// WARP GUID: 13ce655c-5786-559d-a90f-a3c4eb904efd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d624a, sub_4d6209
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4d6164(char* arg1, char* arg2, char* arg3, int32_t* arg4 @ ebp, uint16_t* arg5 @ esi, uint8_t* arg6 @ edi, uint16_t* arg7, uint16_t arg8, int32_t arg9, int32_t arg10, int16_t arg11, int32_t arg12, int32_t arg13, uint16_t* arg14, uint16_t arg15, int32_t arg16, int32_t arg17, int32_t arg18, void* arg19)
{
    // 第一条实际指令: char temp1 = *arg3
    char temp1 = *arg3
    *arg3 += arg3.b
    bool c_4 = temp1 + arg3.b u< temp1
    bool p = unimplemented  {add byte [ecx], cl}
    int32_t eflags
    uint16_t* esi = __outsb(arg2.w, *arg5, arg5, eflags)
    
    if (not(p))
        int32_t eflags_1
        int16_t temp0
        temp0, eflags_1 = __arpl_memw_gpr16(*(arg4 + (esi << 1) + 0x61), esi.w)
        *(arg4 + (esi << 1) + 0x61) = temp0
        uint8_t* edi
        uint8_t temp0_1
        temp0_1, edi = __insb(arg6, arg2.w, eflags_1)
        *edi = temp0_1
        void* edi_1 = *(arg2 + 0x65) * 0x7e6c000f
        char temp2 = *arg1
        *arg1 += arg3.b
        bool c = temp2 + arg3.b u< temp2
        
        if (c && temp2 != neg.b(arg3.b) && c)
            jump(0x4d617f)
        
        arg1[esi << 1] += arg3.b
        *(edi_1 + 0x6c)
        bool c_1 = unimplemented  {imul ebx, dword [edi+0x6c], 0x6f}
        bool o = unimplemented  {imul ebx, dword [edi+0x6c], 0x6f}
        int32_t eflags_2
        TEB* fsbase
        int16_t temp0_3
        temp0_3, eflags_2 = __arpl_memw_gpr16(*(fsbase + arg12 + 0x69), arg8)
        *(fsbase + arg12 + 0x69) = temp0_3
        
        if (o)
            char temp7 = *(arg10 + (arg12 << 1))
            *(arg10 + (arg12 << 1)) += arg11.b
            
            if (temp7 != neg.b(arg11.b))
                jump(sub_4d624a+0x98)
            
            jump(sub_4d624a+0x24)
        
        char temp8 = arg12.b
        *(__return_addr + 0x4d) = adc.b(*(__return_addr + 0x4d), arg11:1.b, 
            adc.b(temp8, 0, c_1) u< temp8 || (c_1 && adc.b(temp8, 0, c_1) == temp8))
        char temp9 = *0x6c5f6b70
        *0x6c5f6b70 += arg11.b
        __outsd(arg10.w, *arg7, arg7, eflags_2)
        int32_t eflags_3
        int16_t temp0_4
        temp0_4, eflags_3 = __arpl_memw_gpr16(*(fsbase + arg19 + 0x69), arg15)
        *(fsbase + arg19 + 0x69) = temp0_4
        
        if (add_overflow(temp9, arg11.b))
            jump(sub_4d624a+0x32)
        
        return sub_4d6209(arg19, arg17, arg14, arg13, arg18) __tailcall
    
    bool cond:0
    bool cond:1
    
    if (c_4)
        esi -= 1
        char temp3_1 = arg2[arg1 << 1]
        arg2[arg1 << 1] += arg3.b
        cond:0 = temp3_1 == neg.b(arg3.b)
        cond:1 = temp3_1 != neg.b(arg3.b)
    else
        if (temp1 + arg3.b s>= 0)
            arg1.b = adc.b(arg1.b, *arg1, c_4)
            int32_t* var_4 = arg4
            void var_4d6f
            bool cond:2 = (&var_4d6f | *(arg2 + 0x69)) u< 0
            uint8_t* edi_2
            uint8_t temp0_2
            temp0_2, edi_2 = __insb(arg6, arg2.w, eflags)
            *edi_2 = temp0_2
            
            if (cond:2)
                jump(&data_4d6240:3)
            
            jump(0x4d61de)
        
        char* temp4_1 = arg2
        arg2 = &arg2[1]
        cond:0 = temp4_1 == 0xffffffff
        cond:1 = temp4_1 != 0xffffffff
    
    if (not(cond:1))
        if (cond:0)
            *arg1 += arg3:1.b
            undefined
        
        return sub_4d624a(arg1, arg2, arg3, arg4, esi, arg6) __tailcall
    
    char temp6 = arg2[arg1 << 1]
    arg2[arg1 << 1] += arg3.b
    bool z_1 = temp6 == neg.b(arg3.b)
    
    if (not(z_1))
        if (temp6 + arg3.b u>= temp6)
            jump(sub_4d6394+0xc)
        
        jump(sub_4d624a+0xee)
    
    if (z_1)
        jump(sub_4d624a+0xe9)
    
    jump(sub_4d624a+0x7a)
}
