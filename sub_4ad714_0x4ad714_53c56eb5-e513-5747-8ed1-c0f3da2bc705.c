// ============================================================
// 函数名称: sub_4ad714
// 虚拟地址: 0x4ad714
// WARP GUID: 53c56eb5-e513-5747-8ed1-c0f3da2bc705
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49d978, sub_404078, sub_408ebc, sub_406807, sub_403e4c, sub_40a074, sub_4ad140, sub_411a80, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_4ad8c0
// ============================================================

int32_t __convention("regparm")sub_4ad714(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_2c = ebx
    int32_t esi
    int32_t var_30 = esi
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx_2
    void* ebp_1
    int32_t* esi_2
    ebx_2, ebp_1, esi_2 = sub_4ad140(arg1, arg2)
    int32_t ecx_1 = sub_411a80(esi_2, "MAX-AGE", ebp_1 - 4)
    *(ebp_1 - 4)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(sub_408ebc(ecx_1, 0xffffffff))
    *(ebx_2 + 0x30) = eax_4
    *(ebx_2 + 0x34) = edx_1
    sub_411a80(esi_2, "VERSION", ebp_1 - 8)
    sub_403e4c(ebx_2 + 0x38, *(ebp_1 - 8))
    sub_411a80(esi_2, "COMMENT", ebp_1 - 0xc)
    int32_t ecx_4 = sub_403e4c(ebx_2 + 0x3c, *(ebp_1 - 0xc))
    
    if (sub_404078(*(ebx_2 + 0x14)) == 0)
        *(ebx_2 + 0x28) = 0
        int32_t temp0_1 = *(ebx_2 + 0x34)
        bool o_1 = add_overflow(temp0_1, 0)
        
        if (temp0_1 == 0)
            int32_t temp1_1 = *(ebx_2 + 0x30)
            o_1 = add_overflow(temp1_1, 0)
            
            if (temp1_1 u>= 0)
                goto label_4ad7c7
        else if (temp0_1 s< 0 == o_1)
        label_4ad7c7:
            int32_t eax_12
            int32_t edx_5
            eax_12, edx_5 = sub_406807(ecx_4, *(ebx_2 + 0x34), *(ebx_2 + 0x30), 0x3e8, 0)
            
            if (o_1)
                sub_403010()
                noreturn
            
            *(ebp_1 - 0x18) = eax_12
            *(ebp_1 - 0x14) = edx_5
            *(ebp_1 - 0x24) = float.t(*(ebp_1 - 0x18)) / fconvert.t(86400000f)
            int32_t ecx_5
            long double st0_1
            long double x87_r0
            long double x87_r1
            st0_1, ecx_5 = sub_40a074(x87_r0, x87_r1)
            int32_t var_10_1
            var_10_1.q = fconvert.d(st0_1 + *(ebp_1 - 0x24))
            int32_t* ebx_3
            long double x87_r2
            ebx_3, ebp_1 = sub_49d978(0, x87_r2, ebp_1 - 0x10, ecx_5)
            *(ebp_1 - 0x10)
            (*(*ebx_3 + 0x20))(var_8)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4ad82d
    return sub_403e1c(ebp_1 - 0x10, 4)
}
