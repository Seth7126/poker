// ============================================================
// 函数名称: sub_4ad707
// 虚拟地址: 0x4ad707
// WARP GUID: 9964c496-4bb8-549a-ab45-52571774bd58
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49d978, sub_404078, sub_408ebc, sub_406807, sub_403e4c, sub_40a074, sub_4ad140, sub_411a80, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ad707(char* arg1, int32_t* arg2, void* arg3 @ ebp, int32_t* arg4 @ esi, int32_t* arg5 @ edi)
{
    // 第一条实际指令: *arg5 += 1
    *arg5 += 1
    *arg1 += arg1.b
    char temp0 = *(arg4 + 0x65)
    *(arg4 + 0x65) += arg2:1.b
    void* ecx
    void* entry_ebx
    void* esp
    TEB* fsbase
    
    if (temp0 + arg2:1.b u>= temp0)
        void* ebp = *(arg5 + 0x6e) * 0xec8b5500
        void* var_28_1 = entry_ebx
        int32_t* var_2c_1 = arg4
        *(ebp - 0x10) = 0
        *(ebp - 0xc) = 0
        *(ebp - 8) = 0
        *(ebp - 4) = 0
        void* var_30_1 = ebp
        int32_t (* var_34_1)(void* arg1, void* arg2) = j_sub_4037f0
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        entry_ebx, arg3, arg4 = sub_4ad140(arg1, arg2)
        void var_8
        esp = &var_8
        int32_t ecx_2 = sub_411a80(arg4, "MAX-AGE", arg3 - 4)
        *(arg3 - 4)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(sub_408ebc(ecx_2, 0xffffffff))
        *(entry_ebx + 0x30) = eax_4
        *(entry_ebx + 0x34) = edx_1
        sub_411a80(arg4, "VERSION", arg3 - 8)
        sub_403e4c(entry_ebx + 0x38, *(arg3 - 8))
        ecx = arg3 - 0xc
    
    sub_411a80(arg4, "COMMENT", ecx)
    int32_t ecx_4 = sub_403e4c(entry_ebx + 0x3c, *(arg3 - 0xc))
    
    if (sub_404078(*(entry_ebx + 0x14)) == 0)
        *(entry_ebx + 0x28) = 0
        int32_t temp1_1 = *(entry_ebx + 0x34)
        bool o_1 = add_overflow(temp1_1, 0)
        
        if (temp1_1 == 0)
            int32_t temp2_1 = *(entry_ebx + 0x30)
            o_1 = add_overflow(temp2_1, 0)
            
            if (temp2_1 u>= 0)
                goto label_4ad7ba
        else if (temp1_1 s< 0 == o_1)
        label_4ad7ba:
            *(esp - 4) = 0
            *(esp - 8) = 0x3e8
            int32_t eax_12
            int32_t edx_5
            eax_12, edx_5 = sub_406807(ecx_4, *(entry_ebx + 0x34), *(entry_ebx + 0x30))
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(arg3 - 0x18) = eax_12
            *(arg3 - 0x14) = edx_5
            *(arg3 - 0x24) = float.t(*(arg3 - 0x18)) / fconvert.t(86400000f)
            int32_t ecx_5
            long double st0_1
            long double x87_r0
            long double x87_r1
            st0_1, ecx_5 = sub_40a074(x87_r0, x87_r1)
            *(esp - 8) = fconvert.d(st0_1 + *(arg3 - 0x24))
            int32_t* ebx_1
            long double x87_r2
            ebx_1, arg3 = sub_49d978(0, x87_r2, arg3 - 0x10, ecx_5)
            *(arg3 - 0x10)
            (*(*ebx_1 + 0x20))()
    
    *(esp + 8)
    fsbase->NtTib.ExceptionList = *esp
    *(esp + 8) = sub_4ad82d
    return sub_403e1c(arg3 - 0x10, 4)
}
