// ============================================================
// 函数名称: sub_52bf20
// 虚拟地址: 0x52bf20
// WARP GUID: cd1d8980-e42f-5baf-af44-9e0dfcb34795
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_404754, sub_404874
// [被调用的父级函数]: sub_502b8c
// ============================================================

void* __convention("regparm")sub_52bf20(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg1
    int32_t* esp = &var_8
    int32_t i_1 = 8
    int32_t i
    
    do
        esp[-0x400] = i_1
        esp = &esp[-0x400]
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t eax = var_8
    int32_t entry_ebx
    esp[-0x37a] = entry_ebx
    esp[-0x37b] = arg3
    esp[-0x37c] = arg4
    void var_8dec
    __builtin_memcpy(&var_8dec, arg2, 0x8d14)
    char var_d8
    __builtin_memcpy(&var_d8, eax, 0xd4)
    sub_404874(&var_8dec, 0x48ec68)
    esp[-0x37d] = &var_4
    esp[-0x37e] = j_sub_4037f0
    TEB* fsbase
    esp[-0x37f] = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &esp[-0x37f]
    int32_t ebx = 0
    char eax_2 = 0
    
    while (true)
        int32_t var_474
        
        if (ebx s< var_474 && eax_2 == 0)
            int32_t temp1_1 = ebx
            ebx += 1
            
            if (add_overflow(temp1_1, 1))
                sub_403010()
                noreturn
            
            int32_t edx = ebx * 0x35
            bool o_2 = unimplemented  {imul edx, ebx, 0x35}
            
            if (o_2)
                break
            
            void var_8ec0
            void var_8ebf
            char var_d7
            
            if (*(&var_8ec0 + (edx << 2)) != var_d8)
                continue
            else
                void var_8e74
                int32_t var_8c
                
                if (*(&var_8ebf + (edx << 2)) != var_d7)
                    continue
                else if (*(&var_8e74 + (edx << 2)) != var_8c)
                    continue
                else
                    eax_2 = 1
                    continue
        
        esp[-0x37d]
        fsbase->NtTib.ExceptionList = esp[-0x37f]
        esp[-0x37d] = sub_52bff7
        void* result = &var_8dec
        sub_404754(result, 0x48ec68)
        return result
    
    sub_403010()
    noreturn
}
