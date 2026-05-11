// ============================================================
// 函数名称: sub_403ad0
// 虚拟地址: 0x403ad0
// WARP GUID: 55baec5f-facc-5e66-80d6-1509745545c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403b30
// ============================================================

int32_t*sub_403ad0()
{
    // 第一条实际指令: int32_t* result = data_5314ac
    int32_t* result = data_5314ac
    
    if (result != 0)
        int32_t esi_1 = *result
        int32_t ebx_1 = 0
        int32_t edi_1 = result[1]
        int32_t __saved_ebp
        int32_t* var_14_1 = &__saved_ebp
        int32_t (* var_18_1)() = j_sub_40353c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (esi_1 s> 0)
            do
                int32_t eax = *(edi_1 + (ebx_1 << 3))
                ebx_1 += 1
                data_5314b0 = ebx_1
                
                if (eax != 0)
                    eax()
            while (esi_1 s> ebx_1)
        
        result = nullptr
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}
