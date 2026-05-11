// ============================================================
// 函数名称: sub_403a70
// 虚拟地址: 0x403a70
// WARP GUID: f4cddbfa-8c68-5642-af83-ac1a62677daf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403c20
// ============================================================

void* constsub_403a70()
{
    // 第一条实际指令: void* const result = data_5314ac
    void* const result = data_5314ac
    
    if (result != 0)
        int32_t i = data_5314b0
        int32_t esi_1 = *(result + 4)
        int32_t __saved_ebp
        int32_t* var_14_1 = &__saved_ebp
        int32_t (* var_18_1)() = j_sub_40353c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        while (i s> 0)
            i -= 1
            data_5314b0 = i
            int32_t eax = *(esi_1 + (i << 3) + 4)
            
            if (eax != 0)
                eax()
        
        result = nullptr
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}
