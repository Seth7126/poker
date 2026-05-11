// ============================================================
// 函数名称: sub_40353c
// 虚拟地址: 0x40353c
// WARP GUID: 8d5c7e3f-1224-52f5-811d-dd0c98597dc0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: UnhandledExceptionFilter, RtlUnwind
// [内部子函数调用]: sub_40345c, sub_406c44, sub_4034a4, sub_402ffc
// [被调用的父级函数]: j_sub_40353c, sub_48f5f8
// ============================================================

int32_tsub_40353c(EXCEPTION_POINTERS arg1, uint32_t arg2)
{
    // 第一条实际指令: EXCEPTION_RECORD* ExceptionRecord = arg1.ExceptionRecord
    EXCEPTION_RECORD* ExceptionRecord = arg1.ExceptionRecord
    
    if ((ExceptionRecord->ExceptionFlags & 6) == 0)
        uint32_t edx_1 = ExceptionRecord->ExceptionInformation[1]
        void* ExceptionAddress = ExceptionRecord->ExceptionInformation[0]
        
        if (ExceptionRecord->ExceptionCode == 0xeedfade)
            goto label_4035c9
        
        sub_402ffc()
        int32_t edx_2 = data_53100c
        
        if (edx_2 != 0)
            uint32_t eax = edx_2()
            
            if (eax != 0)
                EXCEPTION_RECORD* ExceptionRecord_1 = arg1.ExceptionRecord
                
                if (ExceptionRecord_1->ExceptionCode != 0xeefface)
                    sub_40345c(ExceptionRecord_1, arg2)
                
                if (ExceptionRecord_1->ExceptionCode == 0xeefface || data_52e00c u<= 0
                        || data_52e008 u> 0)
                    edx_1 = eax
                    ExceptionRecord = arg1.ExceptionRecord
                    ExceptionAddress = ExceptionRecord->ExceptionAddress
                label_4035c9:
                    
                    if (data_52e00c u<= 1 || data_52e008 u> 0)
                        goto label_4035f0
                    
                    if (UnhandledExceptionFilter(&arg1) != 0)
                        goto label_4035f0
                else if (UnhandledExceptionFilter(&arg1) != 0)
                    edx_1 = eax
                    ExceptionRecord = arg1.ExceptionRecord
                    ExceptionAddress = ExceptionRecord->ExceptionAddress
                label_4035f0:
                    ExceptionRecord->ExceptionFlags |= 2
                    int32_t ebx
                    int32_t var_4_3 = ebx
                    int32_t esi
                    int32_t var_8_3 = esi
                    int32_t edi
                    int32_t var_c_2 = edi
                    int32_t ebp
                    int32_t var_10_2 = ebp
                    TEB* fsbase
                    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                    EXCEPTION_RECORD* ExceptionRecord_2 = ExceptionRecord
                    uint32_t var_1c = edx_1
                    void* ExceptionAddress_1 = ExceptionAddress
                    CONTEXT* ContextRecord = arg1.ContextRecord
                    int32_t ReturnValue = 0
                    RtlUnwind(ContextRecord, 0x403613, ExceptionRecord, ReturnValue)
                    CONTEXT* ContextRecord_1 = arg1.ContextRecord
                    int32_t* eax_4 = sub_406c44()
                    ReturnValue = *eax_4
                    *eax_4 = &ReturnValue
                    ContextRecord_1->Dr1
                    uint32_t Dr0 = ContextRecord_1->Dr0
                    ContextRecord_1->Dr0 = 0x40363f
                    sub_4034a4()
                    jump(Dr0 + 5)
    
    return 1
}
