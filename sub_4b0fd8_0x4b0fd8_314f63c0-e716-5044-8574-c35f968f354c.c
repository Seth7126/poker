// ============================================================
// 函数名称: sub_4b0fd8
// 虚拟地址: 0x4b0fd8
// WARP GUID: 314f63c0-e716-5044-8574-c35f968f354c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408ad8, sub_408b34, sub_404280, sub_403e1c
// [被调用的父级函数]: sub_4b19b0, sub_4b0427, sub_4b0000
// ============================================================

int32_t __convention("regparm")sub_4b0fd8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_c
    sub_404280(3, 6, *(arg1 + 0x70), &var_c)
    int32_t ebx_1 = 0
    void** esi_1 = &data_52fdc8
    
    do
        if (sub_408ad8(*esi_1, var_c) != 0)
            *(arg1 + 0x7c) = ebx_1.b
            break
        
        ebx_1 += 1
        esi_1 = &esi_1[1]
    while (ebx_1.b != 2)
    
    (*(**(arg1 + 0x68) + 0x48))()
    char eax_9 = (*(**(arg1 + 0x68) + 0x54))(arg1)
    *(arg1 + 0x74) = eax_9
    
    if (eax_9 != 0)
        void* eax_12
        eax_12.b = *(*(arg1 + 0x68) + 0xf4)
        char temp0_1 = eax_12.b
        eax_12.b -= 1
        
        if (temp0_1 u< 1)
            char* var_18
            sub_408b34(*(arg1 + 0xc), &var_18)
            char eax_24
            
            if (sub_408ad8(var_18, "KEEP-ALIVE") != 0)
                eax_24 = 1
            else
                sub_408b34(*(arg1 + 0x58), &var_1c)
                
                if (sub_408ad8(var_1c, "KEEP-ALIVE") != 0)
                    eax_24 = 1
                else
                    eax_24 = 0
            
            *(arg1 + 0x74) = eax_24
        else if (temp0_1 == 1)
            char* var_10
            sub_408b34(*(arg1 + 0xc), &var_10)
            char eax_16 = sub_408ad8(var_10, "CLOSE")
            char eax_20
            
            if (eax_16 == 0)
                char* var_14
                sub_408b34(*(arg1 + 0x58), &var_14)
                eax_20 = sub_408ad8(var_14, "CLOSE")
            
            if (eax_16 == 0 && eax_20 == 0)
                eax_20 = 1
            else
                eax_20 = 0
            
            *(arg1 + 0x74) = eax_20
    
    *(arg1 + 0x74)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4b1133
    return sub_403e1c(&var_1c, 5)
}
