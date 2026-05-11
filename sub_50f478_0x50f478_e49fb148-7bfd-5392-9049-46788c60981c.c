// ============================================================
// 函数名称: sub_50f478
// 虚拟地址: 0x50f478
// WARP GUID: e49fb148-7bfd-5392-9049-46788c60981c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_404054, sub_40422c, sub_50f39c, sub_408e80, sub_402bdc, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_50deb4, sub_50f0e4, sub_50f7b8
// ============================================================

void* __fastcallsub_50f478(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_134 = ebx
    int32_t esi
    int32_t var_138 = esi
    int32_t edi
    int32_t var_13c = edi
    int32_t var_130
    __builtin_memset(&var_130, 0, 0x1c)
    sub_40422c(arg1)
    int32_t* var_140 = &var_4
    int32_t (* var_144)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* var_14c = &var_4
    int32_t (* var_150)() = j_sub_40353c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char ebx_1 = 0
    *arg2 = 0
    int32_t edi_1 = 0
    
    while (true)
        if (ebp_1[-1] != 0 && ebx_1 == 0)
            bool o_1 = unimplemented  {imul eax, edi, 0x17}
            
            if (o_1)
                sub_403010()
                noreturn
            
            int32_t* esi_1 = ebp_1[-3] + edi_1 * 0xb8 + 4
            int32_t* var_158_1 = ebp_1
            int32_t edi_2
            ebx_1, ebp_1, edi_2 = sub_50f39c(0, &ebp_1[-0x45], arg1)
            sub_404054(&ebp_1[-0x44], ebp_1[-0x45], 0xff)
            int32_t eax_5
            eax_5, arg1 = sub_402bdc(&esi_1[4], &ebp_1[-0x44], 0x40)
            
            if (*(ebp_1 - 5) == 0)
                int32_t* var_158_2 = ebp_1
                eax_5.b = 1
                ebx_1, ebp_1, edi_2 = sub_50f39c(eax_5.b, &ebp_1[-0x46], arg1)
                eax_5, arg1 = sub_408e80(ebp_1[-0x46])
                *esi_1 = eax_5
            
            if (*(ebp_1 - 5) == 0)
                int32_t* var_158_3 = ebp_1
                eax_5.b = 1
                ebx_1, ebp_1, edi_2 = sub_50f39c(eax_5.b, &ebp_1[-0x47], arg1)
                eax_5, arg1 = sub_408e80(ebp_1[-0x47])
                esi_1[1] = eax_5
            
            if (*(ebp_1 - 5) == 0)
                int32_t* var_158_4 = ebp_1
                eax_5.b = 1
                ebx_1, ebp_1, edi_2 = sub_50f39c(eax_5.b, &ebp_1[-0x48], arg1)
                int32_t eax_9
                eax_9, arg1 = sub_408e80(ebp_1[-0x48])
                esi_1[2] = eax_9
            
            esi_1[3] = esi_1[2]
            
            if (*(ebp_1 - 5) == 0)
                int32_t* var_158_5 = ebp_1
                ebx_1, ebp_1, edi_2 = sub_50f39c(0, &ebp_1[-0x49], arg1)
                sub_404054(&ebp_1[-0x44], ebp_1[-0x49], 0xff)
                arg1 = sub_402bdc(esi_1 + 0x51, &ebp_1[-0x44], 0x52)
            
            if (*(ebp_1 - 5) == 0)
                int32_t* var_158_6 = ebp_1
                ebx_1, ebp_1, edi_2 = sub_50f39c(0, &ebp_1[-0x4a], arg1)
                sub_404054(&ebp_1[-0x44], ebp_1[-0x4a], 0xff)
                arg1 = sub_402bdc(&esi_1[0x29], &ebp_1[-0x44], 0x12)
            
            if (ebx_1 == 0)
                if (esi_1[4].b u> 0x40 || *(esi_1 + 0x51) u> 0x52 || esi_1[0x29].b u> 0x12)
                    ebx_1 = 1
                else
                    ebx_1 = 0
                
                while (*(ebp_1 - 5) == 0)
                    int32_t* var_158_7 = ebp_1
                    ebx_1, ebp_1, edi_2 = sub_50f39c(0, &ebp_1[-0x4b], arg1)
                    arg1 = var_158_7
                
                edi_1 = edi_2 + 1
                
                if (add_overflow(edi_2, 1))
                    sub_403010()
                    noreturn
                
                int32_t* eax_15 = ebp_1[-3]
                int32_t temp1_1 = *eax_15
                *eax_15 += 1
                
                if (not(add_overflow(temp1_1, 1)))
                    continue
                
                sub_403010()
                noreturn
        
        *(ebp_1[-3] + 0x907c) = 1
        *(ebp_1[-3] + 0x9080) = GetTickCount()
        fsbase->NtTib.ExceptionList = ExceptionList
        break
    
    if (ebx_1 != 0)
        *(ebp_1[-3] + 0x907c) = 0
        *ebp_1[-3] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_140_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_50f6e2
    sub_403e1c(&ebp_1[-0x4b], 7)
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
