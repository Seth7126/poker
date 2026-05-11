// ============================================================
// 函数名称: sub_4ed284
// 虚拟地址: 0x4ed284
// WARP GUID: 83cc3f04-d09a-58ee-b507-a4f63884ad66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404308, sub_40422c, sub_404078, sub_4042c0, sub_403e4c, sub_5207dc, sub_403010, sub_403fa0, sub_403df8, sub_403e1c, sub_46910c, sub_408e80
// [被调用的父级函数]: sub_4ed7a0
// ============================================================

void* __convention("regparm")sub_4ed284(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t edx
    int32_t var_c = edx
    sub_40422c(arg1)
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi_1 = 1
    int32_t temp0_1
    
    do
        if (edi_1 s>= sub_404078(ebp_1[-1]))
            sub_403e4c(ebp_1[-2], ebp_1[-1])
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4ed483
            sub_403e1c(&ebp_1[-4], 2)
            sub_403df8(&ebp_1[-1])
            return &ebp_1[-1]
        
        if (*(ebp_1[-1] + edi_1 - 1) == 0x25)
            int32_t esi_1 = sx.d(*((data_7a7644 << 3) + &data_7a6eb9))
            sub_403df8(&ebp_1[-3])
            ebx.b = ebp_1[-1][edi_1]
            
            if (ebx.b - 0x31 u< 9)
                sub_403fa0()
                int32_t eax_9 = sub_408e80(ebp_1[-4])
                sub_5207dc(*data_5301f4, eax_9, 0, &ebp_1[-3], nullptr)
            
            if (ebp_1[-1][edi_1] == 0x61)
                sub_5207dc(*data_5301f4, esi_1, 0, &ebp_1[-3], nullptr)
            
            if (*(*data_5301f4 + esi_1 + 0x111ef) == 0)
                if (ebp_1[-1][edi_1] == 0x62)
                    ebp_1 = sub_46910c(*data_530304, 0x4ed4b8, &ebp_1[-3])
                
                if (ebp_1[-1][edi_1] == 0x63)
                    ebp_1 = sub_46910c(*data_530304, 0x4ed4c4, &ebp_1[-3])
                
                if (ebp_1[-1][edi_1] == 0x64)
                    ebp_1 = sub_46910c(*data_530304, 0x4ed4d0, &ebp_1[-3])
            else
                if (ebp_1[-1][edi_1] == 0x62)
                    ebp_1 = sub_46910c(*data_530304, 0x4ed494, &ebp_1[-3])
                
                if (ebp_1[-1][edi_1] == 0x63)
                    ebp_1 = sub_46910c(*data_530304, 0x4ed4a0, &ebp_1[-3])
                
                if (ebp_1[-1][edi_1] == 0x64)
                    ebp_1 = sub_46910c(*data_530304, 0x4ed4ac, &ebp_1[-3])
            
            if (ebp_1[-3] != 0)
                sub_4042c0(&ebp_1[-1], edi_1, 2)
                sub_404308(ebp_1[-3], &ebp_1[-1], edi_1)
                int32_t eax_39 = sub_404078(ebp_1[-3])
                int32_t edi_2 = edi_1 + eax_39
                
                if (add_overflow(edi_1, eax_39))
                    sub_403010()
                    noreturn
                
                edi_1 = edi_2 - 2
                
                if (add_overflow(edi_2, 0xfffffffe))
                    sub_403010()
                    noreturn
        
        temp0_1 = edi_1
        edi_1 += 1
    while (not(add_overflow(temp0_1, 1)))
    sub_403010()
    noreturn
}
