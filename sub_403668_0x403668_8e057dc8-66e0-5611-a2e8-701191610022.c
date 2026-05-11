// ============================================================
// 函数名称: sub_403668
// 虚拟地址: 0x403668
// WARP GUID: 8e057dc8-66e0-5611-a2e8-701191610022
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: UnhandledExceptionFilter, RtlUnwind
// [内部子函数调用]: sub_402c90, sub_402ffc, sub_40345c, sub_403490, sub_406c44
// [被调用的父级函数]: j_sub_403668
// ============================================================

int32_tsub_403668(int32_t arg1 @ esi, int32_t arg2 @ edi, int32_t* arg3, void* arg4, uint32_t arg5)
{
    // 第一条实际指令: if ((arg3[1] & 6) == 0)
    if ((arg3[1] & 6) == 0)
        void* eax
        
        if (*arg3 == 0xeedfade)
            eax = *arg3[6]
        label_4036aa:
            EXCEPTION_POINTERS __saved_edi
            __saved_edi.ContextRecord = arg1
            __saved_edi.ExceptionRecord = arg2
            void* ecx_1 = *(arg4 + 4)
            int32_t ebx_1 = *(ecx_1 + 5)
            void* esi = ecx_1 + 9
            
            while (true)
                int32_t* eax_5 = *esi
                
                if (eax_5 == 0)
                    break
                
                void* edi = eax
                
                while (true)
                    void* eax_2 = *eax_5
                    
                    if (eax_2 == edi)
                        goto label_403701
                    
                    if (*(eax_2 - 0x28) == *(edi - 0x28))
                        char* eax_3 = *(eax_2 - 0x2c)
                        char* edx_3 = *(edi - 0x2c)
                        int32_t ecx_3
                        ecx_3.b = *eax_3
                        
                        if (ecx_3.b == *edx_3)
                            sub_402c90(&eax_3[1], &edx_3[1], ecx_3)
                            
                            if (edx_3 == 0xffffffff)
                                goto label_403701
                    
                    void** edi_1 = *(edi - 0x24)
                    eax_5 = *esi
                    
                    if (edi_1 == 0)
                        esi += 8
                        int32_t temp0_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp0_1 != 1)
                            break
                        
                        return 1
                    
                    edi = *edi_1
            
        label_403701:
            int32_t* ExceptionRecord = arg3
            int32_t edx_5 = ExceptionRecord[6]
            int32_t ecx_4 = ExceptionRecord[5]
            
            if (*ExceptionRecord == 0xeedfade)
                if (data_52e00c u<= 1 || data_52e008 u> 0)
                    goto label_403780
                
                if (UnhandledExceptionFilter(&__saved_edi) != 0)
                    goto label_403780
            else
                int32_t eax_6
                int32_t ecx_5
                eax_6, ecx_5 = data_53100c()
                sub_40345c(ecx_5, arg5)
                bool cond:2_1
                
                if (data_52e00c u> 0 && data_52e008 u<= 0)
                    cond:2_1 = UnhandledExceptionFilter(&__saved_edi) == 0
                
                if (data_52e00c u<= 0 || data_52e008 u> 0 || not(cond:2_1))
                    edx_5 = eax_6
                    ExceptionRecord = arg3
                    ecx_4 = ExceptionRecord[3]
                label_403780:
                    TEB* fsbase
                    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                    int32_t* ExceptionRecord_1 = ExceptionRecord
                    int32_t var_1c_2 = edx_5
                    int32_t var_20_2 = ecx_4
                    ExceptionRecord[1] |= 2
                    void* var_24 = esi
                    RtlUnwind(arg4, 0x40379b, ExceptionRecord, nullptr)
                    void* ebx_3 = var_24
                    void*** eax_9 = sub_406c44()
                    var_24 = *eax_9
                    *eax_9 = &var_24
                    *(arg4 + 8)
                    *(arg4 + 4) = 0x4037c7
                    sub_403490()
                    jump(*(ebx_3 + 4))
        else
            sub_402ffc()
            int32_t edx_1 = data_531008
            
            if (edx_1 != 0)
                eax = edx_1()
                
                if (eax != 0)
                    goto label_4036aa
    
    return 1
}
