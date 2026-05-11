// ============================================================
// 函数名称: sub_51260b
// 虚拟地址: 0x51260b
// WARP GUID: 4b705505-ba61-5e7e-a2d1-c21a93e1b106
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_47ab08, sub_50d454, sub_512654, sub_408e4c, sub_47a1c0, sub_404138, sub_4068a2, sub_403df8, sub_403e1c, sub_420b88, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_51260b(char* arg1, int32_t arg2, int32_t* arg3, void* arg4 @ ebp, int16_t* arg5 @ esi, int32_t arg6 @ edi, uint32_t arg7[0x4] @ xmm4)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    char* entry_ebx
    *arg1 += entry_ebx:1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    __orps_xmmxud_memxud(arg7, *(arg4 + 0x72))
    __bound_gprv_mema32(arg4, *(arg3 + 0x6e))
    void* const** esp
    
    if (temp1 == neg.b(arg1.b))
        char temp2_1 = *(arg6 + 0x69) & arg3:1.b
        *(arg6 + 0x69) = temp2_1
        bool cond:1_1 = temp2_1 == 0
        
        if (temp2_1 != 0)
            uint32_t cr0
            __mov_cr_gpr32_cr(cr0)
            arg3 -= 1
            void* const* var_4 = &__return_addr
            esp = &var_4
            char temp3_1 = arg1.b
            arg1.b -= 0x20
            void* var_8
            void** esp_2
            
            if (temp3_1 u>= 0x20)
                entry_ebx[0x55] += arg2.b
                arg5 = arg1
                arg1 = nullptr
                var_8 = arg4 + 1
                int32_t (* var_c_1)(void* arg1, void* arg2) = j_sub_4037f0
                TEB* fsbase
                void* ExceptionList = fsbase->NtTib.ExceptionList
                esp_2 = &ExceptionList
            label_5126a6:
                *(fsbase + arg1) = esp_2
                sub_403df8(arg4 - 3)
                
                if (*(arg5 + 0x345) != 0 && sub_50d454(*(arg5 + 0xc)) != 0)
                    *(esp_2 - 4) = 0x5127e8
                    *(esp_2 - 8) = 0
                    *(esp_2 - 0xc) = 0
                    *(esp_2 - 0x10) = 0
                    *(esp_2 - 0x14) = 0x3e8
                    int32_t eax_6
                    int32_t edx_1
                    edx_1:eax_6 = sx.q(*(*(arg5 + 0xc) + 0x3a78))
                    *(esp_2 - 0x18) = edx_1
                    *(esp_2 - 0x1c) = eax_6
                    uint32_t eax_7
                    int32_t ecx_1
                    eax_7, ecx_1 = GetTickCount()
                    *(esp_2 - 0x20) = 0
                    *(esp_2 - 0x24) = eax_7
                    int32_t eax_10
                    int32_t edx_2
                    edx_2:eax_10 = sx.q(*(*(arg5 + 0xc) + 4))
                    int32_t temp9_1 = *(esp_2 - 0x24)
                    *(esp_2 - 0x24) -= eax_10
                    *(esp_2 - 0x20) = sbb.d(*(esp_2 - 0x20), edx_2, temp9_1 u< eax_10)
                    int32_t eax_11 = *(esp_2 - 0x24)
                    int32_t edx_3 = *(esp_2 - 0x20)
                    int32_t temp10_1 = *(esp_2 - 0x1c)
                    *(esp_2 - 0x1c) -= eax_11
                    *(esp_2 - 0x18) = sbb.d(*(esp_2 - 0x18), edx_3, temp10_1 u< eax_11)
                    bool o_2 = unimplemented  {sbb dword [esp+0x4], edx}
                    int32_t eax_13
                    int32_t edx_5
                    eax_13, edx_5 = sub_4068a2(ecx_1, *(esp_2 - 0x18), *(esp_2 - 0x1c))
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    *(esp_2 - 0xc) = edx_5
                    *(esp_2 - 0x10) = eax_13
                    int32_t eax_14
                    int32_t edx_6
                    eax_14, edx_6 = sub_420b88()
                    *(esp_2 - 4) = edx_6
                    *(esp_2 - 8) = eax_14
                    sub_408e4c()
                    *(esp_2 - 4) = *(arg4 - 7)
                    *(esp_2 - 8) = &data_5127f8
                    sub_404138(arg4 - 3, 3)
                
                void* eax_17 = data_530a74
                *eax_17
                bool o_3 = unimplemented  {imul eax, dword [eax], 0x1038}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                void* edx_10 = data_5307f4
                *edx_10
                bool o_4 = unimplemented  {imul edx, dword [edx], 0x23}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                *(*(*data_530304 + 0xab0) + *eax_17 * 0x81c0 + *edx_10 * 0x118 - 0x74) = 0x40000000
                *(esp_2 - 4) = *(arg4 - 3)
                int80_t x87_r0
                sub_47ab08(*data_530304, *data_530a74, *data_5307f4, x87_r0)
                int32_t eax_23
                eax_23.b = *(arg4 - 3) != 0
                *(esp_2 - 8) = eax_23
                sub_47a1c0(*data_5307f4, *data_530a74, *data_530304)
                esp_2[1]
                fsbase->NtTib.ExceptionList = *(esp_2 - 4)
                esp_2[1] = sub_5127d7
                sub_403e1c(arg4 - 7, 2)
                return 
            
            arg5 = *(arg1 - 1) * 0x16ffffff
            *arg1 += arg1.b
            char temp4_1 = *arg1
            *arg1 += arg1:1.b
            
            if (temp4_1 + arg1:1.b u>= temp4_1)
                var_8 = *arg1
                esp_2 = &var_8
                goto label_5126a6
            
            int32_t eflags_1
            int16_t temp0_1
            temp0_1, eflags_1 = __arpl_memw_gpr16(*arg5, (arg4 + 1).w)
            *arg5 = temp0_1
            char temp6_1 = entry_ebx[0x64] & arg3:1.b
            entry_ebx[0x64] = temp6_1
            cond:1_1 = temp6_1 == 0
        
        *(arg5 + 0x65)
        *(esp - 4) = 0x68636972
        esp -= 4
        
        if (not(cond:1_1))
            *arg1 += arg1.b
            return sub_512654(arg1) __tailcall
        
        arg1.b = 0x85
        *arg1 = &arg1[*arg1]
        *arg1 -= 0x7b
        
        while (true)
            arg2 += 1
            int32_t* temp5_1 = arg3
            arg3 -= 1
            
            if (temp5_1 == 1)
                break
            
            int32_t esi = arg2 * 0xe9
            bool o_1 = unimplemented  {imul esi, edx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (arg1[(esi << 2) - 0x50] == 1)
                arg1[(esi << 2) - 0x50] = 4
                arg1[(esi << 2) + 0x185] = 0
    
    *esp
    esp[1]
}
