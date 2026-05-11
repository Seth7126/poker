// ============================================================
// 函数名称: sub_42eed4
// 虚拟地址: 0x42eed4
// WARP GUID: 36cf8122-8bfd-5e6a-a078-db91940e9bdb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_42eed4, sub_410524
// [被调用的父级函数]: sub_42eed4, sub_42efd0
// ============================================================

int32_t* __convention("regparm")sub_42eed4(int32_t* arg1)
{
    // 第一条实际指令: void* const eax_3
    void* const eax_3
    
    if ((*(arg1 + 0x47) != 0 || ((arg1[8].b & 0x10) != 0 && (*(arg1 + 0x41) & 4) == 0))
            && (*(arg1 + 0x44) & 8) == 0)
        eax_3.b = 1
    else
        eax_3 = nullptr
    
    char var_9 = eax_3.b
    
    if (var_9 != 0)
        if (arg1[0x53] == 0)
            (*(*arg1 + 0x8c))()
        
        void* eax_7 = arg1[0x60]
        
        if (eax_7 != 0)
            int32_t ebx_2 = *(eax_7 + 8) - 1
            
            if (ebx_2 s>= 0)
                int32_t i_1 = ebx_2 + 1
                int32_t esi_1 = 0
                int32_t i
                
                do
                    sub_410524(arg1[0x60], esi_1)
                    sub_42eed4()
                    esi_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
    
    int32_t* result = arg1
    
    if (result[0x53] != 0)
        result.b = arg1[0x5a].b
        
        if (result.b != var_9)
            arg1[0x5a].b = var_9
            int32_t __saved_ebp
            int32_t* var_1c_1 = &__saved_ebp
            int32_t (* var_20_1)() = j_sub_40353c
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_42c754(arg1, 0)
            result = nullptr
            fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}
